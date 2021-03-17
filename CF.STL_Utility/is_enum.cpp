//
//  is_enum.cpp
//  CF.STL_Utility
//
//  Created by Alan Sampson on 3/16/21.
//

#include "is_enum.hpp"

using namespace std::literals::string_literals;

//  MARK: - U_is_enum
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: U_is_enum()
 */
auto U_is_enum(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
  std::cout << "std::is_enum"s << std::endl;
  {
    std::cout << std::boolalpha;
    std::cout << std::is_enum<uin::Ac>::value << '\n';
    std::cout << std::is_enum<uin::Ee>::value << '\n';
    std::cout << std::is_enum<uin::Ec>::value << '\n';
    std::cout << std::is_enum<int>::value     << '\n';
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
  std::cout << "std::is_integral"s << std::endl;
  {
    std::cout << std::boolalpha;
    std::cout << std::is_integral<uin::Ac>::value << '\n';
    std::cout << std::is_integral_v<uin::Ec> << '\n';
    std::cout << std::is_integral_v<float> << '\n';
    std::cout << std::is_integral_v<int> << '\n';
    std::cout << std::is_integral_v<const int> << '\n';
    std::cout << std::is_integral_v<bool> << '\n';
    std::cout << uin::f_isInt(123) << '\n';
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
  std::cout << "std::is_arithmetic"s << std::endl;
  {
    std::cout << std::boolalpha
              << "Ac:          "s << std::is_arithmetic_v<uin::Ac>     << '\n' // false
              << "bool:        "s << std::is_arithmetic_v<bool>        << '\n' // true
              << "int:         "s << std::is_arithmetic_v<int>         << '\n' // true
              << "int const:   "s << std::is_arithmetic_v<int const>   << '\n' // true
              << "int &:       "s << std::is_arithmetic_v<int &>       << '\n' // false
              << "int *:       "s << std::is_arithmetic_v<int *>       << '\n' // false
              << "float:       "s << std::is_arithmetic_v<float>       << '\n' // true
              << "float const: "s << std::is_arithmetic_v<float const> << '\n' // true
              << "float &:     "s << std::is_arithmetic_v<float &>     << '\n' // false
              << "float *:     "s << std::is_arithmetic_v<float *>     << '\n' // false
              << "char:        "s << std::is_arithmetic_v<char>        << '\n' // true
              << "char const:  "s << std::is_arithmetic_v<char const>  << '\n' // true
              << "char &:      "s << std::is_arithmetic_v<char &>      << '\n' // false
              << "char *:      "s << std::is_arithmetic_v<char *>      << '\n' // false
              ;
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
  std::cout << "std::is_scalar"s << std::endl;
  {
    std::cout << (std::is_scalar<int>::value
                     ? "<int> is a scalar"s
                     : "<int> is not a scalar"s) << '\n';
    std::cout << (std::is_scalar<uin::cls>::value
                     ? "<uin::cls> is a scalar"s
                     : "<uin::cls> is not a scalar"s) << '\n';
  }
  std::cout << std::endl; //  make sure cout is flushed.

  //  TODO: there are more ...

  return 0;
}
