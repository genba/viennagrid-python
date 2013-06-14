#ifndef CARTESIAN_HPP_40UV2UQE
#define CARTESIAN_HPP_40UV2UQE

#include "types.hpp"

class PointCartesian2D {
	/**
	 * Pointer to the low-level ViennaGrid point type.
	**/
	PointCartesian2D_t *point;
public:
	/**
	 * Initialize point in the 2D cartesian space with coordinates (0, 0).
	 *
	 * This constructor is meant to be used when the programmer creates an instance of the high-level Python point,
	 * and allocates memory in the heap for storing the point. As one would normally think, this should be paired
	 * with a destructor that frees the allocated memory. However, when we free the memory in the destructor, the
	 * program aborts and states that the program tried to perform a double-free.
	**/
	PointCartesian2D();
	
	/**
	 * Initialize point in the 2D cartesian space with coordinates (x, y) as specified by the parameters.
	 *
	 * This constructor is meant to be used when the programmer creates an instance of the high-level Python point,
	 * and allocates memory in the heap for storing the point. As one would normally think, this should be paired
	 * with a destructor that frees the allocated memory. However, when we free the memory in the destructor, the
	 * program aborts and states that the program tried to perform a double-free.
	**/
	PointCartesian2D(double x, double y);
	
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
	PointCartesian2D(PointCartesian2D_t &initial_point);
	size_t get_dimension();
	const char * get_coord_system();
	PointCartesian2D_t & get_point();
	bool operator==(const PointCartesian2D &other);
};

class PointCartesian3D {
	/**
	 * Pointer to the low-level ViennaGrid point type.
	**/
	PointCartesian3D_t *point;
public:
	/**
	 * Initialize point in the 3D cartesian space with coordinates (0, 0, 0).
	 *
	 * This constructor is meant to be used when the programmer creates an instance of the high-level Python point,
	 * and allocates memory in the heap for storing the point. As one would normally think, this should be paired
	 * with a destructor that frees the allocated memory. However, when we free the memory in the destructor, the
	 * program aborts and states that the program tried to perform a double-free.
	**/
	PointCartesian3D();
	
	/**
	 * Initialize point in the 3D cartesian space with coordinates (x, y, z) as specified by the parameters.
	 *
	 * This constructor is meant to be used when the programmer creates an instance of the high-level Python point,
	 * and allocates memory in the heap for storing the point. As one would normally think, this should be paired
	 * with a destructor that frees the allocated memory. However, when we free the memory in the destructor, the
	 * program aborts and states that the program tried to perform a double-free.
	**/
	PointCartesian3D(double x, double y, double z);
	
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
	PointCartesian3D(PointCartesian3D_t &initial_point);
	size_t get_dimension();
	const char * get_coord_system();
	PointCartesian3D_t & get_point();
	bool operator==(const PointCartesian3D &other);
};

#endif /* end of include guard: CARTESIAN_HPP_40UV2UQE */
