#ifndef POLAR_HPP_HL2P4D4
#define POLAR_HPP_HL2P4D4

#include "types.hpp"

class PointPolar2D {
	/**
	 * Pointer to the low-level ViennaGrid point type.
	**/
	PointPolar_t *point;
	
	int id;
public:
	/**
	 * Initialize point in the 2D cartesian space with coordinates (0, 0).
	 *
	 * This constructor is meant to be used when the programmer creates an instance of the high-level Python point,
	 * and allocates memory in the heap for storing the point. As one would normally think, this should be paired
	 * with a destructor that frees the allocated memory. However, when we free the memory in the destructor, the
	 * program aborts and states that the program tried to perform a double-free.
	**/
	PointPolar2D();
	
	/**
	 * Initialize point in the 2D cartesian space with coordinates (x, y) as specified by the parameters.
	 *
	 * This constructor is meant to be used when the programmer creates an instance of the high-level Python point,
	 * and allocates memory in the heap for storing the point. As one would normally think, this should be paired
	 * with a destructor that frees the allocated memory. However, when we free the memory in the destructor, the
	 * program aborts and states that the program tried to perform a double-free.
	**/
	PointPolar2D(double x, double y);
	
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
	PointPolar2D(PointPolar_t &initial_point, unsigned int initial_id=0);
	size_t get_dimension();
	const char * get_coord_system();
	PointPolar_t & get_point();
	bool operator==(const PointPolar2D &other);
	unsigned int get_id();
	void set_id(unsigned int new_id);
};

#endif /* end of include guard: POLAR_HPP_HL2P4D4 */
