#pragma once

#include <memory>
#include <optional>
#include <string>

#define PY_SSIZE_T_CLEAN
#include <Python.h>

class PythonObject {
protected:
	PyObject *object_{ nullptr };

public:
	PythonObject(PyObject *obj = nullptr) noexcept;
	PythonObject(PythonObject &&O) noexcept;
	PythonObject(const PythonObject &O) noexcept;
	virtual ~PythonObject() noexcept;
	PythonObject &operator=(PythonObject &&O) noexcept;
	PythonObject &operator=(const PythonObject &O) noexcept;
	void Clear() noexcept;
	inline operator PyObject *() const noexcept {
		return object_;
	}

	PythonObject GetAttribute(const std::string &name) const noexcept;

	template <typename... ArgsT>
	std::optional<PythonObject> CallMethod(const std::string &name, ArgsT... args) const noexcept;
};

class PythonString : public PythonObject {
public:
	PythonString(const std::string &str);
	PythonString(PyObject *obj);
	inline operator std::string() { return PyUnicode_AsUTF8(*this); }
};

template <typename... ArgsT>
std::optional<PythonObject> PythonObject::CallMethod(const std::string &name, ArgsT... args) const noexcept {
	constexpr int numArgs = 1 + sizeof...(args);
	PyObject *allArgs[numArgs]{ object_, args... };
	PythonString pyName(name);
	PyObject *ret = PyObject_VectorcallMethod(pyName, allArgs, numArgs | PY_VECTORCALL_ARGUMENTS_OFFSET, NULL);
	if (ret == nullptr && PyErr_Occurred()) {
		PyErr_Print();
		return {};
	}
	return PythonObject(ret);
}

class PythonBytes : public PythonObject {
public:
	PythonBytes(const std::string &str);
	inline operator std::string() { return PyUnicode_AsUTF8(*this); }
};

class PythonDictionary : public PythonObject {
public:
	PythonDictionary();
	PythonDictionary(PyObject *obj);

	PythonObject GetItem(const std::string &key);
};

class PythonModule : public PythonObject {
public:
	PythonModule(const std::string &str);

	PythonDictionary GetDict() const noexcept;
};

bool Python_LoadCode(PythonDictionary &dict, const std::string &filename);

class PythonLong : public PythonObject {
public:
	PythonLong(long v);
	PythonLong(const PythonObject &v) :
			PythonObject(v) {}
	inline operator long() { return PyLong_AsLong(*this); }
};

class PythonDouble : public PythonObject {
public:
	PythonDouble(double v);
	inline operator double() { return PyFloat_AsDouble(*this); }
};

class PythonTuple : public PythonObject {
	template <typename ArgT>
	void _Set(int i, const ArgT &arg) {
		Set(i, arg);
	}
	template <typename ArgT, typename... ArgsT>
	void _Set(int i, const ArgT &arg, const ArgsT &...args) {
		Set(i, arg);
		_Set(i + 1, args...);
	}

public:
	PythonTuple(int size);
	bool Set(int index, const PythonObject &value);

	template <typename... ArgsT>
	void SetValues(const ArgsT &...args) {
		_Set(0, args...);
	}
};

class PythonCallable : public PythonObject {
public:
	PythonCallable(const PythonObject &obj);
	PythonCallable(PyObject *obj);

	std::optional<PythonObject> Call(const PythonTuple &args);
	std::optional<PythonObject> Call();
	template <typename... ArgsT>
	std::optional<PythonObject> Call(const ArgsT &...args) {
		constexpr int numArgs = sizeof...(ArgsT);
		if constexpr (numArgs == 0) {
			return Call();
		} else {
			PythonTuple tuple(sizeof...(args));
			tuple.SetValues(args...);
			return Call(tuple);
		}
	}
};
