#include "triangular.hpp"
#include "../segments/types.hpp"
#include "../vertices/types.hpp"

#include <vector>

////////////////////////////
// Triangle, cartesian 2D //
////////////////////////////

TriangularCartesian2D_Domain::TriangularCartesian2D_Domain()
{
	num_segments = 0;
}

unsigned int TriangularCartesian2D_Domain::get_num_segments()
{
	return num_segments;
}

void TriangularCartesian2D_Domain::create_segments(unsigned int amount)
{
	if (num_segments) { /* raise exception */ }
	else {
		segments.reserve(amount);
		for (unsigned int i = 0; i < amount; ++i)
			segments.push_back(TriangularCartesian2D_Segment(viennagrid::create_view<TriangularCartesian2D_Segment_t>(domain)));
		num_segments = amount;
	}
}

void TriangularCartesian2D_Domain::add_vertex(PointCartesian2D vertex)
{
	viennagrid::create_element<TriangularCartesian2D_Vertex_t>(domain, vertex.get_point());
}

TriangularCartesian2D_Segment TriangularCartesian2D_Domain::get_segment(unsigned int index)
{
	return segments.at(index); // TODO: this will raise an exception if vector size is smaller than index
}

////////////////////////////
// Triangle, cartesian 3D //
////////////////////////////

TriangularCartesian3D_Domain::TriangularCartesian3D_Domain()
{
	num_segments = 0;
}

unsigned int TriangularCartesian3D_Domain::get_num_segments()
{
	return num_segments;
}

void TriangularCartesian3D_Domain::create_segments(unsigned int amount)
{
	if (num_segments) { /* raise exception */ }
	else {
		segments.reserve(amount);
		for (unsigned int i = 0; i < amount; ++i)
			segments.push_back(TriangularCartesian3D_Segment(viennagrid::create_view<TriangularCartesian3D_Segment_t>(domain)));
		num_segments = amount;
	}
}

void TriangularCartesian3D_Domain::add_vertex(PointCartesian3D vertex)
{
	viennagrid::create_element<TriangularCartesian3D_Vertex_t>(domain, vertex.get_point());
}

TriangularCartesian3D_Segment TriangularCartesian3D_Domain::get_segment(unsigned int index)
{
	return segments.at(index); // TODO: this will raise an exception if vector size is smaller than index
}

////////////////////////////////
// Triangle, cylindrical (3D) //
////////////////////////////////

TriangularCylindrical3D_Domain::TriangularCylindrical3D_Domain()
{
	num_segments = 0;
}

unsigned int TriangularCylindrical3D_Domain::get_num_segments()
{
	return num_segments;
}

void TriangularCylindrical3D_Domain::create_segments(unsigned int amount)
{
	if (num_segments) { /* raise exception */ }
	else {
		segments.reserve(amount);
		for (unsigned int i = 0; i < amount; ++i)
			segments.push_back(TriangularCylindrical3D_Segment(viennagrid::create_view<TriangularCylindrical3D_Segment_t>(domain)));
		num_segments = amount;
	}
}

void TriangularCylindrical3D_Domain::add_vertex(PointCylindrical3D vertex)
{
	viennagrid::create_element<TriangularCylindrical3D_Vertex_t>(domain, vertex.get_point());
}

TriangularCylindrical3D_Segment TriangularCylindrical3D_Domain::get_segment(unsigned int index)
{
	return segments.at(index); // TODO: this will raise an exception if vector size is smaller than index
}

//////////////////////////
// Triangle, polar (2D) //
//////////////////////////

TriangularPolar2D_Domain::TriangularPolar2D_Domain()
{
	num_segments = 0;
}

unsigned int TriangularPolar2D_Domain::get_num_segments()
{
	return num_segments;
}

void TriangularPolar2D_Domain::create_segments(unsigned int amount)
{
	if (num_segments) { /* raise exception */ }
	else {
		segments.reserve(amount);
		for (unsigned int i = 0; i < amount; ++i)
			segments.push_back(TriangularPolar2D_Segment(viennagrid::create_view<TriangularPolar2D_Segment_t>(domain)));
		num_segments = amount;
	}
}

void TriangularPolar2D_Domain::add_vertex(PointPolar2D vertex)
{
	viennagrid::create_element<TriangularPolar2D_Vertex_t>(domain, vertex.get_point());
}

TriangularPolar2D_Segment TriangularPolar2D_Domain::get_segment(unsigned int index)
{
	return segments.at(index); // TODO: this will raise an exception if vector size is smaller than index
}

//////////////////////////////
// Triangle, spherical (3D) //
//////////////////////////////

TriangularSpherical3D_Domain::TriangularSpherical3D_Domain()
{
	num_segments = 0;
}

unsigned int TriangularSpherical3D_Domain::get_num_segments()
{
	return num_segments;
}

void TriangularSpherical3D_Domain::create_segments(unsigned int amount)
{
	if (num_segments) { /* raise exception */ }
	else {
		segments.reserve(amount);
		for (unsigned int i = 0; i < amount; ++i)
			segments.push_back(TriangularSpherical3D_Segment(viennagrid::create_view<TriangularSpherical3D_Segment_t>(domain)));
		num_segments = amount;
	}
}

void TriangularSpherical3D_Domain::add_vertex(PointSpherical3D vertex)
{
	viennagrid::create_element<TriangularSpherical3D_Vertex_t>(domain, vertex.get_point());
}

TriangularSpherical3D_Segment TriangularSpherical3D_Domain::get_segment(unsigned int index)
{
	return segments.at(index); // TODO: this will raise an exception if vector size is smaller than index
}
