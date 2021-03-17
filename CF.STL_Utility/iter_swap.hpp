//
//  iter_swap.hpp
//  CF.STL_Utility
//
//  Created by Alan Sampson on 3/16/21.
//

#pragma once
#ifndef iter_swap_hpp
#define iter_swap_hpp

#include "helper.hpp"

//  MARK: - Definitions
auto U_iter_swap(int argc, char const * argv[]) -> decltype(argc);

//  MARK: - U_iter_swap
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  MARK: namespace uis
namespace uis {

template<class ForwardIt>
void selection_sort(ForwardIt begin, ForwardIt end) {
  for (ForwardIt i_ = begin; i_ != end; ++i_) {
    std::iter_swap(i_, std::min_element(i_, end));
  }
}

} /* namespace uis */

#endif /* iter_swap_hpp */
