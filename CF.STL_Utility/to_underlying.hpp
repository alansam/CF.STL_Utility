//
//  to_underlying.hpp
//  CF.STL_Utility
//
//  Created by Alan Sampson on 3/16/21.
//

#pragma once
#ifndef to_underlying_hpp
#define to_underlying_hpp

#include "helper.hpp"

//using namespace std::literals::string_literals;

//  MARK: - Definitions
#if (__cplusplus > 201707L)
auto U_to_underlying(int argc, char const * argv[]) -> decltype(argc);  // C++23
#endif

#if (__cplusplus > 201707L)
//  MARK: - U_to_underlying
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  MARK: namespace uul
namespace uul {

#if defined(__cpp_lib_to_underlying)
  using std::to_underlying;
#else
  template <class Enum>
  constexpr std::underlying_type_t<Enum>
  to_underlying(Enum e) noexcept {
    return static_cast<std::underlying_type_t<Enum>>(e);
  }
#endif  /* defined(__cpp_lib_to_underlying) */

} /* namespace uul */
#endif  /* (__cplusplus > 201707L) */

#endif /* to_underlying_hpp */
