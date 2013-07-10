#ifndef SEGMENTATION_TETRAHEDRAL_HPP
#define SEGMENTATION_TETRAHEDRAL_HPP

#include "types.hpp"

#include "../domains/tetrahedral.hpp"

//////////////////////////////
// TETRAHEDRAL CARTESIAN 3D //
//////////////////////////////

class TetrahedralCartesian3D_Segmentation
{
	TetrahedralCartesian3D_Segmentation_t    segmentation;
	//TetrahedralCartesian3D_Domain           *domain;
public:
	TetrahedralCartesian3D_Segmentation(TetrahedralCartesian3D_Domain &dom);
	TetrahedralCartesian3D_Segment create_segment();
};

////////////////////////////////
// TETRAHEDRAL CYLINDRICAL 3D //
////////////////////////////////

class TetrahedralCylindrical3D_Segmentation
{
	TetrahedralCylindrical3D_Segmentation_t    segmentation;
	//TetrahedralCylindrical3D_Domain           *domain;
public:
	TetrahedralCylindrical3D_Segmentation(TetrahedralCylindrical3D_Domain &dom);
	TetrahedralCylindrical3D_Segment create_segment();
};

//////////////////////////////
// TETRAHEDRAL SPHERICAL 3D //
//////////////////////////////

class TetrahedralSpherical3D_Segmentation
{
	TetrahedralSpherical3D_Segmentation_t    segmentation;
	//TetrahedralSpherical3D_Domain           *domain;
public:
	TetrahedralSpherical3D_Segmentation(TetrahedralSpherical3D_Domain &dom);
	TetrahedralSpherical3D_Segment create_segment();
};

#endif
