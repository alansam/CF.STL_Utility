//
//  forward.cpp
//  CF.STL_Utility
//
//  Created by Alan Sampson on 3/16/21.
//

#include "forward.hpp"

using namespace std::literals::string_literals;

//  MARK: - U_forward
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: U_forward()
 */
auto U_forward(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
  {
    std::cout << "Afwd\n";
    auto p1 = ufw::make_unique1<ufw::Afwd>(2); // rvalue
    int i_val = 1;
    auto p2 = ufw::make_unique1<ufw::Afwd>(i_val); // lvalue

    std::cout << "Bfwd\n";
    auto t = ufw::make_unique2<ufw::Bfwd>(2, i_val, 3);
  }
  std::cout << std::endl; //  make sure cout is flushed.

  return 0;
}
