#include <IOEngine/Python++.hpp>

#include <cstdio>
#include <memory>
#include <string>

#define PY_SSIZE_T_CLEAN
#include <Python.h>

class PythonInterpreter {
public:
	PythonInterpreter() {
		Py_Initialize();
	}

	~PythonInterpreter() {
		Py_FinalizeEx();
	}
	static std::unique_ptr<PythonInterpreter> interpreter_;
};
std::unique_ptr<PythonInterpreter> PythonInterpreter::interpreter_(std::make_unique<PythonInterpreter>());

PythonObject::PythonObject(PyObject *obj) noexcept :
		object_(obj) {}
PythonObject::PythonObject(PythonObject &&O) noexcept {
	if (O.object_ != nullptr) {
		object_ = O.object_;
		Py_INCREF(object_);
	}
}
PythonObject::PythonObject(const PythonObject &O) noexcept {
	if (O.object_ != nullptr) {
		object_ = O.object_;
		Py_INCREF(object_);
	}
}
PythonObject::~PythonObject() noexcept {
	Clear();
}
PythonObject &PythonObject::operator=(PythonObject &&O) noexcept {
	Clear();

	if (O.object_) {
		object_ = O.object_;
		Py_INCREF(object_);
	}
}
PythonObject &PythonObject::operator=(const PythonObject &O) noexcept {
	Clear();
	if (O.object_) {
		object_ = O.object_;
		Py_INCREF(object_);
	}
}
void PythonObject::Clear() noexcept {
	if (object_) {
		Py_DECREF(object_);
		object_ = nullptr;
	}
}

PythonObject PythonObject::GetAttribute(const std::string &name) const noexcept {
	return PythonObject(PyObject_GetAttrString(*this, name.c_str()));
}

PythonString::PythonString(const std::string &str) :
		PythonObject(PyUnicode_DecodeFSDefault(str.c_str())) {
}
PythonString::PythonString(PyObject *obj) :
		PythonObject(obj) {
}

PythonBytes::PythonBytes(const std::string &str) :
		PythonObject(PyBytes_FromStringAndSize(str.c_str(), str.size())) {
}

PythonDictionary::PythonDictionary(PyObject *obj) :
		PythonObject(obj) {
}
PythonDictionary::PythonDictionary() :
		PythonObject(PyDict_New()) {
}
PythonObject PythonDictionary::GetItem(const std::string &key) {
	return PythonObject(PyDict_GetItemString(object_, key.c_str()));
}
PythonModule::PythonModule(const std::string &str) :
		PythonObject(PyImport_AddModule(str.c_str())) {
	if (object_ == nullptr && PyErr_Occurred()) {
		PyErr_Print();
	}
}

PythonDictionary PythonModule::GetDict() const noexcept {
	return PythonDictionary(PyModule_GetDict(object_));
}

bool Python_LoadCode(PythonDictionary &dict, const std::string &filename) {
	FILE *file = fopen64(filename.c_str(), "r");
	if (file == nullptr) {
		perror("Could not open file");
		return false;
	}
	auto ret = PythonObject(PyRun_File(file, filename.c_str(), Py_file_input, dict, dict));
	fclose(file);

	if (ret == nullptr && PyErr_Occurred()) {
		PyErr_Print();
		return false;
	}
	return true;
}

PythonLong::PythonLong(long v) :
		PythonObject(PyLong_FromLong(v)) {}

PythonDouble::PythonDouble(double v) :
		PythonObject(PyFloat_FromDouble(v)) {}

PythonTuple::PythonTuple(int size) :
		PythonObject(PyTuple_New(size)) {}
bool PythonTuple::Set(int index, const PythonObject &value) {
	Py_INCREF(value);
	/* pValue reference stolen here: */
	if (PyTuple_SetItem(*this, index, value) == -1) {
		if (PyErr_Occurred()) {
			PyErr_Print();
		}
		return false;
	}
	return true;
}
PythonCallable::PythonCallable(const PythonObject &obj) :
		PythonObject(obj) {
	if (!PyCallable_Check(*this)) {
		if (PyErr_Occurred()) {
			PyErr_Print();
		}
		Clear();
	}
}
PythonCallable::PythonCallable(PyObject *obj) :
		PythonObject(obj) {
	if (!PyCallable_Check(*this)) {
		if (PyErr_Occurred()) {
			PyErr_Print();
		}
		Clear();
	}
}

std::optional<PythonObject> PythonCallable::Call(const PythonTuple &args) {
	PythonObject retVal(PyObject_CallObject(*this, args));
	if (retVal == nullptr) {
		if (PyErr_Occurred()) {
			PyErr_Print();
			return {};
		}
	}
	return { retVal };
}
std::optional<PythonObject> PythonCallable::Call() {
	PythonObject retVal(PyObject_CallObject(*this, nullptr));
	if (retVal == nullptr) {
		if (PyErr_Occurred()) {
			PyErr_Print();
			return {};
		}
	}
	return { retVal };
}
