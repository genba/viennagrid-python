#ifndef EDGES_TYPES_HPP
#define EDGES_TYPES_HPP

#include "../domains/types.hpp"

#include <vector>

typedef std::vector<bool>    EdgeRefinementFlagContainerType;

/**************
 * Triangular *
 **************/

typedef viennagrid::result_of::line<TriangularCartesian2D_Domain_t>::type          TriangularCartesian2D_Edge_t;
typedef viennagrid::result_of::line_range<TriangularCartesian2D_Domain_t>::type    TriangularCartesian2D_EdgeRange_t;

#endif /* end of include guard: EDGES_TYPES_HPP */
