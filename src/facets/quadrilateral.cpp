/*
 * Copyright (c) 2013 Jonan Cruz-Martin
 * 
 * Distributed under the terms of the MIT license, see the accompanying
 * file COPYING or http://opensource.org/licenses/MIT.
 */

#include "quadrilateral.hpp"

////////////////////////////////////
// QuadrilateralCartesian2D_Facet //
////////////////////////////////////

QuadrilateralCartesian2D_Facet::QuadrilateralCartesian2D_Facet(QuadrilateralCartesian2D_Facet_t &initial_facet)
{
	facet = &initial_facet;
}

QuadrilateralCartesian2D_Facet_t & QuadrilateralCartesian2D_Facet::get_facet()
{
	return *facet;
}

////////////////////////////////////
// QuadrilateralCartesian3D_Facet //
////////////////////////////////////

QuadrilateralCartesian3D_Facet::QuadrilateralCartesian3D_Facet(QuadrilateralCartesian3D_Facet_t &initial_facet)
{
	facet = &initial_facet;
}

QuadrilateralCartesian3D_Facet_t & QuadrilateralCartesian3D_Facet::get_facet()
{
	return *facet;
}

//////////////////////////////////////
// QuadrilateralCylindrical3D_Facet //
//////////////////////////////////////

QuadrilateralCylindrical3D_Facet::QuadrilateralCylindrical3D_Facet(QuadrilateralCylindrical3D_Facet_t &initial_facet)
{
	facet = &initial_facet;
}

QuadrilateralCylindrical3D_Facet_t & QuadrilateralCylindrical3D_Facet::get_facet()
{
	return *facet;
}

////////////////////////////////
// QuadrilateralPolar2D_Facet //
////////////////////////////////

QuadrilateralPolar2D_Facet::QuadrilateralPolar2D_Facet(QuadrilateralPolar2D_Facet_t &initial_facet)
{
	facet = &initial_facet;
}

QuadrilateralPolar2D_Facet_t & QuadrilateralPolar2D_Facet::get_facet()
{
	return *facet;
}

////////////////////////////////////
// QuadrilateralSpherical3D_Facet //
////////////////////////////////////

QuadrilateralSpherical3D_Facet::QuadrilateralSpherical3D_Facet(QuadrilateralSpherical3D_Facet_t &initial_facet)
{
	facet = &initial_facet;
}

QuadrilateralSpherical3D_Facet_t & QuadrilateralSpherical3D_Facet::get_facet()
{
	return *facet;
}
