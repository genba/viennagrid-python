#include "write_opendx.hpp"

#include "../accessors/linear.hpp"
#include "../accessors/triangular.hpp"
#include "../accessors/quadrilateral.hpp"
#include "../accessors/tetrahedral.hpp"

#include "../fields/linear.hpp"
#include "../fields/triangular.hpp"
#include "../fields/quadrilateral.hpp"
#include "../fields/tetrahedral.hpp"

#include <viennagrid/io/opendx_writer.hpp>

#include <string>

////////////
// LINEAR //
////////////

void LinearCartesian1D_Domain_write_opendx(str filename,
                                           LinearCartesian1D_Domain domain,
                                           dict accessors)
{
	viennagrid::io::opendx_writer<LinearCartesian1D_Domain_t>    my_dx_writer;
	
	list keys = accessors.keys();
	list values = accessors.values();
	for (int i = 0; i < len(keys); ++i)
	{
		std::string quantity_name = extract<std::string>(keys[i]);
		object accessor = values[i];
		object accessor_cls_name = accessor.attr("__class__").attr("__name__");
		if (accessor_cls_name == "LinearCartesian1D_Vertex_Accessor")
		{
			LinearCartesian1D_Vertex_Accessor my_accessor = extract<LinearCartesian1D_Vertex_Accessor>(accessor);
			viennagrid::io::add_scalar_data_on_vertices(my_dx_writer, my_accessor.get_accessor(), quantity_name);
		}
		else if (accessor_cls_name == "LinearCartesian1D_Cell_Accessor")
		{
			LinearCartesian1D_Cell_Accessor my_accessor = extract<LinearCartesian1D_Cell_Accessor>(accessor);
			viennagrid::io::add_scalar_data_on_cells(my_dx_writer, my_accessor.get_accessor(), quantity_name);
		}
		else if (accessor_cls_name == "LinearCartesian1D_Vertex_Field")
		{
			LinearCartesian1D_Vertex_Field my_field = extract<LinearCartesian1D_Vertex_Field>(accessor);
			viennagrid::io::add_scalar_data_on_vertices(my_dx_writer, my_field.get_field(), quantity_name);
		}
		else if (accessor_cls_name == "LinearCartesian1D_Cell_Field")
		{
			LinearCartesian1D_Cell_Field my_field = extract<LinearCartesian1D_Cell_Field>(accessor);
			viennagrid::io::add_scalar_data_on_cells(my_dx_writer, my_field.get_field(), quantity_name);
		}
	}
	
	my_dx_writer(domain.get_domain(), extract<std::string>(filename));
}

void LinearCartesian2D_Domain_write_opendx(str filename,
                                           LinearCartesian2D_Domain domain,
                                           dict accessors)
{
	viennagrid::io::opendx_writer<LinearCartesian2D_Domain_t>    my_dx_writer;
	
	list keys = accessors.keys();
	list values = accessors.values();
	for (int i = 0; i < len(keys); ++i)
	{
		std::string quantity_name = extract<std::string>(keys[i]);
		object accessor = values[i];
		object accessor_cls_name = accessor.attr("__class__").attr("__name__");
		if (accessor_cls_name == "LinearCartesian2D_Vertex_Accessor")
		{
			LinearCartesian2D_Vertex_Accessor my_accessor = extract<LinearCartesian2D_Vertex_Accessor>(accessor);
			viennagrid::io::add_scalar_data_on_vertices(my_dx_writer, my_accessor.get_accessor(), quantity_name);
		}
		else if (accessor_cls_name == "LinearCartesian2D_Cell_Accessor")
		{
			LinearCartesian2D_Cell_Accessor my_accessor = extract<LinearCartesian2D_Cell_Accessor>(accessor);
			viennagrid::io::add_scalar_data_on_cells(my_dx_writer, my_accessor.get_accessor(), quantity_name);
		}
		else if (accessor_cls_name == "LinearCartesian2D_Vertex_Field")
		{
			LinearCartesian2D_Vertex_Field my_field = extract<LinearCartesian2D_Vertex_Field>(accessor);
			viennagrid::io::add_scalar_data_on_vertices(my_dx_writer, my_field.get_field(), quantity_name);
		}
		else if (accessor_cls_name == "LinearCartesian2D_Cell_Field")
		{
			LinearCartesian2D_Cell_Field my_field = extract<LinearCartesian2D_Cell_Field>(accessor);
			viennagrid::io::add_scalar_data_on_cells(my_dx_writer, my_field.get_field(), quantity_name);
		}
	}
	
	my_dx_writer(domain.get_domain(), extract<std::string>(filename));
}

void LinearCartesian3D_Domain_write_opendx(str filename,
                                           LinearCartesian3D_Domain domain,
                                           dict accessors)
{
	viennagrid::io::opendx_writer<LinearCartesian3D_Domain_t>    my_dx_writer;
	
	list keys = accessors.keys();
	list values = accessors.values();
	for (int i = 0; i < len(keys); ++i)
	{
		std::string quantity_name = extract<std::string>(keys[i]);
		object accessor = values[i];
		object accessor_cls_name = accessor.attr("__class__").attr("__name__");
		if (accessor_cls_name == "LinearCartesian3D_Vertex_Accessor")
		{
			LinearCartesian3D_Vertex_Accessor my_accessor = extract<LinearCartesian3D_Vertex_Accessor>(accessor);
			viennagrid::io::add_scalar_data_on_vertices(my_dx_writer, my_accessor.get_accessor(), quantity_name);
		}
		else if (accessor_cls_name == "LinearCartesian3D_Cell_Accessor")
		{
			LinearCartesian3D_Cell_Accessor my_accessor = extract<LinearCartesian3D_Cell_Accessor>(accessor);
			viennagrid::io::add_scalar_data_on_cells(my_dx_writer, my_accessor.get_accessor(), quantity_name);
		}
		else if (accessor_cls_name == "LinearCartesian3D_Vertex_Field")
		{
			LinearCartesian3D_Vertex_Field my_field = extract<LinearCartesian3D_Vertex_Field>(accessor);
			viennagrid::io::add_scalar_data_on_vertices(my_dx_writer, my_field.get_field(), quantity_name);
		}
		else if (accessor_cls_name == "LinearCartesian3D_Cell_Field")
		{
			LinearCartesian3D_Cell_Field my_field = extract<LinearCartesian3D_Cell_Field>(accessor);
			viennagrid::io::add_scalar_data_on_cells(my_dx_writer, my_field.get_field(), quantity_name);
		}
	}
	
	my_dx_writer(domain.get_domain(), extract<std::string>(filename));
}

void LinearCylindrical3D_Domain_write_opendx(str filename,
                                             LinearCylindrical3D_Domain domain,
                                             dict accessors)
{
	viennagrid::io::opendx_writer<LinearCylindrical3D_Domain_t>    my_dx_writer;
	
	list keys = accessors.keys();
	list values = accessors.values();
	for (int i = 0; i < len(keys); ++i)
	{
		std::string quantity_name = extract<std::string>(keys[i]);
		object accessor = values[i];
		object accessor_cls_name = accessor.attr("__class__").attr("__name__");
		if (accessor_cls_name == "LinearCylindrical3D_Vertex_Accessor")
		{
			LinearCylindrical3D_Vertex_Accessor my_accessor = extract<LinearCylindrical3D_Vertex_Accessor>(accessor);
			viennagrid::io::add_scalar_data_on_vertices(my_dx_writer, my_accessor.get_accessor(), quantity_name);
		}
		else if (accessor_cls_name == "LinearCylindrical3D_Cell_Accessor")
		{
			LinearCylindrical3D_Cell_Accessor my_accessor = extract<LinearCylindrical3D_Cell_Accessor>(accessor);
			viennagrid::io::add_scalar_data_on_cells(my_dx_writer, my_accessor.get_accessor(), quantity_name);
		}
		else if (accessor_cls_name == "LinearCylindrical3D_Vertex_Field")
		{
			LinearCylindrical3D_Vertex_Field my_field = extract<LinearCylindrical3D_Vertex_Field>(accessor);
			viennagrid::io::add_scalar_data_on_vertices(my_dx_writer, my_field.get_field(), quantity_name);
		}
		else if (accessor_cls_name == "LinearCylindrical3D_Cell_Field")
		{
			LinearCylindrical3D_Cell_Field my_field = extract<LinearCylindrical3D_Cell_Field>(accessor);
			viennagrid::io::add_scalar_data_on_cells(my_dx_writer, my_field.get_field(), quantity_name);
		}
	}
	
	my_dx_writer(domain.get_domain(), extract<std::string>(filename));
}

void LinearPolar2D_Domain_write_opendx(str filename,
                                       LinearPolar2D_Domain domain,
                                       dict accessors)
{
	viennagrid::io::opendx_writer<LinearPolar2D_Domain_t>    my_dx_writer;
	
	list keys = accessors.keys();
	list values = accessors.values();
	for (int i = 0; i < len(keys); ++i)
	{
		std::string quantity_name = extract<std::string>(keys[i]);
		object accessor = values[i];
		object accessor_cls_name = accessor.attr("__class__").attr("__name__");
		if (accessor_cls_name == "LinearPolar2D_Vertex_Accessor")
		{
			LinearPolar2D_Vertex_Accessor my_accessor = extract<LinearPolar2D_Vertex_Accessor>(accessor);
			viennagrid::io::add_scalar_data_on_vertices(my_dx_writer, my_accessor.get_accessor(), quantity_name);
		}
		else if (accessor_cls_name == "LinearPolar2D_Cell_Accessor")
		{
			LinearPolar2D_Cell_Accessor my_accessor = extract<LinearPolar2D_Cell_Accessor>(accessor);
			viennagrid::io::add_scalar_data_on_cells(my_dx_writer, my_accessor.get_accessor(), quantity_name);
		}
		else if (accessor_cls_name == "LinearPolar2D_Vertex_Field")
		{
			LinearPolar2D_Vertex_Field my_field = extract<LinearPolar2D_Vertex_Field>(accessor);
			viennagrid::io::add_scalar_data_on_vertices(my_dx_writer, my_field.get_field(), quantity_name);
		}
		else if (accessor_cls_name == "LinearPolar2D_Cell_Field")
		{
			LinearPolar2D_Cell_Field my_field = extract<LinearPolar2D_Cell_Field>(accessor);
			viennagrid::io::add_scalar_data_on_cells(my_dx_writer, my_field.get_field(), quantity_name);
		}
	}
	
	my_dx_writer(domain.get_domain(), extract<std::string>(filename));
}

void LinearSpherical3D_Domain_write_opendx(str filename,
                                           LinearSpherical3D_Domain domain,
                                           dict accessors)
{
	viennagrid::io::opendx_writer<LinearSpherical3D_Domain_t>    my_dx_writer;
	
	list keys = accessors.keys();
	list values = accessors.values();
	for (int i = 0; i < len(keys); ++i)
	{
		std::string quantity_name = extract<std::string>(keys[i]);
		object accessor = values[i];
		object accessor_cls_name = accessor.attr("__class__").attr("__name__");
		if (accessor_cls_name == "LinearSpherical3D_Vertex_Accessor")
		{
			LinearSpherical3D_Vertex_Accessor my_accessor = extract<LinearSpherical3D_Vertex_Accessor>(accessor);
			viennagrid::io::add_scalar_data_on_vertices(my_dx_writer, my_accessor.get_accessor(), quantity_name);
		}
		else if (accessor_cls_name == "LinearSpherical3D_Cell_Accessor")
		{
			LinearSpherical3D_Cell_Accessor my_accessor = extract<LinearSpherical3D_Cell_Accessor>(accessor);
			viennagrid::io::add_scalar_data_on_cells(my_dx_writer, my_accessor.get_accessor(), quantity_name);
		}
		else if (accessor_cls_name == "LinearSpherical3D_Vertex_Field")
		{
			LinearSpherical3D_Vertex_Field my_field = extract<LinearSpherical3D_Vertex_Field>(accessor);
			viennagrid::io::add_scalar_data_on_vertices(my_dx_writer, my_field.get_field(), quantity_name);
		}
		else if (accessor_cls_name == "LinearSpherical3D_Cell_Field")
		{
			LinearSpherical3D_Cell_Field my_field = extract<LinearSpherical3D_Cell_Field>(accessor);
			viennagrid::io::add_scalar_data_on_cells(my_dx_writer, my_field.get_field(), quantity_name);
		}
	}
	
	my_dx_writer(domain.get_domain(), extract<std::string>(filename));
}

////////////////
// TRIANGULAR //
////////////////

void TriangularCartesian2D_Domain_write_opendx(str filename,
                                               TriangularCartesian2D_Domain domain,
                                               dict accessors)
{
	viennagrid::io::opendx_writer<TriangularCartesian2D_Domain_t>    my_dx_writer;
	
	list keys = accessors.keys();
	list values = accessors.values();
	for (int i = 0; i < len(keys); ++i)
	{
		std::string quantity_name = extract<std::string>(keys[i]);
		object accessor = values[i];
		object accessor_cls_name = accessor.attr("__class__").attr("__name__");
		if (accessor_cls_name == "TriangularCartesian2D_Vertex_Accessor")
		{
			TriangularCartesian2D_Vertex_Accessor my_accessor = extract<TriangularCartesian2D_Vertex_Accessor>(accessor);
			viennagrid::io::add_scalar_data_on_vertices(my_dx_writer, my_accessor.get_accessor(), quantity_name);
		}
		else if (accessor_cls_name == "TriangularCartesian2D_Cell_Accessor")
		{
			TriangularCartesian2D_Cell_Accessor my_accessor = extract<TriangularCartesian2D_Cell_Accessor>(accessor);
			viennagrid::io::add_scalar_data_on_cells(my_dx_writer, my_accessor.get_accessor(), quantity_name);
		}
		else if (accessor_cls_name == "TriangularCartesian2D_Vertex_Field")
		{
			TriangularCartesian2D_Vertex_Field my_field = extract<TriangularCartesian2D_Vertex_Field>(accessor);
			viennagrid::io::add_scalar_data_on_vertices(my_dx_writer, my_field.get_field(), quantity_name);
		}
		else if (accessor_cls_name == "TriangularCartesian2D_Cell_Field")
		{
			TriangularCartesian2D_Cell_Field my_field = extract<TriangularCartesian2D_Cell_Field>(accessor);
			viennagrid::io::add_scalar_data_on_cells(my_dx_writer, my_field.get_field(), quantity_name);
		}
	}
	
	my_dx_writer(domain.get_domain(), extract<std::string>(filename));
}

void TriangularCartesian3D_Domain_write_opendx(str filename,
                                               TriangularCartesian3D_Domain domain,
                                               dict accessors)
{
	viennagrid::io::opendx_writer<TriangularCartesian3D_Domain_t>    my_dx_writer;
	
	list keys = accessors.keys();
	list values = accessors.values();
	for (int i = 0; i < len(keys); ++i)
	{
		std::string quantity_name = extract<std::string>(keys[i]);
		object accessor = values[i];
		object accessor_cls_name = accessor.attr("__class__").attr("__name__");
		if (accessor_cls_name == "TriangularCartesian3D_Vertex_Accessor")
		{
			TriangularCartesian3D_Vertex_Accessor my_accessor = extract<TriangularCartesian3D_Vertex_Accessor>(accessor);
			viennagrid::io::add_scalar_data_on_vertices(my_dx_writer, my_accessor.get_accessor(), quantity_name);
		}
		else if (accessor_cls_name == "TriangularCartesian3D_Cell_Accessor")
		{
			TriangularCartesian3D_Cell_Accessor my_accessor = extract<TriangularCartesian3D_Cell_Accessor>(accessor);
			viennagrid::io::add_scalar_data_on_cells(my_dx_writer, my_accessor.get_accessor(), quantity_name);
		}
		else if (accessor_cls_name == "TriangularCartesian3D_Vertex_Field")
		{
			TriangularCartesian3D_Vertex_Field my_field = extract<TriangularCartesian3D_Vertex_Field>(accessor);
			viennagrid::io::add_scalar_data_on_vertices(my_dx_writer, my_field.get_field(), quantity_name);
		}
		else if (accessor_cls_name == "TriangularCartesian3D_Cell_Field")
		{
			TriangularCartesian3D_Cell_Field my_field = extract<TriangularCartesian3D_Cell_Field>(accessor);
			viennagrid::io::add_scalar_data_on_cells(my_dx_writer, my_field.get_field(), quantity_name);
		}
	}
	
	my_dx_writer(domain.get_domain(), extract<std::string>(filename));
}

void TriangularCylindrical3D_Domain_write_opendx(str filename,
                                                 TriangularCylindrical3D_Domain domain,
                                                 dict accessors)
{
	viennagrid::io::opendx_writer<TriangularCylindrical3D_Domain_t>    my_dx_writer;
	
	list keys = accessors.keys();
	list values = accessors.values();
	for (int i = 0; i < len(keys); ++i)
	{
		std::string quantity_name = extract<std::string>(keys[i]);
		object accessor = values[i];
		object accessor_cls_name = accessor.attr("__class__").attr("__name__");
		if (accessor_cls_name == "TriangularCylindrical3D_Vertex_Accessor")
		{
			TriangularCylindrical3D_Vertex_Accessor my_accessor = extract<TriangularCylindrical3D_Vertex_Accessor>(accessor);
			viennagrid::io::add_scalar_data_on_vertices(my_dx_writer, my_accessor.get_accessor(), quantity_name);
		}
		else if (accessor_cls_name == "TriangularCylindrical3D_Cell_Accessor")
		{
			TriangularCylindrical3D_Cell_Accessor my_accessor = extract<TriangularCylindrical3D_Cell_Accessor>(accessor);
			viennagrid::io::add_scalar_data_on_cells(my_dx_writer, my_accessor.get_accessor(), quantity_name);
		}
		else if (accessor_cls_name == "TriangularCylindrical3D_Vertex_Field")
		{
			TriangularCylindrical3D_Vertex_Field my_field = extract<TriangularCylindrical3D_Vertex_Field>(accessor);
			viennagrid::io::add_scalar_data_on_vertices(my_dx_writer, my_field.get_field(), quantity_name);
		}
		else if (accessor_cls_name == "TriangularCylindrical3D_Cell_Field")
		{
			TriangularCylindrical3D_Cell_Field my_field = extract<TriangularCylindrical3D_Cell_Field>(accessor);
			viennagrid::io::add_scalar_data_on_cells(my_dx_writer, my_field.get_field(), quantity_name);
		}
	}
	
	my_dx_writer(domain.get_domain(), extract<std::string>(filename));
}

void TriangularPolar2D_Domain_write_opendx(str filename,
                                           TriangularPolar2D_Domain domain,
                                           dict accessors)
{
	viennagrid::io::opendx_writer<TriangularPolar2D_Domain_t>    my_dx_writer;
	
	list keys = accessors.keys();
	list values = accessors.values();
	for (int i = 0; i < len(keys); ++i)
	{
		std::string quantity_name = extract<std::string>(keys[i]);
		object accessor = values[i];
		object accessor_cls_name = accessor.attr("__class__").attr("__name__");
		if (accessor_cls_name == "TriangularPolar2D_Vertex_Accessor")
		{
			TriangularPolar2D_Vertex_Accessor my_accessor = extract<TriangularPolar2D_Vertex_Accessor>(accessor);
			viennagrid::io::add_scalar_data_on_vertices(my_dx_writer, my_accessor.get_accessor(), quantity_name);
		}
		else if (accessor_cls_name == "TriangularPolar2D_Cell_Accessor")
		{
			TriangularPolar2D_Cell_Accessor my_accessor = extract<TriangularPolar2D_Cell_Accessor>(accessor);
			viennagrid::io::add_scalar_data_on_cells(my_dx_writer, my_accessor.get_accessor(), quantity_name);
		}
		else if (accessor_cls_name == "TriangularPolar2D_Vertex_Field")
		{
			TriangularPolar2D_Vertex_Field my_field = extract<TriangularPolar2D_Vertex_Field>(accessor);
			viennagrid::io::add_scalar_data_on_vertices(my_dx_writer, my_field.get_field(), quantity_name);
		}
		else if (accessor_cls_name == "TriangularPolar2D_Cell_Field")
		{
			TriangularPolar2D_Cell_Field my_field = extract<TriangularPolar2D_Cell_Field>(accessor);
			viennagrid::io::add_scalar_data_on_cells(my_dx_writer, my_field.get_field(), quantity_name);
		}
	}
	
	my_dx_writer(domain.get_domain(), extract<std::string>(filename));
}

void TriangularSpherical3D_Domain_write_opendx(str filename,
                                               TriangularSpherical3D_Domain domain,
                                               dict accessors)
{
	viennagrid::io::opendx_writer<TriangularSpherical3D_Domain_t>    my_dx_writer;
	
	list keys = accessors.keys();
	list values = accessors.values();
	for (int i = 0; i < len(keys); ++i)
	{
		std::string quantity_name = extract<std::string>(keys[i]);
		object accessor = values[i];
		object accessor_cls_name = accessor.attr("__class__").attr("__name__");
		if (accessor_cls_name == "TriangularSpherical3D_Vertex_Accessor")
		{
			TriangularSpherical3D_Vertex_Accessor my_accessor = extract<TriangularSpherical3D_Vertex_Accessor>(accessor);
			viennagrid::io::add_scalar_data_on_vertices(my_dx_writer, my_accessor.get_accessor(), quantity_name);
		}
		else if (accessor_cls_name == "TriangularSpherical3D_Cell_Accessor")
		{
			TriangularSpherical3D_Cell_Accessor my_accessor = extract<TriangularSpherical3D_Cell_Accessor>(accessor);
			viennagrid::io::add_scalar_data_on_cells(my_dx_writer, my_accessor.get_accessor(), quantity_name);
		}
		else if (accessor_cls_name == "TriangularSpherical3D_Vertex_Field")
		{
			TriangularSpherical3D_Vertex_Field my_field = extract<TriangularSpherical3D_Vertex_Field>(accessor);
			viennagrid::io::add_scalar_data_on_vertices(my_dx_writer, my_field.get_field(), quantity_name);
		}
		else if (accessor_cls_name == "TriangularSpherical3D_Cell_Field")
		{
			TriangularSpherical3D_Cell_Field my_field = extract<TriangularSpherical3D_Cell_Field>(accessor);
			viennagrid::io::add_scalar_data_on_cells(my_dx_writer, my_field.get_field(), quantity_name);
		}
	}
	
	my_dx_writer(domain.get_domain(), extract<std::string>(filename));
}

///////////////////
// QUADRILATERAL //
///////////////////

void QuadrilateralCartesian2D_Domain_write_opendx(str filename,
                                                  QuadrilateralCartesian2D_Domain domain,
                                                  dict accessors)
{
	viennagrid::io::opendx_writer<QuadrilateralCartesian2D_Domain_t>    my_dx_writer;
	
	list keys = accessors.keys();
	list values = accessors.values();
	for (int i = 0; i < len(keys); ++i)
	{
		std::string quantity_name = extract<std::string>(keys[i]);
		object accessor = values[i];
		object accessor_cls_name = accessor.attr("__class__").attr("__name__");
		if (accessor_cls_name == "QuadrilateralCartesian2D_Vertex_Accessor")
		{
			QuadrilateralCartesian2D_Vertex_Accessor my_accessor = extract<QuadrilateralCartesian2D_Vertex_Accessor>(accessor);
			viennagrid::io::add_scalar_data_on_vertices(my_dx_writer, my_accessor.get_accessor(), quantity_name);
		}
		else if (accessor_cls_name == "QuadrilateralCartesian2D_Cell_Accessor")
		{
			QuadrilateralCartesian2D_Cell_Accessor my_accessor = extract<QuadrilateralCartesian2D_Cell_Accessor>(accessor);
			viennagrid::io::add_scalar_data_on_cells(my_dx_writer, my_accessor.get_accessor(), quantity_name);
		}
		else if (accessor_cls_name == "QuadrilateralCartesian2D_Vertex_Field")
		{
			QuadrilateralCartesian2D_Vertex_Field my_field = extract<QuadrilateralCartesian2D_Vertex_Field>(accessor);
			viennagrid::io::add_scalar_data_on_vertices(my_dx_writer, my_field.get_field(), quantity_name);
		}
		else if (accessor_cls_name == "QuadrilateralCartesian2D_Cell_Field")
		{
			QuadrilateralCartesian2D_Cell_Field my_field = extract<QuadrilateralCartesian2D_Cell_Field>(accessor);
			viennagrid::io::add_scalar_data_on_cells(my_dx_writer, my_field.get_field(), quantity_name);
		}
	}
	
	my_dx_writer(domain.get_domain(), extract<std::string>(filename));
}

void QuadrilateralCartesian3D_Domain_write_opendx(str filename,
                                                  QuadrilateralCartesian3D_Domain domain,
                                                  dict accessors)
{
	viennagrid::io::opendx_writer<QuadrilateralCartesian3D_Domain_t>    my_dx_writer;
	
	list keys = accessors.keys();
	list values = accessors.values();
	for (int i = 0; i < len(keys); ++i)
	{
		std::string quantity_name = extract<std::string>(keys[i]);
		object accessor = values[i];
		object accessor_cls_name = accessor.attr("__class__").attr("__name__");
		if (accessor_cls_name == "QuadrilateralCartesian3D_Vertex_Accessor")
		{
			QuadrilateralCartesian3D_Vertex_Accessor my_accessor = extract<QuadrilateralCartesian3D_Vertex_Accessor>(accessor);
			viennagrid::io::add_scalar_data_on_vertices(my_dx_writer, my_accessor.get_accessor(), quantity_name);
		}
		else if (accessor_cls_name == "QuadrilateralCartesian3D_Cell_Accessor")
		{
			QuadrilateralCartesian3D_Cell_Accessor my_accessor = extract<QuadrilateralCartesian3D_Cell_Accessor>(accessor);
			viennagrid::io::add_scalar_data_on_cells(my_dx_writer, my_accessor.get_accessor(), quantity_name);
		}
		else if (accessor_cls_name == "QuadrilateralCartesian3D_Vertex_Field")
		{
			QuadrilateralCartesian3D_Vertex_Field my_field = extract<QuadrilateralCartesian3D_Vertex_Field>(accessor);
			viennagrid::io::add_scalar_data_on_vertices(my_dx_writer, my_field.get_field(), quantity_name);
		}
		else if (accessor_cls_name == "QuadrilateralCartesian3D_Cell_Field")
		{
			QuadrilateralCartesian3D_Cell_Field my_field = extract<QuadrilateralCartesian3D_Cell_Field>(accessor);
			viennagrid::io::add_scalar_data_on_cells(my_dx_writer, my_field.get_field(), quantity_name);
		}
	}
	
	my_dx_writer(domain.get_domain(), extract<std::string>(filename));
}

void QuadrilateralCylindrical3D_Domain_write_opendx(str filename,
                                                    QuadrilateralCylindrical3D_Domain domain,
                                                    dict accessors)
{
	viennagrid::io::opendx_writer<QuadrilateralCylindrical3D_Domain_t>    my_dx_writer;
	
	list keys = accessors.keys();
	list values = accessors.values();
	for (int i = 0; i < len(keys); ++i)
	{
		std::string quantity_name = extract<std::string>(keys[i]);
		object accessor = values[i];
		object accessor_cls_name = accessor.attr("__class__").attr("__name__");
		if (accessor_cls_name == "QuadrilateralCylindrical3D_Vertex_Accessor")
		{
			QuadrilateralCylindrical3D_Vertex_Accessor my_accessor = extract<QuadrilateralCylindrical3D_Vertex_Accessor>(accessor);
			viennagrid::io::add_scalar_data_on_vertices(my_dx_writer, my_accessor.get_accessor(), quantity_name);
		}
		else if (accessor_cls_name == "QuadrilateralCylindrical3D_Cell_Accessor")
		{
			QuadrilateralCylindrical3D_Cell_Accessor my_accessor = extract<QuadrilateralCylindrical3D_Cell_Accessor>(accessor);
			viennagrid::io::add_scalar_data_on_cells(my_dx_writer, my_accessor.get_accessor(), quantity_name);
		}
		else if (accessor_cls_name == "QuadrilateralCylindrical3D_Vertex_Field")
		{
			QuadrilateralCylindrical3D_Vertex_Field my_field = extract<QuadrilateralCylindrical3D_Vertex_Field>(accessor);
			viennagrid::io::add_scalar_data_on_vertices(my_dx_writer, my_field.get_field(), quantity_name);
		}
		else if (accessor_cls_name == "QuadrilateralCylindrical3D_Cell_Field")
		{
			QuadrilateralCylindrical3D_Cell_Field my_field = extract<QuadrilateralCylindrical3D_Cell_Field>(accessor);
			viennagrid::io::add_scalar_data_on_cells(my_dx_writer, my_field.get_field(), quantity_name);
		}
	}
	
	my_dx_writer(domain.get_domain(), extract<std::string>(filename));
}

void QuadrilateralPolar2D_Domain_write_opendx(str filename,
                                              QuadrilateralPolar2D_Domain domain,
                                              dict accessors)
{
	viennagrid::io::opendx_writer<QuadrilateralPolar2D_Domain_t>    my_dx_writer;
	
	list keys = accessors.keys();
	list values = accessors.values();
	for (int i = 0; i < len(keys); ++i)
	{
		std::string quantity_name = extract<std::string>(keys[i]);
		object accessor = values[i];
		object accessor_cls_name = accessor.attr("__class__").attr("__name__");
		if (accessor_cls_name == "QuadrilateralPolar2D_Vertex_Accessor")
		{
			QuadrilateralPolar2D_Vertex_Accessor my_accessor = extract<QuadrilateralPolar2D_Vertex_Accessor>(accessor);
			viennagrid::io::add_scalar_data_on_vertices(my_dx_writer, my_accessor.get_accessor(), quantity_name);
		}
		else if (accessor_cls_name == "QuadrilateralPolar2D_Cell_Accessor")
		{
			QuadrilateralPolar2D_Cell_Accessor my_accessor = extract<QuadrilateralPolar2D_Cell_Accessor>(accessor);
			viennagrid::io::add_scalar_data_on_cells(my_dx_writer, my_accessor.get_accessor(), quantity_name);
		}
		else if (accessor_cls_name == "QuadrilateralPolar2D_Vertex_Field")
		{
			QuadrilateralPolar2D_Vertex_Field my_field = extract<QuadrilateralPolar2D_Vertex_Field>(accessor);
			viennagrid::io::add_scalar_data_on_vertices(my_dx_writer, my_field.get_field(), quantity_name);
		}
		else if (accessor_cls_name == "QuadrilateralPolar2D_Cell_Field")
		{
			QuadrilateralPolar2D_Cell_Field my_field = extract<QuadrilateralPolar2D_Cell_Field>(accessor);
			viennagrid::io::add_scalar_data_on_cells(my_dx_writer, my_field.get_field(), quantity_name);
		}
	}
	
	my_dx_writer(domain.get_domain(), extract<std::string>(filename));
}

void QuadrilateralSpherical3D_Domain_write_opendx(str filename,
                                                  QuadrilateralSpherical3D_Domain domain,
                                                  dict accessors)
{
	viennagrid::io::opendx_writer<QuadrilateralSpherical3D_Domain_t>    my_dx_writer;
	
	list keys = accessors.keys();
	list values = accessors.values();
	for (int i = 0; i < len(keys); ++i)
	{
		std::string quantity_name = extract<std::string>(keys[i]);
		object accessor = values[i];
		object accessor_cls_name = accessor.attr("__class__").attr("__name__");
		if (accessor_cls_name == "QuadrilateralSpherical3D_Vertex_Accessor")
		{
			QuadrilateralSpherical3D_Vertex_Accessor my_accessor = extract<QuadrilateralSpherical3D_Vertex_Accessor>(accessor);
			viennagrid::io::add_scalar_data_on_vertices(my_dx_writer, my_accessor.get_accessor(), quantity_name);
		}
		else if (accessor_cls_name == "QuadrilateralSpherical3D_Cell_Accessor")
		{
			QuadrilateralSpherical3D_Cell_Accessor my_accessor = extract<QuadrilateralSpherical3D_Cell_Accessor>(accessor);
			viennagrid::io::add_scalar_data_on_cells(my_dx_writer, my_accessor.get_accessor(), quantity_name);
		}
		else if (accessor_cls_name == "QuadrilateralSpherical3D_Vertex_Field")
		{
			QuadrilateralSpherical3D_Vertex_Field my_field = extract<QuadrilateralSpherical3D_Vertex_Field>(accessor);
			viennagrid::io::add_scalar_data_on_vertices(my_dx_writer, my_field.get_field(), quantity_name);
		}
		else if (accessor_cls_name == "QuadrilateralSpherical3D_Cell_Field")
		{
			QuadrilateralSpherical3D_Cell_Field my_field = extract<QuadrilateralSpherical3D_Cell_Field>(accessor);
			viennagrid::io::add_scalar_data_on_cells(my_dx_writer, my_field.get_field(), quantity_name);
		}
	}
	
	my_dx_writer(domain.get_domain(), extract<std::string>(filename));
}

/////////////////
// TETRAHEDRAL //
/////////////////

void TetrahedralCartesian3D_Domain_write_opendx(str filename,
                                                TetrahedralCartesian3D_Domain domain,
                                                dict accessors)
{
	viennagrid::io::opendx_writer<TetrahedralCartesian3D_Domain_t>    my_dx_writer;
	
	list keys = accessors.keys();
	list values = accessors.values();
	for (int i = 0; i < len(keys); ++i)
	{
		std::string quantity_name = extract<std::string>(keys[i]);
		object accessor = values[i];
		object accessor_cls_name = accessor.attr("__class__").attr("__name__");
		if (accessor_cls_name == "TetrahedralCartesian3D_Vertex_Accessor")
		{
			TetrahedralCartesian3D_Vertex_Accessor my_accessor = extract<TetrahedralCartesian3D_Vertex_Accessor>(accessor);
			viennagrid::io::add_scalar_data_on_vertices(my_dx_writer, my_accessor.get_accessor(), quantity_name);
		}
		else if (accessor_cls_name == "TetrahedralCartesian3D_Cell_Accessor")
		{
			TetrahedralCartesian3D_Cell_Accessor my_accessor = extract<TetrahedralCartesian3D_Cell_Accessor>(accessor);
			viennagrid::io::add_scalar_data_on_cells(my_dx_writer, my_accessor.get_accessor(), quantity_name);
		}
		else if (accessor_cls_name == "TetrahedralCartesian3D_Vertex_Field")
		{
			TetrahedralCartesian3D_Vertex_Field my_field = extract<TetrahedralCartesian3D_Vertex_Field>(accessor);
			viennagrid::io::add_scalar_data_on_vertices(my_dx_writer, my_field.get_field(), quantity_name);
		}
		else if (accessor_cls_name == "TetrahedralCartesian3D_Cell_Field")
		{
			TetrahedralCartesian3D_Cell_Field my_field = extract<TetrahedralCartesian3D_Cell_Field>(accessor);
			viennagrid::io::add_scalar_data_on_cells(my_dx_writer, my_field.get_field(), quantity_name);
		}
	}
	
	my_dx_writer(domain.get_domain(), extract<std::string>(filename));
}

void TetrahedralCylindrical3D_Domain_write_opendx(str filename,
                                                  TetrahedralCylindrical3D_Domain domain,
                                                  dict accessors)
{
	viennagrid::io::opendx_writer<TetrahedralCylindrical3D_Domain_t>    my_dx_writer;
	
	list keys = accessors.keys();
	list values = accessors.values();
	for (int i = 0; i < len(keys); ++i)
	{
		std::string quantity_name = extract<std::string>(keys[i]);
		object accessor = values[i];
		object accessor_cls_name = accessor.attr("__class__").attr("__name__");
		if (accessor_cls_name == "TetrahedralCylindrical3D_Vertex_Accessor")
		{
			TetrahedralCylindrical3D_Vertex_Accessor my_accessor = extract<TetrahedralCylindrical3D_Vertex_Accessor>(accessor);
			viennagrid::io::add_scalar_data_on_vertices(my_dx_writer, my_accessor.get_accessor(), quantity_name);
		}
		else if (accessor_cls_name == "TetrahedralCylindrical3D_Cell_Accessor")
		{
			TetrahedralCylindrical3D_Cell_Accessor my_accessor = extract<TetrahedralCylindrical3D_Cell_Accessor>(accessor);
			viennagrid::io::add_scalar_data_on_cells(my_dx_writer, my_accessor.get_accessor(), quantity_name);
		}
		else if (accessor_cls_name == "TetrahedralCylindrical3D_Vertex_Field")
		{
			TetrahedralCylindrical3D_Vertex_Field my_field = extract<TetrahedralCylindrical3D_Vertex_Field>(accessor);
			viennagrid::io::add_scalar_data_on_vertices(my_dx_writer, my_field.get_field(), quantity_name);
		}
		else if (accessor_cls_name == "TetrahedralCylindrical3D_Cell_Field")
		{
			TetrahedralCylindrical3D_Cell_Field my_field = extract<TetrahedralCylindrical3D_Cell_Field>(accessor);
			viennagrid::io::add_scalar_data_on_cells(my_dx_writer, my_field.get_field(), quantity_name);
		}
	}
	
	my_dx_writer(domain.get_domain(), extract<std::string>(filename));
}

void TetrahedralSpherical3D_Domain_write_opendx(str filename,
                                                TetrahedralSpherical3D_Domain domain,
                                                dict accessors)
{
	viennagrid::io::opendx_writer<TetrahedralSpherical3D_Domain_t>    my_dx_writer;
	
	list keys = accessors.keys();
	list values = accessors.values();
	for (int i = 0; i < len(keys); ++i)
	{
		std::string quantity_name = extract<std::string>(keys[i]);
		object accessor = values[i];
		object accessor_cls_name = accessor.attr("__class__").attr("__name__");
		if (accessor_cls_name == "TetrahedralSpherical3D_Vertex_Accessor")
		{
			TetrahedralSpherical3D_Vertex_Accessor my_accessor = extract<TetrahedralSpherical3D_Vertex_Accessor>(accessor);
			viennagrid::io::add_scalar_data_on_vertices(my_dx_writer, my_accessor.get_accessor(), quantity_name);
		}
		else if (accessor_cls_name == "TetrahedralSpherical3D_Cell_Accessor")
		{
			TetrahedralSpherical3D_Cell_Accessor my_accessor = extract<TetrahedralSpherical3D_Cell_Accessor>(accessor);
			viennagrid::io::add_scalar_data_on_cells(my_dx_writer, my_accessor.get_accessor(), quantity_name);
		}
		else if (accessor_cls_name == "TetrahedralSpherical3D_Vertex_Field")
		{
			TetrahedralSpherical3D_Vertex_Field my_field = extract<TetrahedralSpherical3D_Vertex_Field>(accessor);
			viennagrid::io::add_scalar_data_on_vertices(my_dx_writer, my_field.get_field(), quantity_name);
		}
		else if (accessor_cls_name == "TetrahedralSpherical3D_Cell_Field")
		{
			TetrahedralSpherical3D_Cell_Field my_field = extract<TetrahedralSpherical3D_Cell_Field>(accessor);
			viennagrid::io::add_scalar_data_on_cells(my_dx_writer, my_field.get_field(), quantity_name);
		}
	}
	
	my_dx_writer(domain.get_domain(), extract<std::string>(filename));
}
