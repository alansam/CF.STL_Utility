//
//  type_identity.hpp
//  CF.STL_Utility
//
//  Created by Alan Sampson on 3/16/21.
//

#pragma once
#ifndef type_identity_hpp
#define type_identity_hpp

#include "helper.hpp"

using namespace std::literals::string_literals;

//  MARK: - Definitions
auto U_type_identity(int argc, char const * argv[]) -> decltype(argc);

//  MARK: - U_type_identity
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  MARK: namespace utid
namespace utid {

template <class T>
T foo(T av, T bv) {
  return av + bv;
}

template <class T>
T bar(T av, std::type_identity_t<T> bv) {
  return av + bv;
}

template <class T>
T baz(T av, typename std::type_identity<T>::type bv) {
  return av + bv;
}

} /* namespace utid */

#endif /* type_identity_hpp */
