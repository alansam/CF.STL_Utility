//
//  byte.cpp
//  CF.STL_Utility
//
//  Created by Alan Sampson on 3/16/21.
//

#include "byte.hpp"

using namespace std::literals::string_literals;

//  MARK: - U_byte
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: U_byte()
 */
auto U_byte(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
  std::cout << "std::byte"s << std::endl;
  {
    auto pb = [](std::byte const & b_, auto const & type = std::hex) -> std::string {
      std::ostringstream os;
      os << type << std::to_integer<int>(b_);
      return os.str();
    };

    auto tb = [](auto const & b1, auto const & cs, auto const & b2,
                 auto const & type,
                 bool const bcp ) -> std::string {
      auto b1i = std::to_integer<int>(b1);
      auto b2i = std::to_integer<int>(b2);
      std::ostringstream os;
      os << type << b1i << cs << b2i << ' ' << std::boolalpha << bcp;
      return os.str();
    };

    std::byte b1 { 0b10'1010 }; //  42
    std::byte b2 { 0b01'1000 }; //  24

    std::cout << pb(b1, std::dec) << ' ' << pb(b2, std::dec) << '\n';
    std::cout << pb(b1, std::hex) << ' ' << pb(b2, std::hex) << '\n';
    std::cout << pb(b1, std::oct) << ' ' << pb(b2, std::oct) << '\n';
    std::cout << '\n';

    // b *= 2 compilation error
    b1 <<= 1;
    std::cout << pb(b1, std::dec) << '\n';
    std::cout << pb(b1, std::hex) << '\n';
    std::cout << pb(b1, std::oct) << '\n';
    std::cout << '\n';
    b1 >>= 1;

    std::cout << tb(b1, " == "s, b2, std::hex, std::is_eq(  b1 <=> b2)) << '\n';
    std::cout << tb(b1, " != "s, b2, std::hex, std::is_neq( b1 <=> b2)) << '\n';
    std::cout << tb(b1, " <  "s, b2, std::hex, std::is_lt(  b1 <=> b2)) << '\n';
    std::cout << tb(b1, " <= "s, b2, std::hex, std::is_lteq(b1 <=> b2)) << '\n';
    std::cout << tb(b1, " >  "s, b2, std::hex, std::is_gt(  b1 <=> b2)) << '\n';
    std::cout << tb(b1, " >= "s, b2, std::hex, std::is_gteq(b1 <=> b2)) << '\n';
    std::cout << '\n';

    b2 = b1;
    std::cout << tb(b1, " == "s, b2, std::hex, std::is_eq(  b1 <=> b2)) << '\n';
    std::cout << tb(b1, " != "s, b2, std::hex, std::is_neq( b1 <=> b2)) << '\n';
    std::cout << tb(b1, " <  "s, b2, std::hex, std::is_lt(  b1 <=> b2)) << '\n';
    std::cout << tb(b1, " <= "s, b2, std::hex, std::is_lteq(b1 <=> b2)) << '\n';
    std::cout << tb(b1, " >  "s, b2, std::hex, std::is_gt(  b1 <=> b2)) << '\n';
    std::cout << tb(b1, " >= "s, b2, std::hex, std::is_gteq(b1 <=> b2)) << '\n';
    std::cout << '\n';
  }
  std::cout << std::endl; //  make sure cout is flushed.

  return 0;
}
