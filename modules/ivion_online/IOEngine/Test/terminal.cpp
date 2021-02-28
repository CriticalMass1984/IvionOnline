#include <IOEngine/GameInstance.hpp>

#include <cassert>
#include <cstdio>

//https://stackoverflow.com/questions/49221417/pyrun-file-with-recursive-functions-in-python-c-api

void PrintError() {
	if (PyErr_Occurred()) {
		PyObject *ptype;
		PyObject *pvalue;
		PyObject *ptraceback;
		PyErr_Fetch(&ptype, &pvalue, &ptraceback);
		PyErr_NormalizeException(&ptype, &pvalue, &ptraceback); // in order to convert pvalue from tuples to real objects

		//Attach exception name first
		PyObject *objectStr = PyObject_GetAttrString(ptype, "__name__");
		std::string result = PythonString(objectStr);
		result = "Exception: " + result;
		;
		Py_XDECREF(objectStr);
		objectStr = PyObject_Str(pvalue);
		if (objectStr != NULL) {
			result = result + " was raised with error message : " + std::string(PythonString(objectStr));
			Py_XDECREF(objectStr);
		}
		fprintf(stderr, "Python Error: %s\n", result.c_str());
	}
}

int main(int argc, char **argv) {
	GameInstance game;

	auto hp = game.GetPythonObject("/Players/0/Health");
	assert(hp);
	long value = PythonLong(hp.value().GetAttribute("_value"));
	fprintf(stdout, "Value: %ld\n", value);
}