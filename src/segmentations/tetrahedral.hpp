/**
 * Copyright (c) 2013 Jonan Cruz-Martin
 * 
 * Distributed under the terms of the MIT license, see the accompanying
 * file COPYING or http://opensource.org/licenses/MIT.
 * 
 * @file
 * @brief Class definitions for segmentations of tetrahedral domains.
 */

#ifndef SEGMENTATIONS_TETRAHEDRAL_HPP
#define SEGMENTATIONS_TETRAHEDRAL_HPP

#include "types.hpp"

#include "../domains/forward.hpp"
#include "../segments/tetrahedral.hpp"

#include <boost/python.hpp>
using namespace boost::python;

/**
 * Wrapped segmentation of a tetrahedral, cartesian 3D domain.
 * 
 * @since 0.1.0
 */
class TetrahedralCartesian3D_Segmentation
{
	/**
	 * ViennaGrid segmentation object.
	 * @since 0.1.0
	 */
	TetrahedralCartesian3D_Segmentation_t    segmentation;
	
	/**
	 * Pointer to the wrapped domain to which the segmentation corresponds.
	 * @since 0.1.0
	 */
	TetrahedralCartesian3D_Domain           *domain;
public:
	TetrahedralCartesian3D_Segmentation(TetrahedralCartesian3D_Domain &dom);
	
	/**
	 * Return the number of segments that form the segmentation.
	 *
	 * @return unsigned integer
	 * 
	 * @since 0.1.0
	 */
	unsigned int num_segments();
	
	/**
	 * Create a new segment in the segmentation.
	 *
	 * @return The newly created segment.
	 * 
	 * @since 0.1.0
	 */
	TetrahedralCartesian3D_Segment make_segment();
	
	/**
	 * Return a Python list containing all the segments that form the segmentation.
	 * 
	 * @return Python list
	 * 
	 * @since 0.1.0
	 */
	list get_segments();
	
	/**
	 * Get a reference to the ViennaGrid domain object to which the segmentation corresponds.
	 * 
	 * @return Reference to the ViennaGrid domain object to which the segmentation corresponds.
	 * @since 0.1.0
	 */
	TetrahedralCartesian3D_Domain_t & get_domain();

	/**
	 * Get a reference to the ViennaGrind segmentation object.
	 * 
	 * @return Reference to the ViennaGrid domain object to which the segmentation corresponds.
	 * @since 0.1.0
	 */
	TetrahedralCartesian3D_Segmentation_t & get_segmentation();
};

/**
 * Wrapped segmentation of a tetrahedral, cylindrical domain.
 * 
 * @since 0.1.0
 */
class TetrahedralCylindrical3D_Segmentation
{
	/**
	 * ViennaGrid segmentation object.
	 * @since 0.1.0
	 */
	TetrahedralCylindrical3D_Segmentation_t    segmentation;
	
	/**
	 * Pointer to the wrapped domain to which the segmentation corresponds.
	 * @since 0.1.0
	 */
	TetrahedralCylindrical3D_Domain           *domain;
public:
	TetrahedralCylindrical3D_Segmentation(TetrahedralCylindrical3D_Domain &dom);
	
	/**
	 * Return the number of segments that form the segmentation.
	 *
	 * @return unsigned integer
	 * 
	 * @since 0.1.0
	 */
	unsigned int num_segments();
	
	/**
	 * Create a new segment in the segmentation.
	 *
	 * @return The newly created segment.
	 * 
	 * @since 0.1.0
	 */
	TetrahedralCylindrical3D_Segment make_segment();
	
	/**
	 * Return a Python list containing all the segments that form the segmentation.
	 * 
	 * @return Python list
	 * 
	 * @since 0.1.0
	 */
	list get_segments();
	
	/**
	 * Get a reference to the ViennaGrid domain object to which the segmentation corresponds.
	 * 
	 * @return Reference to the ViennaGrid domain object to which the segmentation corresponds.
	 * @since 0.1.0
	 */
	TetrahedralCylindrical3D_Domain_t & get_domain();
	
	/**
	 * Get a reference to the ViennaGrind segmentation object.
	 * 
	 * @return Reference to the ViennaGrid segmentation object.
	 * @since 0.1.0
	 */
	TetrahedralCylindrical3D_Segmentation_t & get_segmentation();
};

/**
 * Wrapped segmentation of a tetrahedral, spherical domain.
 * 
 * @since 0.1.0
 */
class TetrahedralSpherical3D_Segmentation
{
	/**
	 * ViennaGrid segmentation object.
	 * @since 0.1.0
	 */
	TetrahedralSpherical3D_Segmentation_t    segmentation;
	
	/**
	 * Pointer to the wrapped domain to which the segmentation corresponds.
	 * @since 0.1.0
	 */
	TetrahedralSpherical3D_Domain           *domain;
public:
	TetrahedralSpherical3D_Segmentation(TetrahedralSpherical3D_Domain &dom);
	
	/**
	 * Return the number of segments that form the segmentation.
	 *
	 * @return unsigned integer
	 * 
	 * @since 0.1.0
	 */
	unsigned int num_segments();
	
	/**
	 * Create a new segment in the segmentation.
	 *
	 * @return The newly created segment.
	 * 
	 * @since 0.1.0
	 */
	TetrahedralSpherical3D_Segment make_segment();
	
	/**
	 * Return a Python list containing all the segments that form the segmentation.
	 * 
	 * @return Python list
	 * 
	 * @since 0.1.0
	 */
	list get_segments();
	
	/**
	 * Get a reference to the ViennaGrid domain object to which the segmentation corresponds.
	 * 
	 * @return Reference to the ViennaGrid domain object to which the segmentation corresponds.
	 * @since 0.1.0
	 */
	TetrahedralSpherical3D_Domain_t & get_domain();
	
	/**
	 * Get a reference to the ViennaGrind segmentation object.
	 * 
	 * @return Reference to the ViennaGrid segmentation object.
	 * @since 0.1.0
	 */
	TetrahedralSpherical3D_Segmentation_t & get_segmentation();
};

#endif /* end of include guard: SEGMENTATIONS_TETRAHEDRAL_HPP */
