//
//  operator_functions.hpp
//  CF.STL_Utility
//
//  Created by Alan Sampson on 3/16/21.
//

#pragma once
#ifndef operator_functions_hpp
#define operator_functions_hpp

#include "helper.hpp"

using namespace std::literals::string_literals;

//  MARK: - Definitions
auto U_operator_functions(int argc, char const * argv[]) -> decltype(argc);

//  MARK: - U_operator_functions
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  MARK: namespace uof0
namespace uof0 {

template <typename A, typename B, typename U = std::less<>>
bool f_bf(A av, B bv, U uo = U()) {
  return uo(av, bv);
}

template <typename A, typename B, typename U = std::plus<>>
A f_af(A av, B bv, U uo = U()) {
  return uo(av, bv);
}

template <typename A, typename U = std::negate<>>
A f_uf(A av, U uo = U()) {
  return uo(av);
}

} /* namespace uof0 */

#endif /* operator_functions_hpp */
