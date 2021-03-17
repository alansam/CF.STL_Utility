//
//  type_identity.cpp
//  CF.STL_Utility
//
//  Created by Alan Sampson on 3/16/21.
//

#include "type_identity.hpp"

//  MARK: - U_type_identity
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: U_type_identity()
 */
auto U_type_identity(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
  std::cout << "std::type_identity"s << std::endl;
  {
    using namespace utid;

//    foo(4.2, 1); // error, deduced conflicting types for 'T'
    std::cout << bar(4.2, 1) << '\n';  // OK, calls bar<double>

    std::cout << baz(42, 28) << '\n';
  }
  std::cout << std::endl; //  make sure cout is flushed.

  return 0;
}
