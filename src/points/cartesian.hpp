/**
 * @file
 * @brief Class definitions for wrapped cartesian points.
 */

#ifndef CARTESIAN_HPP_40UV2UQE
#define CARTESIAN_HPP_40UV2UQE

#include "types.hpp"
#include "forward.hpp"

#include <boost/python.hpp>
using namespace boost::python;

/**
 * Cartesian 1D point.
 * 
 * @since 0.1.0
 */
class PointCartesian1D {
	/**
	 * Pointer to the low-level ViennaGrid point type that actually stores the information about the point.
	 * 
	 * @since 0.1.0
	 */
	PointCartesian1D_t *point;
	
	/**
	 * ID of the point within the domain it is assigned to (if applicable).
	 * If the point is not assigned to any domain as a vertex, its value is -1.
	 * Otherwise, its value will be the ID of the point within the domain, i.e. its index
	 * in the vector of vertices.
	 * 
	 * @since 0.1.0
	 */
	int id; // TODO: move to vertex
public:
	/**
	 * Initialize point in the 1D cartesian space with coordinates (0, 0).
	 *
	 * This constructor is meant to be used when the programmer creates an instance of the high-level Python point,
	 * and allocates memory in the heap for storing the point. As one would normally think, this should be paired
	 * with a destructor that frees the allocated memory. However, when we free the memory in the destructor, the
	 * program aborts and states that the program tried to perform a double-free.
	 * 
	 * @since 0.1.0
	 */
	PointCartesian1D();
	
	/**
	 * Initialize point in the 1D cartesian space with coordinate x as specified by the parameters.
	 *
	 * This constructor is meant to be used when the programmer creates an instance of the high-level Python point,
	 * and allocates memory in the heap for storing the point. As one would normally think, this should be paired
	 * with a destructor that frees the allocated memory. However, when we free the memory in the destructor, the
	 * program aborts and states that the program tried to perform a double-free.
	 * 
	 * @since 0.1.0
	 */
	PointCartesian1D(double x);
	
	/**
	 * Initialize point in the 1D cartesian space from a ViennaGrid point by pointing at it.
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
	 * 
	 * @since 0.1.0
	 */
	PointCartesian1D(PointCartesian1D_t *initial_point, unsigned int initial_id=0);
	
	/**
	 * Initialize point in the 1D cartesian space from a ViennaGrid point by copying it.
	 * 
	 * This constructor is meant to be used by the wrapper code when the programmer runs
	 * an algorithm on points. Hence, it needs to allocate memory in the heap for the new
	 * ViennaGrid point.
	 * 
	 * As one would normally think, this should be paired with a destructor that frees the
	 * allocated memory. However, when we free the memory in the destructor, the program
	 * aborts and states that the program tried to perform a double-free.
	 * 
	 * @since 0.1.0
	 */
	PointCartesian1D(PointCartesian1D_t &initial_point, unsigned int initial_id=-1);
	
	/**
	 * Get the dimension of the point. For 1D points, this always returns 1.
	 * 
	 * @since 0.1.0
	 */
	size_t get_dimension();
	
	/**
	 * Get the name of the coordinate system. For cartesian points, this always returns 'cartesian'.
	 * 
	 * @since 0.1.0
	 */
	const char * get_coord_system();
	
	/**
	 * Get the coordinate at given index (0 for x).
	 * 
	 * @since 0.1.0
	 */
	double get_coord(unsigned int index);
	
	/**
	 * Set the coordinate at given index (0 for x).
	 * 
	 * @since 0.1.0
	 */
	void set_coord(unsigned int index, double new_value);
	
	/**
	 * Get coordinates as a Python list.
	 * 
	 * @since 0.1.0
	 */
	list get_coord_list();
	
	/**
	 * Assignment operator that copies the coordinates of the right operand to the left operand.
	 * This operator cannot be wrapped to Python explicitly.
	 * 
	 * @since 0.1.0
	 */
	PointCartesian1D & operator=(const PointCartesian1D &other);
	
	/**
	 * Addition operator which adds two points coordinate by coordinate.
	 * 
	 * @since 0.1.0
	 */
	PointCartesian1D operator+(const PointCartesian1D &other);
	
	/**
	 * Subtraction operator which subtracts two points coordinate by coordinate.
	 * 
	 * @since 0.1.0
	 */
	PointCartesian1D operator-(const PointCartesian1D &other);
	
	/**
	 * Multiplication operator which multiplies a point and a scalar (real) number, coordinate by coordinate.
	 * 
	 * @since 0.1.0
	 */
	PointCartesian1D operator*(const double factor);
	
	/**
	 * Division operator which divides a point and a scalar (real) number, coordinate by coordinate.
	 * 
	 * @since 0.1.0
	 */
	PointCartesian1D operator/(const double factor);
	
	/**
	 * Unary operator which inverts the coordinates of a point.
	 * 
	 * @since 0.1.0
	 */
	PointCartesian1D operator-();
	
	/**
	 * Get ViennaGrid point.
	 * 
	 * @since 0.1.0
	 */
	PointCartesian1D_t & get_point();
	
	/**
	 * Get ID of the point within the domain it is assigned to (if applicable).
	 * 
	 * @since 0.1.0
	 */
	unsigned int get_id();
	
	/**
	 * Set ID of the point within the domain it is assigned to.
	 * 
	 * @since 0.1.0
	 */
	void set_id(unsigned int new_id);
	
	/**
	 * Calculate the dot product of two points.
	 * 
	 * @since 0.1.0
	 */
	double inner_prod(PointCartesian1D &other);
	
	/**
	 * Calculate the 1-norm of the point.
	 * 
	 * @since 0.1.0
	 */
	double norm_1();
	
	/**
	 * Calculate the 2-norm of the point.
	 * 
	 * @since 0.1.0
	 */
	double norm_2();
	
	/**
	 * Calculate the ∞-norm of the point.
	 * 
	 * @since 0.1.0
	 */
	double norm_inf();
};

/**
 * Cartesian 2D point.
 * 
 * @since 0.1.0
 */
class PointCartesian2D {
	/**
	 * Pointer to the low-level ViennaGrid point type that actually stores the information about the point.
	 * 
	 * @since 0.1.0
	 */
	PointCartesian2D_t *point;
	
	/**
	 * ID of the point within the domain it is assigned to (if applicable).
	 * If the point is not assigned to any domain as a vertex, its value is -1.
	 * Otherwise, its value will be the ID of the point within the domain, i.e. its index
	 * in the vector of vertices.
	 * 
	 * @since 0.1.0
	 */
	int id; // TODO: move to vertex
public:
	/**
	 * Initialize point in the 2D cartesian space with coordinates (0, 0).
	 *
	 * This constructor is meant to be used when the programmer creates an instance of the high-level Python point,
	 * and allocates memory in the heap for storing the point. As one would normally think, this should be paired
	 * with a destructor that frees the allocated memory. However, when we free the memory in the destructor, the
	 * program aborts and states that the program tried to perform a double-free.
	 * 
	 * @since 0.1.0
	 */
	PointCartesian2D();
	
	/**
	 * Initialize point in the 2D cartesian space with coordinates (x, y) as specified by the parameters.
	 *
	 * This constructor is meant to be used when the programmer creates an instance of the high-level Python point,
	 * and allocates memory in the heap for storing the point. As one would normally think, this should be paired
	 * with a destructor that frees the allocated memory. However, when we free the memory in the destructor, the
	 * program aborts and states that the program tried to perform a double-free.
	 * 
	 * @since 0.1.0
	 */
	PointCartesian2D(double x, double y);
	
	/**
	 * Initialize point in the 2D cartesian space from a ViennaGrid point by pointing at it.
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
	 * 
	 * @since 0.1.0
	 */
	PointCartesian2D(PointCartesian2D_t *initial_point, unsigned int initial_id=0);
	
	/**
	 * Initialize point in the 2D cartesian space from a ViennaGrid point by copying it.
	 * 
	 * This constructor is meant to be used by the wrapper code when the programmer runs
	 * an algorithm on points. Hence, it needs to allocate memory in the heap for the new
	 * ViennaGrid point.
	 * 
	 * As one would normally think, this should be paired with a destructor that frees the
	 * allocated memory. However, when we free the memory in the destructor, the program
	 * aborts and states that the program tried to perform a double-free.
	 * 
	 * @since 0.1.0
	 */
	PointCartesian2D(PointCartesian2D_t &initial_point, unsigned int initial_id=-1);
	
	/**
	 * Get the dimension of the point. For 2D points, this always returns 2.
	 * 
	 * @since 0.1.0
	 */
	size_t get_dimension();
	
	/**
	 * Get the name of the coordinate system. For cartesian points, this always returns 'cartesian'.
	 * 
	 * @since 0.1.0
	 */
	const char * get_coord_system();
	
	/**
	 * Get the coordinate at given index (0 for x, 1 for y).
	 * 
	 * @since 0.1.0
	 */
	double get_coord(unsigned int index);
	
	/**
	 * Set the coordinate at given index (0 for x, 1 for y).
	 * 
	 * @since 0.1.0
	 */
	void set_coord(unsigned int index, double new_value);
	
	/**
	 * Get coordinates as a Python list.
	 * 
	 * @since 0.1.0
	 */
	list get_coord_list();
	
	/**
	 * Assignment operator that copies the coordinates of the right operand to the left operand.
	 * This operator cannot be wrapped to Python explicitly.
	 * 
	 * @since 0.1.0
	 */
	PointCartesian2D & operator=(const PointCartesian2D &other);
	
	/**
	 * Addition operator which adds two points coordinate by coordinate.
	 * 
	 * @since 0.1.0
	 */
	PointCartesian2D operator+(const PointCartesian2D &other);
	
	/**
	 * Subtraction operator which subtracts two points coordinate by coordinate.
	 * 
	 * @since 0.1.0
	 */
	PointCartesian2D operator-(const PointCartesian2D &other);
	
	/**
	 * Multiplication operator which multiplies a point and a scalar (real) number, coordinate by coordinate.
	 * 
	 * @since 0.1.0
	 */
	PointCartesian2D operator*(const double factor);
	
	/**
	 * Division operator which divides a point and a scalar (real) number, coordinate by coordinate.
	 * 
	 * @since 0.1.0
	 */
	PointCartesian2D operator/(const double factor);
	
	/**
	 * Unary operator which inverts the coordinates of a point.
	 * 
	 * @since 0.1.0
	 */
	PointCartesian2D operator-();
	
	/**
	 * Get ViennaGrid point.
	 * 
	 * @since 0.1.0
	 */
	PointCartesian2D_t & get_point();
	
	/**
	 * Get ID of the point within the domain it is assigned to (if applicable).
	 * 
	 * @since 0.1.0
	 */
	unsigned int get_id();
	
	/**
	 * Set ID of the point within the domain it is assigned to.
	 * 
	 * @since 0.1.0
	 */
	void set_id(unsigned int new_id);
	
	/**
	 * Convert to polar point.
	 * 
	 * @since 0.1.0
	 */
	PointPolar2D to_polar();
	
	/**
	 * Calculate the dot product of two points.
	 * 
	 * @since 0.1.0
	 */
	double inner_prod(PointCartesian2D &other);
	
	/**
	 * Calculate the 1-norm of the point.
	 * 
	 * @since 0.1.0
	 */
	double norm_1();
	
	/**
	 * Calculate the 2-norm of the point.
	 * 
	 * @since 0.1.0
	 */
	double norm_2();
	
	/**
	 * Calculate the ∞-norm of the point.
	 * 
	 * @since 0.1.0
	 */
	double norm_inf();
};

/**
 * Cartesian 3D point.
 * 
 * @since 0.1.0
 */
class PointCartesian3D {
	/**
	 * Pointer to the low-level ViennaGrid point type.
	 * 
	 * @since 0.1.0
	 */
	PointCartesian3D_t *point;
	
	/**
	 * ID of the point within the domain it is assigned to (if applicable).
	 * If the point is not assigned to any domain as a vertex, its value is -1.
	 * Otherwise, its value will be the ID of the point within the domain, i.e. its index
	 * in the vector of vertices.
	 * 
	 * @since 0.1.0
	 */
	int id; // TODO: move to vertex
public:
	/**
	 * Initialize point in the 3D cartesian space with coordinates (0, 0, 0).
	 *
	 * This constructor is meant to be used when the programmer creates an instance of the high-level Python point,
	 * and allocates memory in the heap for storing the point. As one would normally think, this should be paired
	 * with a destructor that frees the allocated memory. However, when we free the memory in the destructor, the
	 * program aborts and states that the program tried to perform a double-free.
	 * 
	 * @since 0.1.0
	 */
	PointCartesian3D();
	
	/**
	 * Initialize point in the 3D cartesian space with coordinates (x, y, z) as specified by the parameters.
	 *
	 * This constructor is meant to be used when the programmer creates an instance of the high-level Python point,
	 * and allocates memory in the heap for storing the point. As one would normally think, this should be paired
	 * with a destructor that frees the allocated memory. However, when we free the memory in the destructor, the
	 * program aborts and states that the program tried to perform a double-free.
	 * 
	 * @since 0.1.0
	 */
	PointCartesian3D(double x, double y, double z);
	
	/**
	 * Initialize point in the 3D cartesian space from a ViennaGrid point.
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
	 * 
	 * @since 0.1.0
	 */
	PointCartesian3D(PointCartesian3D_t *initial_point, unsigned int initial_id=0);
	
	/**
	 * Initialize point in the 3D cartesian space from a ViennaGrid point by copying it.
	 * 
	 * This constructor is meant to be used by the wrapper code when the programmer runs
	 * an algorithm on points. Hence, it needs to allocate memory in the heap for the new
	 * ViennaGrid point.
	 * 
	 * As one would normally think, this should be paired with a destructor that frees the
	 * allocated memory. However, when we free the memory in the destructor, the program
	 * aborts and states that the program tried to perform a double-free.
	 * 
	 * @since 0.1.0
	 */
	PointCartesian3D(PointCartesian3D_t &initial_point, unsigned int initial_id=-1);
	
	/**
	 * Get the dimension of the point. For 3D points, this always returns 3.
	 * 
	 * @since 0.1.0
	 */
	size_t get_dimension();
	
	/**
	 * Get the name of the coordinate system. For cartesian points, this always returns 'cartesian'.
	 * 
	 * @since 0.1.0
	 */
	const char * get_coord_system();
	
	/**
	 * Get the coordinate at given index (0 for x, 1 for y, 2 for z).
	 * 
	 * @since 0.1.0
	 */
	double get_coord(unsigned int index);
	
	/**
	 * Set the coordinate at given index (0 for x, 1 for y, 2 for z).
	 * 
	 * @since 0.1.0
	 */
	void set_coord(unsigned int index, double new_value);
	
	/**
	 * Get coordinates as a Python list.
	 * 
	 * @since 0.1.0
	 */
	list get_coord_list();
	
	/**
	 * Assignment operator that copies the coordinates of the right operand to the left operand.
	 * This operator cannot be wrapped to Python explicitly.
	 * 
	 * @since 0.1.0
	 */
	PointCartesian3D & operator=(const PointCartesian3D &other);
	
	/**
	 * Addition operator which adds two points coordinate by coordinate.
	 * 
	 * @since 0.1.0
	 */
	PointCartesian3D operator+(const PointCartesian3D &other);
	
	/**
	 * Subtraction operator which subtracts two points coordinate by coordinate.
	 * 
	 * @since 0.1.0
	 */
	PointCartesian3D operator-(const PointCartesian3D &other);
	
	/**
	 * Multiplication operator which multiplies a point and a scalar (real) number, coordinate by coordinate.
	 * 
	 * @since 0.1.0
	 */
	PointCartesian3D operator*(const double factor);
	
	/**
	 * Division operator which divides a point and a scalar (real) number, coordinate by coordinate.
	 * 
	 * @since 0.1.0
	 */
	PointCartesian3D operator/(const double factor);
	
	/**
	 * Unary operator which inverts the coordinates of a point.
	 * 
	 * @since 0.1.0
	 */
	PointCartesian3D operator-();
	
	/**
	 * Get ViennaGrid point.
	 * 
	 * @since 0.1.0
	 */
	PointCartesian3D_t & get_point();
	
	/**
	 * Get ID of the point within the domain it is assigned to (if applicable).
	 * 
	 * @since 0.1.0
	 */
	unsigned int get_id();
	
	/**
	 * Set ID of the point within the domain it is assigned to.
	 * 
	 * @since 0.1.0
	 */
	void set_id(unsigned int new_id);
	
	/**
	 * Convert to cylindrical point.
	 * 
	 * @since 0.1.0
	 */
	PointCylindrical3D to_cylindrical();
	
	/**
	 * Convert to spherical point.
	 * 
	 * @since 0.1.0
	 */
	PointSpherical3D to_spherical();
	
	/**
	 * Calculate the dot product of two points.
	 * 
	 * @since 0.1.0
	 */
	double inner_prod(PointCartesian3D &other);
	
	/**
	 * Calculate the cross product of two points.
	 * 
	 * @since 0.1.0
	 */
	PointCartesian3D cross_prod(PointCartesian3D &other);
	
	/**
	 * Calculate the 1-norm of the point.
	 * 
	 * @since 0.1.0
	 */
	double norm_1();
	
	/**
	 * Calculate the 2-norm of the point.
	 * 
	 * @since 0.1.0
	 */
	double norm_2();
	
	/**
	 * Calculate the ∞-norm of the point.
	 * 
	 * @since 0.1.0
	 */
	double norm_inf();
};

#endif /* end of include guard: CARTESIAN_HPP_40UV2UQE */
