//
//  in_range.cpp
//  CF.STL_Utility
//
//  Created by Alan Sampson on 3/16/21.
//

#include "in_range.hpp"

#if (__cplusplus > 201707L)
//  MARK: - U_in_range
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: U_in_range()
 */
auto U_in_range(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  {
    std::cout << std::boolalpha;

    std::cout << std::in_range<std::size_t>(-1) << '\n';
    std::cout << std::in_range<std::size_t>(42) << '\n';
  }
  std::cout << std::endl; //  make sure cout is flushed.

  return 0;
}
#endif  /* (__cplusplus > 201707L) */
