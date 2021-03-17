//
//  make_from_tuple.cpp
//  CF.STL_Utility
//
//  Created by Alan Sampson on 3/16/21.
//

#include "make_from_tuple.hpp"

using namespace std::literals::string_literals;

//  MARK: - U_make_from_tuple
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: U_make_from_tuple()
 */
auto U_make_from_tuple(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
  std::cout << "std::make_from_tuple"s << std::endl;
  {
    auto tuple = std::make_tuple(42, 3.14f, 0);
    std::make_from_tuple<umft::Foo>(std::move(tuple));
  }
  std::cout << std::endl; //  make sure cout is flushed.

  return 0;
}
