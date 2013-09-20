/**
 * @file
 * @brief Class definitions for Boost.Python exception translation
 */

#ifndef EXCEPTION_TRANSLATOR_HPP
#define EXCEPTION_TRANSLATOR_HPP

/**
 * Generic C++-to-Python exception translator.
 * 
 * This generic class accepts a C++ exception as the template parameter
 * and a pointer to a Python exception as the constructor parameter.
 * With that information, it implements the call operator that extracts
 * the exception message from the C++ exception and translates the C++
 * exception to a Python exception with the same exception message.
 * 
 * @since 0.1.0
 */
template <typename T>
struct ExceptionTranslator {
	/**
	 * Pointer to the type of the Python exception.
	 * 
	 * @since 0.1.0
	 */
	PyObject *m_py_except;
public:
	/**
	 * Constructor of the exception translator.
	 * 
	 * @param py_except Pointer to the C type of the Python exception (in the form PyExc_<exception name>, e.g.: PyExc_IOError)
	 * 
	 * @since 0.1.0
	 */
	ExceptionTranslator(PyObject *py_except) : m_py_except(py_except) {}
	
	/**
	 * Call operator, which translates a C++ exception to a Python exception when called.
	 * 
	 * Given the pointer to the type of the Python exception specified upon construction
	 * of the exception translator object, the call operator extracts the exception message
	 * from the C++ exception and translates the C++ exception to a Python exception with
	 * the same exception message.
	 * 
	 * In order to extract the exception message, this method calls the what() method on
	 * the exception object. Thus, the exception class must implement the what() method.
	 * This is true for C++'s STL exceptions, and you can implement the what() method in
	 * your own exception classes to return the exception message as a C string (const char *).
	 * 
	 * @param cxx_except Type of the C++ exception to be translated
	 * 
	 * @since 0.1.0
	 */
	void operator()(const T& cxx_except) const
	{
		PyErr_SetString(m_py_except, cxx_except.what());
	}
};

#endif
