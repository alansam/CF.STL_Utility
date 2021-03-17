//
//  move_if_noexcept.hpp
//  CF.STL_Utility
//
//  Created by Alan Sampson on 3/16/21.
//

#pragma once
#ifndef move_if_noexcept_hpp
#define move_if_noexcept_hpp

#include "helper.hpp"

using namespace std::literals::string_literals;

//  MARK: - Definitions
auto U_move_if_noexcept(int argc, char const * argv[]) -> decltype(argc);

//  MARK: - U_move_if_noexcept
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  MARK: namespace umx
namespace umx {

struct Bad {
  Bad() {
    std::cout << __func__ << "()\n"s;
  }

  Bad(Bad &&) {  // may throw
    std::cout << __func__ << "("s << __func__ << " &&), "s;
    std::cout << "Throwing move constructor called\n"s;
  }

  Bad(Bad const &) {  // may throw as well
    std::cout << __func__ << "("s << __func__ << " const &), "s;
    std::cout << "Throwing copy constructor called\n"s;
  }
};
 
struct Good {
  Good() {
    std::cout << __func__ << "()\n"s;
  }

  Good(Good &&) noexcept { // will NOT throw
    std::cout << __func__ << "("s << __func__ << " &&), "s;
    std::cout << "Non-throwing move constructor called\n"s;
  }

  Good(Good const &) noexcept { // will NOT throw
    std::cout << __func__ << "("s << __func__ << " const &), "s;
    std::cout << "Non-throwing copy constructor called\n"s;
  }
};

}
 /* namespace umx */

#endif /* move_if_noexcept_hpp */
