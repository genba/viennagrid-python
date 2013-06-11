#include "triangular.hpp"
#include "../segments/types.hpp"

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
		std::vector<TriangularCartesian2D_Segment_t> segments;
		segments.reserve(amount);
		for (unsigned int i = 0; i < amount; ++i)
		{
			TriangularCartesian2D_Segment_t seg = viennagrid::create_view<TriangularCartesian2D_Segment_t>(domain);
			segments.push_back(seg);
		}
		num_segments = amount;
	}
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
		std::vector<TriangularCartesian3D_Segment_t> segments;
		segments.reserve(amount);
		for (unsigned int i = 0; i < amount; ++i)
		{
			TriangularCartesian3D_Segment_t seg = viennagrid::create_view<TriangularCartesian3D_Segment_t>(domain);
			segments.push_back(seg);
		}

		num_segments = amount;
	}
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
		std::vector<TriangularCylindrical3D_Segment_t> segments;
		segments.reserve(amount);
		for (unsigned int i = 0; i < amount; ++i)
		{
			TriangularCylindrical3D_Segment_t seg = viennagrid::create_view<TriangularCylindrical3D_Segment_t>(domain);
			segments.push_back(seg);
		}
		num_segments = amount;
	}
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
		std::vector<TriangularPolar2D_Segment_t> segments;
		segments.reserve(amount);
		for (unsigned int i = 0; i < amount; ++i)
		{
			TriangularPolar2D_Segment_t seg = viennagrid::create_view<TriangularPolar2D_Segment_t>(domain);
			segments.push_back(seg);
		}
		num_segments = amount;
	}
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
		std::vector<TriangularSpherical3D_Segment_t> segments;
		segments.reserve(amount);
		for (unsigned int i = 0; i < amount; ++i)
		{
			TriangularSpherical3D_Segment_t seg = viennagrid::create_view<TriangularSpherical3D_Segment_t>(domain);
			segments.push_back(seg);
		}
		num_segments = amount;
	}
}
