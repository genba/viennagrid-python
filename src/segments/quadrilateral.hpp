/**
 * @file
 * @brief Class definitions for segments of quadrilateral domains.
 */

#ifndef SEGMENTS_QUADRILATERAL_HPP
#define SEGMENTS_QUADRILATERAL_HPP

#include "types.hpp"

#include "../domains/forward.hpp"

#include "../points/cartesian.hpp"
#include "../points/cylindrical.hpp"
#include "../points/polar.hpp"
#include "../points/spherical.hpp"

#include "../cells/quadrilateral.hpp"
#include "../segmentations/forward.hpp"
#include "../vertices/quadrilateral.hpp"

#include <boost/python.hpp>
using namespace boost::python;

/**
 * Wrapped segment of a quadrilateral, cartesian 2D domain.
 * 
 * @since 0.1.0
 */
class QuadrilateralCartesian2D_Segment
{
	/**
	 * ViennaGrid segment object.
	 * @since 0.1.0
	 */
	QuadrilateralCartesian2D_Segment_t        segment;
	
	/**
	 * Pointer to the wrapped segmentation to which the segment belongs.
	 * @since 0.1.0
	 */
	QuadrilateralCartesian2D_Segmentation    *segmentation;
public:
	QuadrilateralCartesian2D_Segment(QuadrilateralCartesian2D_Segment_t &initial_segment, QuadrilateralCartesian2D_Segmentation &initial_segmentation);
	
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
	 * @param vertex4
	 *
	 * @return The newly created cell.
	 * 
	 * @since 0.1.0
	 */
	QuadrilateralCartesian2D_Cell make_cell(QuadrilateralCartesian2D_Vertex vertex1, QuadrilateralCartesian2D_Vertex vertex2, QuadrilateralCartesian2D_Vertex vertex3, QuadrilateralCartesian2D_Vertex vertex4);
	
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
	QuadrilateralCartesian2D_Segment_t & get_segment();
};

/**
 * Wrapped segment of a quadrilateral, cartesian 3D domain.
 * 
 * @since 0.1.0
 */
class QuadrilateralCartesian3D_Segment
{
	/**
	 * ViennaGrid segment object.
	 * @since 0.1.0
	 */
	QuadrilateralCartesian3D_Segment_t        segment;
	
	/**
	 * Pointer to the wrapped segmentation to which the segment belongs.
	 * @since 0.1.0
	 */
	QuadrilateralCartesian3D_Segmentation    *segmentation;
public:
	QuadrilateralCartesian3D_Segment(QuadrilateralCartesian3D_Segment_t &initial_segment, QuadrilateralCartesian3D_Segmentation &initial_segmentation);
	
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
	 * @param vertex4
	 *
	 * @return The newly created cell.
	 * 
	 * @since 0.1.0
	 */
	QuadrilateralCartesian3D_Cell make_cell(QuadrilateralCartesian3D_Vertex vertex1, QuadrilateralCartesian3D_Vertex vertex2, QuadrilateralCartesian3D_Vertex vertex3, QuadrilateralCartesian3D_Vertex vertex4);
	
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
	QuadrilateralCartesian3D_Segment_t & get_segment();
};

/**
 * Wrapped segment of a quadrilateral, cylindrical domain.
 * 
 * @since 0.1.0
 */
class QuadrilateralCylindrical3D_Segment
{
	/**
	 * ViennaGrid segment object.
	 * @since 0.1.0
	 */
	QuadrilateralCylindrical3D_Segment_t        segment;
	
	/**
	 * Pointer to the wrapped segmentation to which the segment belongs.
	 * @since 0.1.0
	 */
	QuadrilateralCylindrical3D_Segmentation    *segmentation;
public:
	QuadrilateralCylindrical3D_Segment(QuadrilateralCylindrical3D_Segment_t &initial_segment, QuadrilateralCylindrical3D_Segmentation &initial_segmentation);
	
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
	 * @param vertex4
	 *
	 * @return The newly created cell.
	 * 
	 * @since 0.1.0
	 */
	QuadrilateralCylindrical3D_Cell make_cell(QuadrilateralCylindrical3D_Vertex vertex1, QuadrilateralCylindrical3D_Vertex vertex2, QuadrilateralCylindrical3D_Vertex vertex3, QuadrilateralCylindrical3D_Vertex vertex4);
	
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
	QuadrilateralCylindrical3D_Segment_t & get_segment();
};

/**
 * Wrapped segment of a quadrilateral, polar domain.
 * 
 * @since 0.1.0
 */
class QuadrilateralPolar2D_Segment
{
	/**
	 * ViennaGrid segment object.
	 * @since 0.1.0
	 */
	QuadrilateralPolar2D_Segment_t        segment;
	
	/**
	 * Pointer to the wrapped segmentation to which the segment belongs.
	 * @since 0.1.0
	 */
	QuadrilateralPolar2D_Segmentation    *segmentation;
public:
	QuadrilateralPolar2D_Segment(QuadrilateralPolar2D_Segment_t &initial_segment, QuadrilateralPolar2D_Segmentation &initial_segmentation);
	
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
	 * @param vertex4
	 *
	 * @return The newly created cell.
	 * 
	 * @since 0.1.0
	 */
	QuadrilateralPolar2D_Cell make_cell(QuadrilateralPolar2D_Vertex vertex1, QuadrilateralPolar2D_Vertex vertex2, QuadrilateralPolar2D_Vertex vertex3, QuadrilateralPolar2D_Vertex vertex4);
	
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
	QuadrilateralPolar2D_Segment_t & get_segment();
};

/**
 * Wrapped segment of a quadrilateral, spherical domain.
 * 
 * @since 0.1.0
 */
class QuadrilateralSpherical3D_Segment
{
	/**
	 * ViennaGrid segment object.
	 * @since 0.1.0
	 */
	QuadrilateralSpherical3D_Segment_t        segment;
	
	/**
	 * Pointer to the wrapped segmentation to which the segment belongs.
	 * @since 0.1.0
	 */
	QuadrilateralSpherical3D_Segmentation    *segmentation;
public:
	QuadrilateralSpherical3D_Segment(QuadrilateralSpherical3D_Segment_t &initial_segment, QuadrilateralSpherical3D_Segmentation &initial_segmentation);
	
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
	 * @param vertex4
	 *
	 * @return The newly created cell.
	 * 
	 * @since 0.1.0
	 */
	QuadrilateralSpherical3D_Cell make_cell(QuadrilateralSpherical3D_Vertex vertex1, QuadrilateralSpherical3D_Vertex vertex2, QuadrilateralSpherical3D_Vertex vertex3, QuadrilateralSpherical3D_Vertex vertex4);
	
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
	QuadrilateralSpherical3D_Segment_t & get_segment();
};

#endif /* end of include guard: SEGMENTS_QUADRILATERAL_HPP */
