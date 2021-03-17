//
//  piecewise_construct_t.hpp
//  CF.STL_Utility
//
//  Created by Alan Sampson on 3/16/21.
//

#pragma once
#ifndef piecewise_construct_t_hpp
#define piecewise_construct_t_hpp

#include "helper.hpp"

using namespace std::literals::string_literals;

//  MARK: - Definitions
auto U_piecewise_construct_t(int argc, char const * argv[]) -> decltype(argc);

//  MARK: - U_piecewise_construct_t
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  MARK: namespace up1
namespace upt {

struct Foo {
  Foo(std::tuple<int, float> tp) : tp_(tp) {
    std::cout << "Constructed a Foo from a tuple\n"s;
    iv_ = std::get<0>(tp_);
    fv_ = std::get<1>(tp_);
  }

  Foo(int iv, float fv) : iv_(iv), fv_(fv) {
    std::cout << "Constructed a Foo from an int and a float\n"s;
    tp_ = std::make_tuple(iv_, fv_);
  }

  std::tuple<int, float> tp_;
  int   iv_;
  float fv_;
};

} /* namespace upt */

#endif /* piecewise_construct_t_hpp */
