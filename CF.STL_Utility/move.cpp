//
//  move.cpp
//  CF.STL_Utility
//
//  Created by Alan Sampson on 3/16/21.
//

#include "move.hpp"

using namespace std::literals::string_literals;

//  MARK: - U_move
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: U_move()
 */
auto U_move(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
  {
    std::string str = "Hello"s;
    std::vector<std::string> vstr;

    // uses the push_back(const T&) overload, which means
    // we'll incur the cost of copying str
    vstr.push_back(str);
    std::cout << "After copy, str is \""s << str << "\"\n"s;

    // uses the rvalue reference push_back(T&&) overload,
    // which means no strings will be copied; instead, the contents
    // of str will be moved into the vector.  This is less
    // expensive, but also means str might now be empty.
    vstr.push_back(std::move(str));
    std::cout << "After move, str is \""s << str << "\"\n"s;

    std::cout << "The contents of the vector are \""s << vstr[0]
                                         << "\", \""s << vstr[1] << "\"\n"s;
  }
  std::cout << std::endl; //  make sure cout is flushed.

  return 0;
}
