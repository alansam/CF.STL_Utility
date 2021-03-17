//
//  underlying_type.cpp
//  CF.STL_Utility
//
//  Created by Alan Sampson on 3/16/21.
//

#include "underlying_type.hpp"

using namespace std::literals::string_literals;

//  MARK: - U_underlying_type
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: U_underlying_type()
 */
auto U_underlying_type(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
  {
    constexpr bool e1_t = std::is_same_v< std::underlying_type_t<uut::e1>, int >;
    constexpr bool e2_t = std::is_same_v< std::underlying_type_t<uut::e2>, int >;
    constexpr bool e3_t = std::is_same_v< std::underlying_type_t<uut::e3>, int >;
    constexpr bool e4_t = std::is_same_v< std::underlying_type_t<uut::e4>, int >;

    std::cout
      << "underlying type for 'e1' is "s << (e1_t ? "int"s : "non-int"s) << '\n'
      << "underlying type for 'e2' is "s << (e2_t ? "int"s : "non-int"s) << '\n'
      << "underlying type for 'e3' is "s << (e3_t ? "int"s : "non-int"s) << '\n'
      << "underlying type for 'e4' is "s << (e4_t ? "int"s : "non-int"s) << '\n'
      ;
  }
  std::cout << std::endl; //  make sure cout is flushed.

  return 0;
}
