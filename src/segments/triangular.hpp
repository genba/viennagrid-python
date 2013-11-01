/**
 * Copyright (c) 2013 Jonan Cruz-Martin
 * 
 * Distributed under the terms of the MIT license, see the accompanying
 * file COPYING or http://opensource.org/licenses/MIT.
 * 
 * @file
 * @brief Class definitions for segments of triangular domains.
 */

#ifndef SEGMENTS_TRIANGULAR_HPP
#define SEGMENTS_TRIANGULAR_HPP

#include "types.hpp"

#include "../domains/forward.hpp"

#include "../points/cartesian.hpp"
#include "../points/cylindrical.hpp"
#include "../points/polar.hpp"
#include "../points/spherical.hpp"

#include "../cells/triangular.hpp"
#include "../vertices/triangular.hpp"
#include "../segmentations/forward.hpp"

#include <boost/python.hpp>
using namespace boost::python;

/**
 * Wrapped segment of a triangular, cartesian 2D domain.
 * 
 * @since 0.1.0
 */
class TriangularCartesian2D_Segment
{
	/**
	 * ViennaGrid segment object.
	 * @since 0.1.0
	 */
	TriangularCartesian2D_Segment_t        segment;
	
	/**
	 * Pointer to the wrapped segmentation to which the segment belongs.
	 * @since 0.1.0
	 */
	TriangularCartesian2D_Segmentation    *segmentation;
public:
	TriangularCartesian2D_Segment(TriangularCartesian2D_Segment_t &initial_segment, TriangularCartesian2D_Segmentation &initial_segmentation);
	
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
	 * @param vertex3
	 *
	 * @return The newly created cell.
	 * 
	 * @since 0.1.0
	 */
	TriangularCartesian2D_Cell make_cell(TriangularCartesian2D_Vertex vertex1, TriangularCartesian2D_Vertex vertex2, TriangularCartesian2D_Vertex vertex3);
	
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
	TriangularCartesian2D_Segment_t & get_segment();
};

/**
 * Wrapped segment of a triangular, cartesian 3D domain.
 * 
 * @since 0.1.0
 */
class TriangularCartesian3D_Segment
{
	/**
	 * ViennaGrid segment object.
	 * @since 0.1.0
	 */
	TriangularCartesian3D_Segment_t        segment;
	
	/**
	 * Pointer to the wrapped segmentation to which the segment belongs.
	 * @since 0.1.0
	 */
	TriangularCartesian3D_Segmentation    *segmentation;
public:
	TriangularCartesian3D_Segment(TriangularCartesian3D_Segment_t &initial_segment, TriangularCartesian3D_Segmentation &initial_segmentation);
	
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
	 * @param vertex3
	 *
	 * @return The newly created cell.
	 * 
	 * @since 0.1.0
	 */
	TriangularCartesian3D_Cell make_cell(TriangularCartesian3D_Vertex vertex1, TriangularCartesian3D_Vertex vertex2, TriangularCartesian3D_Vertex vertex3);
	
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
	TriangularCartesian3D_Segment_t & get_segment();
};

/**
 * Wrapped segment of a triangular, cylindrical domain.
 * 
 * @since 0.1.0
 */
class TriangularCylindrical3D_Segment
{
	/**
	 * ViennaGrid segment object.
	 * @since 0.1.0
	 */
	TriangularCylindrical3D_Segment_t        segment;
	
	/**
	 * Pointer to the wrapped segmentation to which the segment belongs.
	 * @since 0.1.0
	 */
	TriangularCylindrical3D_Segmentation    *segmentation;
public:
	TriangularCylindrical3D_Segment(TriangularCylindrical3D_Segment_t &initial_segment, TriangularCylindrical3D_Segmentation &initial_segmentation);
	
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
	 * @param vertex3
	 *
	 * @return The newly created cell.
	 * 
	 * @since 0.1.0
	 */
	TriangularCylindrical3D_Cell make_cell(TriangularCylindrical3D_Vertex vertex1, TriangularCylindrical3D_Vertex vertex2, TriangularCylindrical3D_Vertex vertex3);
	
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
	TriangularCylindrical3D_Segment_t & get_segment();
};

/**
 * Wrapped segment of a triangular, polar domain.
 * 
 * @since 0.1.0
 */
class TriangularPolar2D_Segment
{
	/**
	 * ViennaGrid segment object.
	 * @since 0.1.0
	 */
	TriangularPolar2D_Segment_t        segment;
	
	/**
	 * Pointer to the wrapped segmentation to which the segment belongs.
	 * @since 0.1.0
	 */
	TriangularPolar2D_Segmentation    *segmentation;
public:
	TriangularPolar2D_Segment(TriangularPolar2D_Segment_t &initial_segment, TriangularPolar2D_Segmentation &initial_segmentation);
	
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
	 * @param vertex3
	 *
	 * @return The newly created cell.
	 * 
	 * @since 0.1.0
	 */
	TriangularPolar2D_Cell make_cell(TriangularPolar2D_Vertex vertex1, TriangularPolar2D_Vertex vertex2, TriangularPolar2D_Vertex vertex3);
	
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
	TriangularPolar2D_Segment_t & get_segment();
};

/**
 * Wrapped segment of a triangular, spherical domain.
 * 
 * @since 0.1.0
 */
class TriangularSpherical3D_Segment
{
	/**
	 * ViennaGrid segment object.
	 * @since 0.1.0
	 */
	TriangularSpherical3D_Segment_t        segment;
	
	/**
	 * Pointer to the wrapped segmentation to which the segment belongs.
	 * @since 0.1.0
	 */
	TriangularSpherical3D_Segmentation    *segmentation;
public:
	TriangularSpherical3D_Segment(TriangularSpherical3D_Segment_t &initial_segment, TriangularSpherical3D_Segmentation &initial_segmentation);
	
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
	 * @param vertex3
	 *
	 * @return The newly created cell.
	 * 
	 * @since 0.1.0
	 */
	TriangularSpherical3D_Cell make_cell(TriangularSpherical3D_Vertex vertex1, TriangularSpherical3D_Vertex vertex2, TriangularSpherical3D_Vertex vertex3);
	
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
	TriangularSpherical3D_Segment_t & get_segment();
};

#endif /* end of include guard: SEGMENTS_TRIANGULAR_HPP */
