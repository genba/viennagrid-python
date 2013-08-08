#ifndef EDGES_TYPES_HPP
#define EDGES_TYPES_HPP

#include "../domains/types.hpp"

#include <vector>

typedef std::vector<bool>    EdgeRefinementFlagContainerType;

/**********
 * Linear *
 **********/

typedef viennagrid::result_of::line<LinearCartesian1D_Domain_t>::type                   LinearCartesian1D_Edge_t;
typedef viennagrid::result_of::line_range<LinearCartesian1D_Domain_t>::type             LinearCartesian1D_EdgeRange_t;

#endif /* end of include guard: EDGES_TYPES_HPP */
