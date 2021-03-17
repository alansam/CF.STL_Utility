//
//  move_if_noexcept.cpp
//  CF.STL_Utility
//
//  Created by Alan Sampson on 3/16/21.
//

#include "move_if_noexcept.hpp"

using namespace std::literals::string_literals;

//  MARK: - U_move_if_noexcept
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: U_move_if_noexcept()
 */
auto U_move_if_noexcept(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
  {
    umx::Good gud1;
    umx::Bad  bad1;
    umx::Good gud2 = std::move_if_noexcept(gud1);
    umx::Bad  bad2 = std::move_if_noexcept(bad1);
  }
  std::cout << std::endl; //  make sure cout is flushed.

  return 0;
}
