//
//  make_from_tuple.hpp
//  CF.STL_Utility
//
//  Created by Alan Sampson on 3/16/21.
//

#pragma once
#ifndef make_from_tuple_hpp
#define make_from_tuple_hpp

#include "helper.hpp"

using namespace std::literals::string_literals;

//  MARK: - Definitions
auto U_make_from_tuple(int argc, char const * argv[]) -> decltype(argc);

//  MARK: - U_make_from_tuple
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  MARK: namespace umft
namespace umft {

struct Foo {
  Foo(int first, float second, int third) {
    std::cout << first << ", "s << second << ", "s << third << "\n"s;
  }
};

} /* namespace umft */

#endif /* make_from_tuple_hpp */
