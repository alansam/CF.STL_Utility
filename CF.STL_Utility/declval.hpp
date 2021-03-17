//
//  declval.hpp
//  CF.STL_Utility
//
//  Created by Alan Sampson on 3/16/21.
//

#ifndef declval_hpp
#define declval_hpp

#include "helper.hpp"

//  MARK: - Definitions
auto U_declval(int argc, char const * argv[]) -> decltype(argc);

using namespace std::literals::string_literals;

//  MARK: - U_declval
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  MARK: namespace udv
namespace udv {

struct Default {
  int foo() const {
    return 1;
  }
};
 
struct NonDefault {
  NonDefault() = delete;
  int foo() const {
    return 1;
  }
};

} /* namespace udv */

#endif /* declval_hpp */
