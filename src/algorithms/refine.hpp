#ifndef ALGORITHMS_REFINE_HPP
#define ALGORITHMS_REFINE_HPP

#include "../domains/triangular.hpp"
#include "../domains/tetrahedral.hpp"

#include "../segmentations/triangular.hpp"
#include "../segmentations/tetrahedral.hpp"

#include "../edges/triangular.hpp"
#include "../edges/tetrahedral.hpp"

#include <boost/python.hpp>
using namespace boost::python;

/**********
 * REFINE *
 **********/

tuple TriangularCartesian2D_Domain_refine(TriangularCartesian2D_Domain domain_in, TriangularCartesian2D_Segmentation segmentation_in, bool (*predicate)(const TriangularCartesian2D_Edge &));

#endif /* end of include guard: ALGORITHMS_REFINE_HPP */
