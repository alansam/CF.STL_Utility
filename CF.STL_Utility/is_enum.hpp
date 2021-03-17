//
//  is_enum.hpp
//  CF.STL_Utility
//
//  Created by Alan Sampson on 3/16/21.
//

#pragma once
#ifndef is_enum_hpp
#define is_enum_hpp

#include "helper.hpp"

using namespace std::literals::string_literals;

//  MARK: - Definitions
auto U_is_enum(int argc, char const * argv[]) -> decltype(argc);

//  MARK: - U_is_enum
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  MARK: namespace uin
namespace uin {

class       Ac {};
 
enum        Ee {};
 
enum class  Ec : int {};

class cls {};

template <class T>
T f_isInt(T i_) {
  static_assert(std::is_integral<T>::value, "Integral required.");
  return i_;
}

} /* namespace uin */

#endif /* is_enum_hpp */
