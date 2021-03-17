//
//  underlying_type.hpp
//  CF.STL_Utility
//
//  Created by Alan Sampson on 3/16/21.
//

#pragma once
#ifndef underlying_type_hpp
#define underlying_type_hpp

#include "helper.hpp"
using namespace std::literals::string_literals;

//  MARK: - Definitions
auto U_underlying_type(int argc, char const * argv[]) -> decltype(argc);

//  MARK: - U_underlying_type
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  MARK: namespace uut
namespace uut {

enum        e1 {};
enum class  e2 {};
enum class  e3 : unsigned {};
enum class  e4 : int {};

} /* namespace uut */

#endif /* underlying_type_hpp */
