//
//  exchange.hpp
//  CF.STL_Utility
//
//  Created by Alan Sampson on 3/16/21.
//

#pragma once
#ifndef exchange_hpp
#define exchange_hpp

#include "helper.hpp"

//  MARK: - Definitions
auto U_exchange(int argc, char const * argv[]) -> decltype(argc);

using namespace std::literals::string_literals;

//  MARK: - U_exchange
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//
//  MARK: namespace uxc
namespace uxc {

class stream {
public:
  using flags_type = int;

public:
  flags_type flags() const {
    return flags_;
  }

  // Replaces flags_ by newf, and returns the old value.
  flags_type flags(flags_type newf) {
    return std::exchange(flags_, newf);
  }

private:
  flags_type flags_ = 0;
};
 
void f_exch();

} /* namespace uxc */

#endif /* exchange_hpp */
