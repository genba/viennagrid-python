/**
 * @file
 * @brief Class definitions for segmentations of linear domains.
 */

#ifndef SEGMENTATION_LINEAR_HPP
#define SEGMENTATION_LINEAR_HPP

#include "types.hpp"

#include "../domains/linear.hpp"
#include "../segments/linear.hpp"

#include <boost/python.hpp>
using namespace boost::python;

/**
 * Wrapped segmentation of a linear, cartesian 1D domain.
 * 
 * @since 0.1.0
 */
class LinearCartesian1D_Segmentation
{
	/**
	 * ViennaGrid segmentation object.
	 * @since 0.1.0
	 */
	LinearCartesian1D_Segmentation_t    segmentation;
	
	/**
	 * Pointer to the wrapped domain to which the segmentation corresponds.
	 * @since 0.1.0
	 */
	LinearCartesian1D_Domain           *domain;
public:
	LinearCartesian1D_Segmentation(LinearCartesian1D_Domain &dom);
	
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
	LinearCartesian1D_Segment make_segment();
	
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
	LinearCartesian1D_Domain_t & get_domain();
	
	/**
	 * Get a reference to the ViennaGrind segmentation object.
	 * 
	 * @return Reference to the ViennaGrid segmentation object.
	 * @since 0.1.0
	 */
	LinearCartesian1D_Segmentation_t & get_segmentation();
};

/**
 * Wrapped segmentation of a linear, cartesian 2D domain.
 * 
 * @since 0.1.0
 */
class LinearCartesian2D_Segmentation
{
	/**
	 * ViennaGrid segmentation object.
	 * @since 0.1.0
	 */
	LinearCartesian2D_Segmentation_t    segmentation;
	
	/**
	 * Pointer to the wrapped domain to which the segmentation corresponds.
	 * @since 0.1.0
	 */
	LinearCartesian2D_Domain           *domain;
public:
	LinearCartesian2D_Segmentation(LinearCartesian2D_Domain &dom);
	
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
	LinearCartesian2D_Segment make_segment();
	
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
	LinearCartesian2D_Domain_t & get_domain();
	
	/**
	 * Get a reference to the ViennaGrind segmentation object.
	 * 
	 * @return Reference to the ViennaGrid segmentation object.
	 * @since 0.1.0
	 */
	LinearCartesian2D_Segmentation_t & get_segmentation();
};

/**
 * Wrapped segmentation of a linear, cartesian 3D domain.
 * 
 * @since 0.1.0
 */
class LinearCartesian3D_Segmentation
{
	/**
	 * ViennaGrid segmentation object.
	 * @since 0.1.0
	 */
	LinearCartesian3D_Segmentation_t    segmentation;
	
	/**
	 * Pointer to the wrapped domain to which the segmentation corresponds.
	 * @since 0.1.0
	 */
	LinearCartesian3D_Domain           *domain;
public:
	LinearCartesian3D_Segmentation(LinearCartesian3D_Domain &dom);
	
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
	LinearCartesian3D_Segment make_segment();
	
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
	LinearCartesian3D_Domain_t & get_domain();
	
	/**
	 * Get a reference to the ViennaGrind segmentation object.
	 * 
	 * @return Reference to the ViennaGrid segmentation object.
	 * @since 0.1.0
	 */
	LinearCartesian3D_Segmentation_t & get_segmentation();
};

/**
 * Wrapped segmentation of a linear, cylindrical domain.
 * 
 * @since 0.1.0
 */
class LinearCylindrical3D_Segmentation
{
	/**
	 * ViennaGrid segmentation object.
	 * @since 0.1.0
	 */
	LinearCylindrical3D_Segmentation_t    segmentation;
	
	/**
	 * Pointer to the wrapped domain to which the segmentation corresponds.
	 * @since 0.1.0
	 */
	LinearCylindrical3D_Domain           *domain;
public:
	LinearCylindrical3D_Segmentation(LinearCylindrical3D_Domain &dom);
	
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
	LinearCylindrical3D_Segment make_segment();
	
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
	LinearCylindrical3D_Domain_t & get_domain();
	
	/**
	 * Get a reference to the ViennaGrind segmentation object.
	 * 
	 * @return Reference to the ViennaGrid segmentation object.
	 * @since 0.1.0
	 */
	LinearCylindrical3D_Segmentation_t & get_segmentation();
};

/**
 * Wrapped segmentation of a linear, polar domain.
 * 
 * @since 0.1.0
 */
class LinearPolar2D_Segmentation
{
	/**
	 * ViennaGrid segmentation object.
	 * @since 0.1.0
	 */
	LinearPolar2D_Segmentation_t    segmentation;
	
	/**
	 * Pointer to the wrapped domain to which the segmentation corresponds.
	 * @since 0.1.0
	 */
	LinearPolar2D_Domain           *domain;
public:
	LinearPolar2D_Segmentation(LinearPolar2D_Domain &dom);
	
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
	LinearPolar2D_Segment make_segment();
	
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
	LinearPolar2D_Domain_t & get_domain();
	
	/**
	 * Get a reference to the ViennaGrind segmentation object.
	 * 
	 * @return Reference to the ViennaGrid segmentation object.
	 * @since 0.1.0
	 */
	LinearPolar2D_Segmentation_t & get_segmentation();
};

/**
 * Wrapped segmentation of a linear, spherical domain.
 * 
 * @since 0.1.0
 */
class LinearSpherical3D_Segmentation
{
	/**
	 * ViennaGrid segmentation object.
	 * @since 0.1.0
	 */
	LinearSpherical3D_Segmentation_t    segmentation;
	
	/**
	 * Pointer to the wrapped domain to which the segmentation corresponds.
	 * @since 0.1.0
	 */
	LinearSpherical3D_Domain           *domain;
public:
	LinearSpherical3D_Segmentation(LinearSpherical3D_Domain &dom);
	
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
	LinearSpherical3D_Segment make_segment();
	
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
	LinearSpherical3D_Domain_t & get_domain();
	
	/**
	 * Get a reference to the ViennaGrind segmentation object.
	 * 
	 * @return Reference to the ViennaGrid segmentation object.
	 * @since 0.1.0
	 */
	LinearSpherical3D_Segmentation_t & get_segmentation();
};

#endif
