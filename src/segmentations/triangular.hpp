/**
 * @file
 * @brief Class definitions for segmentations of triangular domains.
 */

#ifndef SEGMENTATIONS_TRIANGULAR_HPP
#define SEGMENTATIONS_TRIANGULAR_HPP

#include "types.hpp"

#include "../domains/forward.hpp"
#include "../segments/triangular.hpp"

#include <boost/python.hpp>
using namespace boost::python;

/**
 * Wrapped segmentation of a triangular, cartesian 2D domain.
 * 
 * @since 0.1.0
 */
class TriangularCartesian2D_Segmentation
{
	/**
	 * ViennaGrid segmentation object.
	 * @since 0.1.0
	 */
	TriangularCartesian2D_Segmentation_t    segmentation;
	
	/**
	 * Pointer to the wrapped domain to which the segmentation corresponds.
	 * @since 0.1.0
	 */
	TriangularCartesian2D_Domain           *domain;
public:
	TriangularCartesian2D_Segmentation(TriangularCartesian2D_Domain &dom);
	
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
	TriangularCartesian2D_Segment make_segment();
	
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
	TriangularCartesian2D_Domain_t & get_domain();
	
	/**
	 * Get a reference to the ViennaGrind segmentation object.
	 * 
	 * @return Reference to the ViennaGrid segmentation object.
	 * @since 0.1.0
	 */
	TriangularCartesian2D_Segmentation_t & get_segmentation();
};

/**
 * Wrapped segmentation of a triangular, cartesian 3D domain.
 * 
 * @since 0.1.0
 */
class TriangularCartesian3D_Segmentation
{
	/**
	 * ViennaGrid segmentation object.
	 * @since 0.1.0
	 */
	TriangularCartesian3D_Segmentation_t    segmentation;
	
	/**
	 * Pointer to the wrapped domain to which the segmentation corresponds.
	 * @since 0.1.0
	 */
	TriangularCartesian3D_Domain           *domain;
public:
	TriangularCartesian3D_Segmentation(TriangularCartesian3D_Domain &dom);
	
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
	TriangularCartesian3D_Segment make_segment();
	
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
	TriangularCartesian3D_Domain_t & get_domain();
	
	/**
	 * Get a reference to the ViennaGrind segmentation object.
	 * 
	 * @return Reference to the ViennaGrid segmentation object.
	 * @since 0.1.0
	 */
	TriangularCartesian3D_Segmentation_t & get_segmentation();
};

/**
 * Wrapped segmentation of a triangular, cylindrical domain.
 * 
 * @since 0.1.0
 */
class TriangularCylindrical3D_Segmentation
{
	/**
	 * ViennaGrid segmentation object.
	 * @since 0.1.0
	 */
	TriangularCylindrical3D_Segmentation_t    segmentation;
	
	/**
	 * Pointer to the wrapped domain to which the segmentation corresponds.
	 * @since 0.1.0
	 */
	TriangularCylindrical3D_Domain           *domain;
public:
	TriangularCylindrical3D_Segmentation(TriangularCylindrical3D_Domain &dom);
	
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
	TriangularCylindrical3D_Segment make_segment();
	
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
	TriangularCylindrical3D_Domain_t & get_domain();
	
	/**
	 * Get a reference to the ViennaGrind segmentation object.
	 * 
	 * @return Reference to the ViennaGrid segmentation object.
	 * @since 0.1.0
	 */
	TriangularCylindrical3D_Segmentation_t & get_segmentation();
};

/**
 * Wrapped segmentation of a triangular, polar domain.
 * 
 * @since 0.1.0
 */
class TriangularPolar2D_Segmentation
{
	/**
	 * ViennaGrid segmentation object.
	 * @since 0.1.0
	 */
	TriangularPolar2D_Segmentation_t    segmentation;
	
	/**
	 * Pointer to the wrapped domain to which the segmentation corresponds.
	 * @since 0.1.0
	 */
	TriangularPolar2D_Domain           *domain;
public:
	TriangularPolar2D_Segmentation(TriangularPolar2D_Domain &dom);
	
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
	TriangularPolar2D_Segment make_segment();
	
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
	TriangularPolar2D_Domain_t & get_domain();
	
	/**
	 * Get a reference to the ViennaGrind segmentation object.
	 * 
	 * @return Reference to the ViennaGrid segmentation object.
	 * @since 0.1.0
	 */
	TriangularPolar2D_Segmentation_t & get_segmentation();
};

/**
 * Wrapped segmentation of a triangular, spherical domain.
 * 
 * @since 0.1.0
 */
class TriangularSpherical3D_Segmentation
{
	/**
	 * ViennaGrid segmentation object.
	 * @since 0.1.0
	 */
	TriangularSpherical3D_Segmentation_t    segmentation;
	
	/**
	 * Pointer to the wrapped domain to which the segmentation corresponds.
	 * @since 0.1.0
	 */
	TriangularSpherical3D_Domain           *domain;
public:
	TriangularSpherical3D_Segmentation(TriangularSpherical3D_Domain &dom);
	
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
	TriangularSpherical3D_Segment make_segment();
	
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
	TriangularSpherical3D_Domain_t & get_domain();
	
	/**
	 * Get a reference to the ViennaGrind segmentation object.
	 * 
	 * @return Reference to the ViennaGrid segmentation object.
	 * @since 0.1.0
	 */
	TriangularSpherical3D_Segmentation_t & get_segmentation();
};

#endif /* end of include guard: SEGMENTATIONS_TRIANGULAR_HPP */
