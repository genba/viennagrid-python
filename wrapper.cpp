#include <boost/python.hpp>
using namespace boost::python;

char const * version()
{
	return "0.1.0";
}

BOOST_PYTHON_MODULE(viennawrapper)
{
	def("version", version);
}
