/**
 * Copyright (c) 2013 Jonan Cruz-Martin
 * 
 * Distributed under the terms of the MIT license, see the accompanying
 * file COPYING or http://opensource.org/licenses/MIT.
 * 
 * @file
 * @brief Class definitions for segments of linear domains.
 */

#ifndef SEGMENTS_LINEAR_HPP
#define SEGMENTS_LINEAR_HPP

#include "types.hpp"

#include "../domains/forward.hpp"

#include "../points/cartesian.hpp"
#include "../points/cylindrical.hpp"
#include "../points/polar.hpp"
#include "../points/spherical.hpp"

#include "../segmentations/forward.hpp"
#include "../cells/linear.hpp"
#include "../vertices/linear.hpp"

#include <boost/python.hpp>
using namespace boost::python;

/**
 * Wrapped segment of a linear, cartesian 1D domain.
 * 
 * @since 0.1.0
 */
class LinearCartesian1D_Segment
{
	/**
	 * ViennaGrid segment object.
	 * @since 0.1.0
	 */
	LinearCartesian1D_Segment_t        segment;
	
	/**
	 * Pointer to the wrapped segmentation to which the segment belongs.
	 * @since 0.1.0
	 */
	LinearCartesian1D_Segmentation    *segmentation;
public:
	LinearCartesian1D_Segment(LinearCartesian1D_Segment_t &initial_segment, LinearCartesian1D_Segmentation &initial_segmentation);
	
	/**
	 * Return the number of cells contained in the segment.
	 *
	 * @return unsigned integer
	 * 
	 * @since 0.1.0
	 */
	unsigned int num_cells();
	
	/**
	 * Create a new cell in the segment.
	 *
	 * @param vertex1
	 * @param vertex2
	 *
	 * @return The newly created cell.
	 * 
	 * @since 0.1.0
	 */
	LinearCartesian1D_Cell make_cell(LinearCartesian1D_Vertex vertex1, LinearCartesian1D_Vertex vertex2);
	
	/**
	 * Return a Python list containing all the cells contained in the segment.
	 * 
	 * @return Python list
	 * 
	 * @since 0.1.0
	 */
	list get_cells();
	
	/**
	 * Get a reference to the ViennaGrind segment object.
	 * 
	 * @return Reference to the ViennaGrid segment object.
	 * @since 0.1.0
	 */
	LinearCartesian1D_Segment_t & get_segment();
};

/**
 * Wrapped segment of a linear, cartesian 2D domain.
 * 
 * @since 0.1.0
 */
class LinearCartesian2D_Segment
{
	/**
	 * ViennaGrid segment object.
	 * @since 0.1.0
	 */
	LinearCartesian2D_Segment_t        segment;
	
	/**
	 * Pointer to the wrapped segmentation to which the segment belongs.
	 * @since 0.1.0
	 */
	LinearCartesian2D_Segmentation    *segmentation;
public:
	LinearCartesian2D_Segment(LinearCartesian2D_Segment_t &initial_segment, LinearCartesian2D_Segmentation &initial_segmentation);
	
	/**
	 * Return the number of cells contained in the segment.
	 *
	 * @return unsigned integer
	 * 
	 * @since 0.1.0
	 */
	unsigned int num_cells();
	
	/**
	 * Create a new cell in the segment.
	 *
	 * @param vertex1
	 * @param vertex2
	 *
	 * @return The newly created cell.
	 * 
	 * @since 0.1.0
	 */
	LinearCartesian2D_Cell make_cell(LinearCartesian2D_Vertex vertex1, LinearCartesian2D_Vertex vertex2);
	
	/**
	 * Return a Python list containing all the cells contained in the segment.
	 * 
	 * @return Python list
	 * 
	 * @since 0.1.0
	 */
	list get_cells();
	
	/**
	 * Get a reference to the ViennaGrind segment object.
	 * 
	 * @return Reference to the ViennaGrid segment object.
	 * @since 0.1.0
	 */
	LinearCartesian2D_Segment_t & get_segment();
};

/**
 * Wrapped segment of a linear, cartesian 3D domain.
 * 
 * @since 0.1.0
 */
class LinearCartesian3D_Segment
{
	/**
	 * ViennaGrid segment object.
	 * @since 0.1.0
	 */
	LinearCartesian3D_Segment_t        segment;
	
	/**
	 * Pointer to the wrapped segmentation to which the segment belongs.
	 * @since 0.1.0
	 */
	LinearCartesian3D_Segmentation    *segmentation;
public:
	LinearCartesian3D_Segment(LinearCartesian3D_Segment_t &initial_segment, LinearCartesian3D_Segmentation &initial_segmentation);
	
	/**
	 * Return the number of cells contained in the segment.
	 *
	 * @return unsigned integer
	 * 
	 * @since 0.1.0
	 */
	unsigned int num_cells();
	
	/**
	 * Create a new cell in the segment.
	 *
	 * @param vertex1
	 * @param vertex2
	 *
	 * @return The newly created cell.
	 * 
	 * @since 0.1.0
	 */
	LinearCartesian3D_Cell make_cell(LinearCartesian3D_Vertex vertex1, LinearCartesian3D_Vertex vertex2);
	
	/**
	 * Return a Python list containing all the cells contained in the segment.
	 * 
	 * @return Python list
	 * 
	 * @since 0.1.0
	 */
	list get_cells();
	
	/**
	 * Get a reference to the ViennaGrind segment object.
	 * 
	 * @return Reference to the ViennaGrid segment object.
	 * @since 0.1.0
	 */
	LinearCartesian3D_Segment_t & get_segment();
};

/**
 * Wrapped segment of a linear, cylindrical domain.
 * 
 * @since 0.1.0
 */
class LinearCylindrical3D_Segment
{
	/**
	 * ViennaGrid segment object.
	 * @since 0.1.0
	 */
	LinearCylindrical3D_Segment_t        segment;
	
	/**
	 * Pointer to the wrapped segmentation to which the segment belongs.
	 * @since 0.1.0
	 */
	LinearCylindrical3D_Segmentation    *segmentation;
public:
	LinearCylindrical3D_Segment(LinearCylindrical3D_Segment_t &initial_segment, LinearCylindrical3D_Segmentation &initial_segmentation);
	
	/**
	 * Return the number of cells contained in the segment.
	 *
	 * @return unsigned integer
	 * 
	 * @since 0.1.0
	 */
	unsigned int num_cells();
	
	/**
	 * Create a new cell in the segment.
	 *
	 * @param vertex1
	 * @param vertex2
	 *
	 * @return The newly created cell.
	 * 
	 * @since 0.1.0
	 */
	LinearCylindrical3D_Cell make_cell(LinearCylindrical3D_Vertex vertex1, LinearCylindrical3D_Vertex vertex2);

	/**
	 * Return a Python list containing all the cells contained in the segment.
	 * 
	 * @return Python list
	 * 
	 * @since 0.1.0
	 */
	list get_cells();
	
	/**
	 * Get a reference to the ViennaGrind segment object.
	 * 
	 * @return Reference to the ViennaGrid segment object.
	 * @since 0.1.0
	 */
	LinearCylindrical3D_Segment_t & get_segment();
};

/**
 * Wrapped segment of a linear, polar domain.
 * 
 * @since 0.1.0
 */
class LinearPolar2D_Segment
{
	/**
	 * ViennaGrid segment object.
	 * @since 0.1.0
	 */
	LinearPolar2D_Segment_t        segment;
	
	/**
	 * Pointer to the wrapped segmentation to which the segment belongs.
	 * @since 0.1.0
	 */
	LinearPolar2D_Segmentation    *segmentation;
public:
	LinearPolar2D_Segment(LinearPolar2D_Segment_t &initial_segment, LinearPolar2D_Segmentation &initial_segmentation);
	
	/**
	 * Return the number of cells contained in the segment.
	 *
	 * @return unsigned integer
	 * 
	 * @since 0.1.0
	 */
	unsigned int num_cells();
	
	/**
	 * Create a new cell in the segment.
	 *
	 * @param vertex1
	 * @param vertex2
	 *
	 * @return The newly created cell.
	 * 
	 * @since 0.1.0
	 */
	LinearPolar2D_Cell make_cell(LinearPolar2D_Vertex vertex1, LinearPolar2D_Vertex vertex2);
	
	/**
	 * Return a Python list containing all the cells contained in the segment.
	 * 
	 * @return Python list
	 * 
	 * @since 0.1.0
	 */
	list get_cells();
	
	/**
	 * Get a reference to the ViennaGrind segment object.
	 * 
	 * @return Reference to the ViennaGrid segment object.
	 * @since 0.1.0
	 */
	LinearPolar2D_Segment_t & get_segment();
};

/**
 * Wrapped segment of a linear, spherical domain.
 * 
 * @since 0.1.0
 */
class LinearSpherical3D_Segment
{
	/**
	 * ViennaGrid segment object.
	 * @since 0.1.0
	 */
	LinearSpherical3D_Segment_t        segment;
	
	/**
	 * Pointer to the wrapped segmentation to which the segment belongs.
	 * @since 0.1.0
	 */
	LinearSpherical3D_Segmentation    *segmentation;
public:
	LinearSpherical3D_Segment(LinearSpherical3D_Segment_t &initial_segment, LinearSpherical3D_Segmentation &initial_segmentation);
	
	/**
	 * Return the number of cells contained in the segment.
	 *
	 * @return unsigned integer
	 * 
	 * @since 0.1.0
	 */
	unsigned int num_cells();
	
	/**
	 * Create a new cell in the segment.
	 *
	 * @param vertex1
	 * @param vertex2
	 *
	 * @return The newly created cell.
	 * 
	 * @since 0.1.0
	 */
	LinearSpherical3D_Cell make_cell(LinearSpherical3D_Vertex vertex1, LinearSpherical3D_Vertex vertex2);
	
	/**
	 * Return a Python list containing all the cells contained in the segment.
	 * 
	 * @return Python list
	 * 
	 * @since 0.1.0
	 */
	list get_cells();
	
	/**
	 * Get a reference to the ViennaGrind segment object.
	 * 
	 * @return Reference to the ViennaGrid segment object.
	 * @since 0.1.0
	 */
	LinearSpherical3D_Segment_t & get_segment();
};

#endif /* end of include guard: SEGMENTS_LINEAR_HPP */
