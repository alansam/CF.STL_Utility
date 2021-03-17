//
//  in_range.hpp
//  CF.STL_Utility
//
//  Created by Alan Sampson on 3/16/21.
//

#pragma once
#ifndef in_range_hpp
#define in_range_hpp

#include "helper.hpp"

//using namespace std::literals::string_literals;

//  MARK: - Definitions
#if (__cplusplus > 201707L)
auto U_in_range(int argc, char const * argv[]) -> decltype(argc);
#endif

#endif /* in_range_hpp */
