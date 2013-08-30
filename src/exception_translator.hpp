#ifndef EXCEPTION_TRANSLATOR_HPP
#define EXCEPTION_TRANSLATOR_HPP

template <typename T>
struct ExceptionTranslator {
	PyObject *m_py_except;
public:
	ExceptionTranslator(PyObject *py_except) : m_py_except(py_except) {}

	void operator()(const T& cxx_except) const
	{
		PyErr_SetString(m_py_except, cxx_except.what());
	}
};

#endif
