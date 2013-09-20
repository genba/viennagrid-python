/**
 * @file
 * @brief Class definitions for segments of tetrahedral domains.
 */

#ifndef SEGMENTS_TETRAHEDRAL_HPP
#define SEGMENTS_TETRAHEDRAL_HPP

#include "types.hpp"

#include "../domains/forward.hpp"

#include "../points/cartesian.hpp"
#include "../points/cylindrical.hpp"
#include "../points/polar.hpp"
#include "../points/spherical.hpp"

#include "../cells/tetrahedral.hpp"
#include "../segmentations/forward.hpp"
#include "../vertices/tetrahedral.hpp"

#include <boost/python.hpp>
using namespace boost::python;

/**
 * Wrapped segment of a tetrahedral, cartesian 3D domain.
 * 
 * @since 0.1.0
 */
class TetrahedralCartesian3D_Segment
{
	/**
	 * ViennaGrid segment object.
	 * @since 0.1.0
	 */
	TetrahedralCartesian3D_Segment_t        segment;
	
	/**
	 * Pointer to the wrapped segmentation to which the segment belongs.
	 * @since 0.1.0
	 */
	TetrahedralCartesian3D_Segmentation    *segmentation;
public:
	TetrahedralCartesian3D_Segment(TetrahedralCartesian3D_Segment_t &initial_segment, TetrahedralCartesian3D_Segmentation &initial_segmentation);
	
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
	TetrahedralCartesian3D_Cell make_cell(TetrahedralCartesian3D_Vertex vertex1, TetrahedralCartesian3D_Vertex vertex2, TetrahedralCartesian3D_Vertex vertex3, TetrahedralCartesian3D_Vertex vertex4);
	
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
	TetrahedralCartesian3D_Segment_t & get_segment();
};

/**
 * Wrapped segment of a tetrahedral, cylindrical domain.
 * 
 * @since 0.1.0
 */
class TetrahedralCylindrical3D_Segment
{
	/**
	 * ViennaGrid segment object.
	 * @since 0.1.0
	 */
	TetrahedralCylindrical3D_Segment_t        segment;

	/**
	 * Pointer to the wrapped segmentation to which the segment belongs.
	 * @since 0.1.0
	 */
	TetrahedralCylindrical3D_Segmentation    *segmentation;
public:
	TetrahedralCylindrical3D_Segment(TetrahedralCylindrical3D_Segment_t &initial_segment, TetrahedralCylindrical3D_Segmentation &initial_segmentation);
	
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
	TetrahedralCylindrical3D_Cell make_cell(TetrahedralCylindrical3D_Vertex vertex1, TetrahedralCylindrical3D_Vertex vertex2, TetrahedralCylindrical3D_Vertex vertex3, TetrahedralCylindrical3D_Vertex vertex4);
	
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
	TetrahedralCylindrical3D_Segment_t & get_segment();
};

/**
 * Wrapped segment of a tetrahedral, spherical domain.
 * 
 * @since 0.1.0
 */
class TetrahedralSpherical3D_Segment
{
	/**
	 * ViennaGrid segment object.
	 * @since 0.1.0
	 */
	TetrahedralSpherical3D_Segment_t        segment;
	
	/**
	 * Pointer to the wrapped segmentation to which the segment belongs.
	 * @since 0.1.0
	 */
	TetrahedralSpherical3D_Segmentation    *segmentation;
public:
	TetrahedralSpherical3D_Segment(TetrahedralSpherical3D_Segment_t &initial_segment, TetrahedralSpherical3D_Segmentation &initial_segmentation);
	
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
	TetrahedralSpherical3D_Cell make_cell(TetrahedralSpherical3D_Vertex vertex1, TetrahedralSpherical3D_Vertex vertex2, TetrahedralSpherical3D_Vertex vertex3, TetrahedralSpherical3D_Vertex vertex4);
	
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
	TetrahedralSpherical3D_Segment_t & get_segment();
};

#endif /* end of include guard: SEGMENTS_TETRAHEDRAL_HPP */
