//
//  reference_wrapper.hpp
//  CF.STL_Utility
//
//  Created by Alan Sampson on 3/16/21.
//

#pragma once
#ifndef reference_wrapper_hpp
#define reference_wrapper_hpp

#include "helper.hpp"

using namespace std::literals::string_literals;

//  MARK: - Definitions
auto U_reference_wrapper(int argc, char const * argv[]) -> decltype(argc);

//  MARK: - U_reference_wrapper
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
namespace urw0 {

void f1();

void f2(int nr);

void fn(int & n1, int & n2, const int & n3);

} /* namespace urw0 */

#endif /* reference_wrapper_hpp */
