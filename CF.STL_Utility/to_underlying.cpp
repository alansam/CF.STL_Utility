//
//  to_underlying.cpp
//  CF.STL_Utility
//
//  Created by Alan Sampson on 3/16/21.
//

#include "to_underlying.hpp"

#if (__cplusplus > 201707L)
//  MARK: - U_to_underlying
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: U_to_underlying()
 */
auto U_to_underlying(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  {
    enum class E1 : char { e_ };
    static_assert(std::is_same_v<char, decltype(cxx::to_underlying(E1::e_))>);
    enum struct E2 : long { e_ };
    static_assert(std::is_same_v<long, decltype(cxx::to_underlying(E2::e_))>);
    enum E3 : unsigned { e_ };
    static_assert(std::is_same_v<unsigned, decltype(cxx::to_underlying(e_))>);

    enum class ColorMask : std::uint32_t {
      red = 0xFF, green = (red << 8), blue = (green << 8), alpha = (blue << 8)
    }
  }
  std::cout << std::endl; //  make sure cout is flushed.

  return 0;
}
#endif  /* (__cplusplus > 201707L) */
