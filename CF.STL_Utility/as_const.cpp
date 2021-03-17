//
//  as_const.cpp
//  CF.STL_Utility
//
//  Created by Alan Sampson on 3/16/21.
//

#include "as_const.hpp"

using namespace std::literals::string_literals;

//  MARK: - U_as_const
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: U_as_const()
 */
auto U_as_const(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
  {
    std::string mutableString = "Hello World!"s;
    auto && constRef = std::as_const(mutableString);

//      mutableString.clear();  // OK
//      constRef.clear();       // error: 'constRef' is 'const' qualified,
//                              //         but 'clear' is not marked const

    assert( &constRef == &mutableString );
    assert( &std::as_const( mutableString ) == &mutableString );

    using ExprType = std::remove_reference_t<decltype(std::as_const(mutableString))>;

    static_assert(std::is_same_v<std::remove_const_t<ExprType>, std::string>,
                  "ExprType should be some kind of string." );
    static_assert(!std::is_same_v<ExprType, std::string>,
                  "ExprType shouldn't be a mutable string." );
  }
  std::cout << std::endl; //  make sure cout is flushed.

  return 0;
}
