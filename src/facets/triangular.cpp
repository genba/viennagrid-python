/*
 * Copyright (c) 2013 Jonan Cruz-Martin
 * 
 * Distributed under the terms of the MIT license, see the accompanying
 * file COPYING or http://opensource.org/licenses/MIT.
 */

#include "triangular.hpp"

/////////////////////////////////
// TriangularCartesian2D_Facet //
/////////////////////////////////

TriangularCartesian2D_Facet::TriangularCartesian2D_Facet(TriangularCartesian2D_Facet_t &initial_facet)
{
	facet = &initial_facet;
}

TriangularCartesian2D_Facet_t & TriangularCartesian2D_Facet::get_facet()
{
	return *facet;
}

/////////////////////////////////
// TriangularCartesian3D_Facet //
/////////////////////////////////

TriangularCartesian3D_Facet::TriangularCartesian3D_Facet(TriangularCartesian3D_Facet_t &initial_facet)
{
	facet = &initial_facet;
}

TriangularCartesian3D_Facet_t & TriangularCartesian3D_Facet::get_facet()
{
	return *facet;
}

///////////////////////////////////
// TriangularCylindrical3D_Facet //
///////////////////////////////////

TriangularCylindrical3D_Facet::TriangularCylindrical3D_Facet(TriangularCylindrical3D_Facet_t &initial_facet)
{
	facet = &initial_facet;
}

TriangularCylindrical3D_Facet_t & TriangularCylindrical3D_Facet::get_facet()
{
	return *facet;
}

/////////////////////////////
// TriangularPolar2D_Facet //
/////////////////////////////

TriangularPolar2D_Facet::TriangularPolar2D_Facet(TriangularPolar2D_Facet_t &initial_facet)
{
	facet = &initial_facet;
}

TriangularPolar2D_Facet_t & TriangularPolar2D_Facet::get_facet()
{
	return *facet;
}

/////////////////////////////////
// TriangularSpherical3D_Facet //
/////////////////////////////////

TriangularSpherical3D_Facet::TriangularSpherical3D_Facet(TriangularSpherical3D_Facet_t &initial_facet)
{
	facet = &initial_facet;
}

TriangularSpherical3D_Facet_t & TriangularSpherical3D_Facet::get_facet()
{
	return *facet;
}
