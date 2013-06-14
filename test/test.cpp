#include <points/cartesian.hpp>
#include <domains/triangular.hpp>

#include <cstdio>

int main (int argc, char const *argv[])
{
	PointCartesian2D                vertex(1, 2);
	PointCartesian2D                another_vertex(1, 2);
	TriangularCartesian2D_Domain    domain;
	
	printf("Address of point_t:\t\t%p\n", &vertex.get_point());
	
	domain.add_vertex(vertex);
	printf("Added point to domain.\n");
	
	printf("Address of point_t:\t\t%p\n", &vertex.get_point());
	printf("Address of PointCartesian2D:\t%p\n", &domain.get_vertex(0));
	printf("Address of point_t from domain:\t%p\n", &domain.get_vertex(0).get_point());
	
	printf("Address of point:\t\t%p\n", &vertex.get_point());
	printf("Address of PointCartesian2D:\t%p\n", &domain.get_vertex(0));
	printf("Address of point_t from domain:\t%p\n", &domain.get_vertex(0).get_point());
	
	printf("End.\n");
	
	return 0;
}