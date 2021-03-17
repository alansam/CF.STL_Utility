//
//  declval.cpp
//  CF.STL_Utility
//
//  Created by Alan Sampson on 3/16/21.
//

#include "declval.hpp"

using namespace std::literals::string_literals;

//  MARK: - U_declval
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: U_declval()
 */
auto U_declval(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
  {
    decltype(udv::Default().foo()) n1 = 1;                    // type of n1 is int
//    decltype(udv::NonDefault().foo()) n2 = n1;               // error: no default constructor
    decltype(std::declval<udv::NonDefault>().foo()) n2 = n1;  // type of n2 is int
    std::cout << "n1 = " << n1 << '\n'
              << "n2 = " << n2 << '\n';
  }
  std::cout << std::endl; //  make sure cout is flushed.

  return 0;
}
