/**
 * @file
 * @brief Class definitions for segmentations of quadrilateral domains.
 */

#ifndef SEGMENTATION_QUADRILATERAL_HPP
#define SEGMENTATION_QUADRILATERAL_HPP

#include "types.hpp"

#include "../domains/quadrilateral.hpp"
#include "../segments/quadrilateral.hpp"

#include <boost/python.hpp>
using namespace boost::python;

/**
 * Wrapped segmentation of a quadrilateral, cartesian 2D domain.
 * 
 * @since 0.1.0
 */
class QuadrilateralCartesian2D_Segmentation
{
	/**
	 * ViennaGrid segmentation object.
	 * @since 0.1.0
	 */
	QuadrilateralCartesian2D_Segmentation_t    segmentation;
	
	/**
	 * Pointer to the wrapped domain to which the segmentation corresponds.
	 * @since 0.1.0
	 */
	QuadrilateralCartesian2D_Domain           *domain;
public:
	QuadrilateralCartesian2D_Segmentation(QuadrilateralCartesian2D_Domain &dom);
	
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
	QuadrilateralCartesian2D_Segment make_segment();
	
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
	QuadrilateralCartesian2D_Domain_t & get_domain();
	
	/**
	 * Get a reference to the ViennaGrind segmentation object.
	 * 
	 * @return Reference to the ViennaGrid segmentation object.
	 * @since 0.1.0
	 */
	QuadrilateralCartesian2D_Segmentation_t & get_segmentation();
};

/**
 * Wrapped segmentation of a quadrilateral, cartesian 3D domain.
 * 
 * @since 0.1.0
 */
class QuadrilateralCartesian3D_Segmentation
{
	/**
	 * ViennaGrid segmentation object.
	 * @since 0.1.0
	 */
	QuadrilateralCartesian3D_Segmentation_t    segmentation;
	
	/**
	 * Pointer to the wrapped domain to which the segmentation corresponds.
	 * @since 0.1.0
	 */
	QuadrilateralCartesian3D_Domain           *domain;
public:
	QuadrilateralCartesian3D_Segmentation(QuadrilateralCartesian3D_Domain &dom);
	
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
	QuadrilateralCartesian3D_Segment make_segment();
	
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
	QuadrilateralCartesian3D_Domain_t & get_domain();
	
	/**
	 * Get a reference to the ViennaGrind segmentation object.
	 * 
	 * @return Reference to the ViennaGrid segmentation object.
	 * @since 0.1.0
	 */
	QuadrilateralCartesian3D_Segmentation_t & get_segmentation();
};

/**
 * Wrapped segmentation of a quadrilateral, cylindrical domain.
 * 
 * @since 0.1.0
 */
class QuadrilateralCylindrical3D_Segmentation
{
	/**
	 * ViennaGrid segmentation object.
	 * @since 0.1.0
	 */
	QuadrilateralCylindrical3D_Segmentation_t    segmentation;
	
	/**
	 * Pointer to the wrapped domain to which the segmentation corresponds.
	 * @since 0.1.0
	 */
	QuadrilateralCylindrical3D_Domain           *domain;
public:
	QuadrilateralCylindrical3D_Segmentation(QuadrilateralCylindrical3D_Domain &dom);
	
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
	QuadrilateralCylindrical3D_Segment make_segment();
	
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
	QuadrilateralCylindrical3D_Domain_t & get_domain();
	
	/**
	 * Get a reference to the ViennaGrind segmentation object.
	 * 
	 * @return Reference to the ViennaGrid segmentation object.
	 * @since 0.1.0
	 */
	QuadrilateralCylindrical3D_Segmentation_t & get_segmentation();
};

/**
 * Wrapped segmentation of a quadrilateral, polar domain.
 * 
 * @since 0.1.0
 */
class QuadrilateralPolar2D_Segmentation
{
	/**
	 * ViennaGrid segmentation object.
	 * @since 0.1.0
	 */
	QuadrilateralPolar2D_Segmentation_t    segmentation;
	
	/**
	 * Pointer to the wrapped domain to which the segmentation corresponds.
	 * @since 0.1.0
	 */
	QuadrilateralPolar2D_Domain           *domain;
public:
	QuadrilateralPolar2D_Segmentation(QuadrilateralPolar2D_Domain &dom);
	
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
	QuadrilateralPolar2D_Segment make_segment();
	
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
	QuadrilateralPolar2D_Domain_t & get_domain();
	
	/**
	 * Get a reference to the ViennaGrind segmentation object.
	 * 
	 * @return Reference to the ViennaGrid segmentation object.
	 * @since 0.1.0
	 */
	QuadrilateralPolar2D_Segmentation_t & get_segmentation();
};

/**
 * Wrapped segmentation of a quadrilateral, spherical domain.
 * 
 * @since 0.1.0
 */
class QuadrilateralSpherical3D_Segmentation
{
	/**
	 * ViennaGrid segmentation object.
	 * @since 0.1.0
	 */
	QuadrilateralSpherical3D_Segmentation_t    segmentation;
	
	/**
	 * Pointer to the wrapped domain to which the segmentation corresponds.
	 * @since 0.1.0
	 */
	QuadrilateralSpherical3D_Domain           *domain;
public:
	QuadrilateralSpherical3D_Segmentation(QuadrilateralSpherical3D_Domain &dom);
	
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
	QuadrilateralSpherical3D_Segment make_segment();
	
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
	QuadrilateralSpherical3D_Domain_t & get_domain();
	
	/**
	 * Get a reference to the ViennaGrind segmentation object.
	 * 
	 * @return Reference to the ViennaGrid segmentation object.
	 * @since 0.1.0
	 */
	QuadrilateralSpherical3D_Segmentation_t & get_segmentation();
};

#endif
