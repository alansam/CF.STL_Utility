//
//  apply.cpp
//  CF.STL_Utility
//
//  Created by Alan Sampson on 3/16/21.
//

#include "apply.hpp"

using namespace std::literals::string_literals;

//  MARK: - U_apply
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: U_apply()
 */
auto U_apply(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
  {
    using namespace uap;
    // OK
    std::cout << std::apply(add, std::pair(1, 2)) << '\n';

    std::cout << std::apply(add_generic<double>, std::pair(10.5, 4.3)) << '\n';

    // Error: can't deduce the function type
    // std::cout << std::apply(add_generic, std::make_pair(2.0f, 3.0f)) << '\n';
    std::cout << std::apply(add_generic<float>, std::make_pair(2.0f, 3.0f)) << '\n';

    // OK
    std::cout << std::apply(add_lambda, std::pair(2.0f, 3.0f)) << '\n';

    // advanced example
    std::tuple myTuple(25, "Hello", 9.31f, 'c');
    std::cout << myTuple << '\n';
  }
  std::cout << std::endl; //  make sure cout is flushed.

  return 0;
}

//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  MARK: namespace uap
namespace uap {

int add(int first, int second) {
  std::cout << __func__ << "(int "s << first << ", int "s << second << ") "s;
  return first + second;
}

} /* namespace uap */
