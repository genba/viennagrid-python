#ifndef SPHERICAL_HPP_LPABEBWU
#define SPHERICAL_HPP_LPABEBWU

#include "types.hpp"
#include "forward.hpp"

#include <boost/python.hpp>
using namespace boost::python;

class PointSpherical3D {
	/**
	 * Pointer to the low-level ViennaGrid point type.
	**/
	PointSpherical_t *point;
	
	int id;
public:
	/**
	 * Initialize point in the 3D cartesian space with coordinates (0, 0, 0).
	 *
	 * This constructor is meant to be used when the programmer creates an instance of the high-level Python point,
	 * and allocates memory in the heap for storing the point. As one would normally think, this should be paired
	 * with a destructor that frees the allocated memory. However, when we free the memory in the destructor, the
	 * program aborts and states that the program tried to perform a double-free.
	**/
	PointSpherical3D();
	
	/**
	 * Initialize point in the 3D cartesian space with coordinates (x, y, z) as specified by the parameters.
	 *
	 * This constructor is meant to be used when the programmer creates an instance of the high-level Python point,
	 * and allocates memory in the heap for storing the point. As one would normally think, this should be paired
	 * with a destructor that frees the allocated memory. However, when we free the memory in the destructor, the
	 * program aborts and states that the program tried to perform a double-free.
	**/
	PointSpherical3D(double x, double y, double z);
	
	/**
	 * Initialize point in the DIM cartesian space from a ViennaGrid point.
	 *
	 * What this makes is to set the pointer to point to the ViennaGrid point and thus solves the issue caused by
	 * the fact that the ViennaGrid point was being copied, thus not being able to get references to the points
	 * stored in the domain and thus not being able to modify them.
	 *
	 * This constructor is meant to be used by the wrapper code when the programmer tries to get a reference to
	 * a point stored in a domain (not when they want to define a point on their own!), and *does not* allocate
	 * memory in the heap, thus elliminating the need for the constructor to free that memory when this constructor
	 * has been used. At first, one would think that it should be distinguished in some way when the object has been
	 * instantiated using this constructor or any other constructor in order for the destructor to only free when
	 * another constructor has been called, not this one. However, we have shown that no freeing action is need at all.
	**/
	PointSpherical3D(PointSpherical_t *initial_point, unsigned int initial_id=0);
	
	/**
	 * Initialize point in the spherical space from a ViennaGrid point by copying it.
	 * 
	 * This constructor is meant to be used by the wrapper code when the programmer runs
	 * an algorithm on points. Hence, it needs to allocate memory in the heap for the new
	 * ViennaGrid point.
	 * 
	 * As one would normally think, this should be paired with a destructor that frees the
	 * allocated memory. However, when we free the memory in the destructor, the program
	 * aborts and states that the program tried to perform a double-free.
	**/
	PointSpherical3D(PointSpherical_t &initial_point, unsigned int initial_id=-1);
	
	/**
	 * Get the dimension of the point. For 3D points, this always returns 3.
	**/
	size_t get_dimension();
	
	/**
	 * Get the name of the coordinate system. For cartesian points, this always returns 'cartesian'.
	**/
	const char * get_coord_system();
	
	/**
	 * Get the coordinate at given index (0 for x, 1 for y, 2 for z).
	**/
	double get_coord(unsigned int index);
	
	/**
	 * Set the coordinate at given index (0 for x, 1 for y, 2 for z).
	**/
	void set_coord(unsigned int index, double new_value);
	
	/**
	 * Get coordinates as a Python list.
	**/
	list get_coord_list();
	
	/**
	 * Assignment operator that copies the coordinates of the right operand to the left operand.
	 * This operator cannot be wrapped to Python explicitly.
	**/
	PointSpherical3D & operator=(const PointSpherical3D &other);
	
	/**
	 * Addition operator which adds two points coordinate by coordinate.
	**/
	PointSpherical3D operator+(const PointSpherical3D &other);
	
	/**
	 * Subtraction operator which subtracts two points coordinate by coordinate.
	**/
	PointSpherical3D operator-(const PointSpherical3D &other);
	
	/**
	 * Multiplication operator which multiplies a point and a scalar (real) number, coordinate by coordinate.
	**/
	PointSpherical3D operator*(const double factor);
	
	/**
	 * Division operator which divides a point and a scalar (real) number, coordinate by coordinate.
	**/
	PointSpherical3D operator/(const double factor);
	
	/**
	 * Unary operator which inverts the coordinates of a point.
	**/
	PointSpherical3D operator-();
	
	/**
	 * Get ViennaGrid point.
	**/
	PointSpherical_t & get_point();
	
	/**
	 * Get ID of the point within the domain it is assigned to (if applicable).
	**/
	unsigned int get_id();
	
	/**
	 * Set ID of the point within the domain it is assigned to.
	**/
	void set_id(unsigned int new_id);
	
	PointCartesian3D to_cartesian();
	PointCylindrical3D to_cylindrical();
	double norm_1();
	double norm_2();
	double norm_inf();
};

#endif /* end of include guard: SPHERICAL_HPP_LPABEBWU */
