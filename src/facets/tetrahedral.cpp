#include "tetrahedral.hpp"

//////////////////////////////////
// TetrahedralCartesian3D_Facet //
//////////////////////////////////

TetrahedralCartesian3D_Facet::TetrahedralCartesian3D_Facet(TetrahedralCartesian3D_Facet_t &initial_facet)
{
	facet = &initial_facet;
}

TetrahedralCartesian3D_Facet_t & TetrahedralCartesian3D_Facet::get_facet()
{
	return *facet;
}

////////////////////////////////////
// TetrahedralCylindrical3D_Facet //
////////////////////////////////////

TetrahedralCylindrical3D_Facet::TetrahedralCylindrical3D_Facet(TetrahedralCylindrical3D_Facet_t &initial_facet)
{
	facet = &initial_facet;
}

TetrahedralCylindrical3D_Facet_t & TetrahedralCylindrical3D_Facet::get_facet()
{
	return *facet;
}

//////////////////////////////////
// TetrahedralSpherical3D_Facet //
//////////////////////////////////

TetrahedralSpherical3D_Facet::TetrahedralSpherical3D_Facet(TetrahedralSpherical3D_Facet_t &initial_facet)
{
	facet = &initial_facet;
}

TetrahedralSpherical3D_Facet_t & TetrahedralSpherical3D_Facet::get_facet()
{
	return *facet;
}
