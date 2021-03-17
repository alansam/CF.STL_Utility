//
//  piecewise_construct_t.cpp
//  CF.STL_Utility
//
//  Created by Alan Sampson on 3/16/21.
//

#include "piecewise_construct_t.hpp"

//  MARK: - U_piecewise_construct_t
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: U_piecewise_construct_t()
 *
 *  std::piecewise_construct_t : tag type used to select correct function overload for
 *  piecewise construction
 *  std::piecewise_construct : an object of type piecewise_construct_t used to disambiguate
 *  functions for piecewise construction
 *
 *  std::piecewise_construct_t is an empty class tag type used to disambiguate between
 *  different functions that take two tuple arguments.
 *
 *  The overloads that do not use std::piecewise_construct_t assume that each tuple argument
 *  becomes the element of a pair. The overloads that use std::piecewise_construct_t assume
 *  that each tuple argument is used to construct, piecewise, a new object of specified type,
 *  which will become the element of the pair.
 *
 *  The constant std::piecewise_construct is an instance of an empty struct tag
 *  type std::piecewise_construct_t.
 */
auto U_piecewise_construct_t(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
  {
    std::tuple<int, float> t_if(1, 3.14159F);
    std::pair<upt::Foo, upt::Foo> p1(t_if, t_if);
    std::pair<upt::Foo, upt::Foo> p2(std::piecewise_construct, t_if, t_if);

    auto [t1, t2] = p1;
    std::cout << std::get<0>(t1.tp_) << ' ' << std::get<1>(t1.tp_) << '\n';
    std::cout << std::get<0>(t2.tp_) << ' ' << std::get<1>(t2.tp_) << '\n';
    std::cout << t1.iv_ << ' ' << t1.fv_ << '\n';
    std::cout << t2.iv_ << ' ' << t2.fv_ << '\n' << '\n';

    auto [f1, f2] = p2;
    std::cout << f1.iv_ << ' ' << f1.fv_ << '\n';
    std::cout << f2.iv_ << ' ' << f2.fv_ << '\n';
    std::cout << std::get<0>(f1.tp_) << ' ' << std::get<1>(f1.tp_) << '\n';
    std::cout << std::get<0>(f2.tp_) << ' ' << std::get<1>(f2.tp_) << '\n' << '\n';
  }
  std::cout << std::endl; //  make sure cout is flushed.

  return 0;
}
