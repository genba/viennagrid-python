#include <boost/python.hpp>
using namespace boost::python;

#include "points/cartesian.hpp"
#include "points/cylindrical.hpp"
#include "points/polar.hpp"
#include "points/spherical.hpp"

#include "domains/triangular.hpp"

#include "segments/triangular.hpp"

char const * version()
{
	return "0.1.0";
}

BOOST_PYTHON_MODULE(viennagrid_wrapper)
{
	def("version", version);
	
	/***********************
	 * WRAPPERS FOR POINTS *
	 ***********************/
	
	// CARTESIAN 2D
	
	class_<PointCartesian2D>("_PointCartesian2D")
		.def(init<double, double>())
		.add_property("dim", &PointCartesian2D::get_dimension, "Dimension of the space where the point is defined.")
		.add_property("coord_system", &PointCartesian2D::get_coord_system, "Coordinate system of the space where the point is defined.")
		.def(self == self)
	;
	
	// CARTESIAN 3D
	
	class_<PointCartesian3D>("_PointCartesian3D")
		.def(init<double, double, double>())
		.add_property("dim", &PointCartesian3D::get_dimension, "Dimension of the space where the point is defined.")
		.add_property("coord_system", &PointCartesian3D::get_coord_system, "Coordinate system of the space where the point is defined.")
		.def(self == self)
	;
	
	// CYLINDRICAL (3D)
	
	class_<PointCylindrical3D>("_PointCylindrical3D")
		.def(init<double, double, double>())
		.add_property("dim", &PointCylindrical3D::get_dimension, "Dimension of the space where the point is defined.")
		.add_property("coord_system", &PointCylindrical3D::get_coord_system, "Coordinate system of the space where the point is defined.")
		.def(self == self)
	;
	
	// POLAR (2D)
	
	class_<PointPolar2D>("_PointPolar2D")
		.def(init<double, double>())
		.add_property("dim", &PointPolar2D::get_dimension, "Dimension of the space where the point is defined.")
		.add_property("coord_system", &PointPolar2D::get_coord_system, "Coordinate system of the space where the point is defined.")
		.def(self == self)
	;
	
	// SPHERICAL (3D)
	
	class_<PointSpherical3D>("_PointSpherical3D")
		.def(init<double, double, double>())
		.add_property("dim", &PointSpherical3D::get_dimension, "Dimension of the space where the point is defined.")
		.add_property("coord_system", &PointSpherical3D::get_coord_system, "Coordinate system of the space where the point is defined.")
		.def(self == self)
	;
	
	/**********************
	 * TRIANGULAR DOMAINS *
	 **********************/
	
	class_<TriangularCartesian2D_Domain>("_TriangularCartesian2D_Domain")
		.add_property("num_segments", &TriangularCartesian2D_Domain::get_num_segments, "Number of segments contained in the domain.")
		.add_property("num_vertices", &TriangularCartesian2D_Domain::get_num_vertices, "Number of vertices contained in the domain.")
		.def("create_segments", &TriangularCartesian2D_Domain::create_segments, "Create the specified amount of segments within the domain. This function must be called only once.")
		.def("add_vertex", &TriangularCartesian2D_Domain::add_vertex, "Add a vertex to the domain. This gives the vertex a unique ID.")
		.def("get_segment", &TriangularCartesian2D_Domain::get_segment, "Return the segment at the given index within the domain.")
		.def("get_vertex", &TriangularCartesian2D_Domain::get_vertex, "Return the vertex with the given unique ID (which was assigned when the vertex was added to the domain).")
		.add_property("iter_segments", range(&TriangularCartesian2D_Domain::segments_begin, &TriangularCartesian2D_Domain::segments_end), "Return a Python iterator to iterate over segments.")
		.add_property("iter_vertices", range(&TriangularCartesian2D_Domain::vertices_begin, &TriangularCartesian2D_Domain::vertices_end), "Return a Python iterator to iterate over vertices.")
	;
	
	class_<TriangularCartesian3D_Domain>("_TriangularCartesian3D_Domain")
		.add_property("num_segments", &TriangularCartesian3D_Domain::get_num_segments, "Number of segments contained in the domain.")
		.add_property("num_vertices", &TriangularCartesian3D_Domain::get_num_vertices, "Number of vertices contained in the domain.")
		.def("create_segments", &TriangularCartesian3D_Domain::create_segments, "Create the specified amount of segments within the domain. This function must be called only once.")
		.def("add_vertex", &TriangularCartesian3D_Domain::add_vertex, "Add a vertex to the domain. This gives the vertex a unique ID.")
		.def("get_segment", &TriangularCartesian3D_Domain::get_segment, "Return the segment at the given index within the domain.")
		.def("get_vertex", &TriangularCartesian3D_Domain::get_vertex, "Return the vertex with the given unique ID (which was assigned when the vertex was added to the domain).")
		.add_property("iter_segments", range(&TriangularCartesian3D_Domain::segments_begin, &TriangularCartesian3D_Domain::segments_end), "Return a Python iterator to iterate over segments.")
		.add_property("iter_vertices", range(&TriangularCartesian3D_Domain::vertices_begin, &TriangularCartesian3D_Domain::vertices_end), "Return a Python iterator to iterate over vertices.")
	;
	
	class_<TriangularCylindrical3D_Domain>("_TriangularCylindrical3D_Domain")
		.add_property("num_segments", &TriangularCylindrical3D_Domain::get_num_segments, "Number of segments contained in the domain.")
		.add_property("num_vertices", &TriangularCylindrical3D_Domain::get_num_vertices, "Number of vertices contained in the domain.")
		.def("create_segments", &TriangularCylindrical3D_Domain::create_segments, "Create the specified amount of segments within the domain. This function must be called only once.")
		.def("add_vertex", &TriangularCylindrical3D_Domain::add_vertex, "Add a vertex to the domain. This gives the vertex a unique ID.")
		.def("get_segment", &TriangularCylindrical3D_Domain::get_segment, "Return the segment at the given index within the domain.")
		.def("get_vertex", &TriangularCylindrical3D_Domain::get_vertex, "Return the vertex with the given unique ID (which was assigned when the vertex was added to the domain).")
		.add_property("iter_segments", range(&TriangularCylindrical3D_Domain::segments_begin, &TriangularCylindrical3D_Domain::segments_end), "Return a Python iterator to iterate over segments.")
		.add_property("iter_vertices", range(&TriangularCylindrical3D_Domain::vertices_begin, &TriangularCylindrical3D_Domain::vertices_end), "Return a Python iterator to iterate over vertices.")
	;
	
	class_<TriangularPolar2D_Domain>("_TriangularPolar2D_Domain")
		.add_property("num_segments", &TriangularPolar2D_Domain::get_num_segments, "Number of segments contained in the domain.")
		.add_property("num_vertices", &TriangularPolar2D_Domain::get_num_vertices, "Number of vertices contained in the domain.")
		.def("create_segments", &TriangularPolar2D_Domain::create_segments, "Create the specified amount of segments within the domain. This function must be called only once.")
		.def("add_vertex", &TriangularPolar2D_Domain::add_vertex, "Add a vertex to the domain. This gives the vertex a unique ID.")
		.def("get_segment", &TriangularPolar2D_Domain::get_segment, "Return the segment at the given index within the domain.")
		.def("get_vertex", &TriangularPolar2D_Domain::get_vertex, "Return the vertex with the given unique ID (which was assigned when the vertex was added to the domain).")
		.add_property("iter_segments", range(&TriangularPolar2D_Domain::segments_begin, &TriangularPolar2D_Domain::segments_end), "Return a Python iterator to iterate over segments.")
		.add_property("iter_vertices", range(&TriangularPolar2D_Domain::vertices_begin, &TriangularPolar2D_Domain::vertices_end), "Return a Python iterator to iterate over vertices.")
	;
	
	class_<TriangularSpherical3D_Domain>("_TriangularSpherical3D_Domain")
		.add_property("num_segments", &TriangularSpherical3D_Domain::get_num_segments, "Number of segments contained in the domain.")
		.add_property("num_vertices", &TriangularSpherical3D_Domain::get_num_vertices, "Number of vertices contained in the domain.")
		.def("create_segments", &TriangularSpherical3D_Domain::create_segments, "Create the specified amount of segments within the domain. This function must be called only once.")
		.def("add_vertex", &TriangularSpherical3D_Domain::add_vertex, "Add a vertex to the domain. This gives the vertex a unique ID.")
		.def("get_segment", &TriangularSpherical3D_Domain::get_segment, "Return the segment at the given index within the domain.")
		.def("get_vertex", &TriangularSpherical3D_Domain::get_vertex, "Return the vertex with the given unique ID (which was assigned when the vertex was added to the domain).")
		.add_property("iter_segments", range(&TriangularSpherical3D_Domain::segments_begin, &TriangularSpherical3D_Domain::segments_end), "Return a Python iterator to iterate over segments.")
		.add_property("iter_vertices", range(&TriangularSpherical3D_Domain::vertices_begin, &TriangularSpherical3D_Domain::vertices_end), "Return a Python iterator to iterate over vertices.")
	;
	
	/***********************
	 * TRIANGULAR SEGMENTS *
	 ***********************/
	
	class_<TriangularCartesian2D_Segment>("_TriangularCartesian2D_Segment", init<TriangularCartesian2D_Domain &, TriangularCartesian2D_Segment_t &>())
		.def("create_cell", &TriangularCartesian2D_Segment::create_cell)
	;
	
	class_<TriangularCartesian3D_Segment>("_TriangularCartesian3D_Segment", init<TriangularCartesian3D_Domain &, TriangularCartesian3D_Segment_t &>())
		.def("create_cell", &TriangularCartesian3D_Segment::create_cell)
	;
	
	class_<TriangularCylindrical3D_Segment>("_TriangularCylindrical3D_Segment", init<TriangularCylindrical3D_Domain &, TriangularCylindrical3D_Segment_t &>())
		.def("create_cell", &TriangularCylindrical3D_Segment::create_cell)
	;
	
	class_<TriangularPolar2D_Segment>("_TriangularPolar2D_Segment", init<TriangularPolar2D_Domain &, TriangularPolar2D_Segment_t &>())
		.def("create_cell", &TriangularPolar2D_Segment::create_cell)
	;
	
	class_<TriangularSpherical3D_Segment>("_TriangularSpherical3D_Segment", init<TriangularSpherical3D_Domain &, TriangularSpherical3D_Segment_t &>())
		.def("create_cell", &TriangularSpherical3D_Segment::create_cell)
	;
}
