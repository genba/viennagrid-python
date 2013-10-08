/*
 * Copyright (c) 2013 Jonan Cruz-Martin
 * 
 * Distributed under the terms of the MIT license, see the accompanying
 * file COPYING or http://opensource.org/licenses/MIT.
 */

#include "linear.hpp"

/////////////////////////////
// LinearCartesian1D_Facet //
/////////////////////////////

LinearCartesian1D_Facet::LinearCartesian1D_Facet(LinearCartesian1D_Facet_t &initial_facet)
{
	facet = &initial_facet;
}

LinearCartesian1D_Facet_t & LinearCartesian1D_Facet::get_facet()
{
	return *facet;
}

/////////////////////////////
// LinearCartesian2D_Facet //
/////////////////////////////

LinearCartesian2D_Facet::LinearCartesian2D_Facet(LinearCartesian2D_Facet_t &initial_facet)
{
	facet = &initial_facet;
}

LinearCartesian2D_Facet_t & LinearCartesian2D_Facet::get_facet()
{
	return *facet;
}

/////////////////////////////
// LinearCartesian3D_Facet //
/////////////////////////////

LinearCartesian3D_Facet::LinearCartesian3D_Facet(LinearCartesian3D_Facet_t &initial_facet)
{
	facet = &initial_facet;
}

LinearCartesian3D_Facet_t & LinearCartesian3D_Facet::get_facet()
{
	return *facet;
}

///////////////////////////////
// LinearCylindrical3D_Facet //
///////////////////////////////

LinearCylindrical3D_Facet::LinearCylindrical3D_Facet(LinearCylindrical3D_Facet_t &initial_facet)
{
	facet = &initial_facet;
}

LinearCylindrical3D_Facet_t & LinearCylindrical3D_Facet::get_facet()
{
	return *facet;
}

/////////////////////////
// LinearPolar2D_Facet //
/////////////////////////

LinearPolar2D_Facet::LinearPolar2D_Facet(LinearPolar2D_Facet_t &initial_facet)
{
	facet = &initial_facet;
}

LinearPolar2D_Facet_t & LinearPolar2D_Facet::get_facet()
{
	return *facet;
}

/////////////////////////////
// LinearSpherical3D_Facet //
/////////////////////////////

LinearSpherical3D_Facet::LinearSpherical3D_Facet(LinearSpherical3D_Facet_t &initial_facet)
{
	facet = &initial_facet;
}

LinearSpherical3D_Facet_t & LinearSpherical3D_Facet::get_facet()
{
	return *facet;
}
