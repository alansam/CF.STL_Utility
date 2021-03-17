//
//  searchers.cpp
//  CF.STL_Utility
//
//  Created by Alan Sampson on 3/16/21.
//

#include "searchers.hpp"

using namespace std::literals::string_literals;

//  MARK: - U_searchers
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: U_searchers()
 */
auto U_searchers(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
  std::cout << "std::default_searcher"s << std::endl;
  {
    std::string in = "Lorem ipsum dolor sit amet, consectetur adipiscing elit,"s
                     " sed do eiusmod tempor incididunt ut labore et dolore magna aliqua"s;
    std::string needle = "pisci"s;
    auto it = std::search(in.begin(), in.end(),
                          std::default_searcher(needle.begin(), needle.end()));
    if (it != in.end()) {
      std::cout << "The string "s << needle << " found at offset "s
                << it - in.begin() << '\n';
    }
    else {
      std::cout << "The string " << needle << " not found\n"s;
    }
  }
  std::cout << std::endl; //  make sure cout is flushed.

#if (__cplusplus > 201707L)
  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::boyer_moore_searcher"s << std::endl;
  {
    std::string in = "Lorem ipsum dolor sit amet, consectetur adipiscing elit,"s
                     " sed do eiusmod tempor incididunt ut labore et dolore magna aliqua"s;
    std::string needle = "pisci"s;
    auto it = std::search(in.begin(), in.end(),
                          std::boyer_moore_searcher(needle.begin(), needle.end()));
    if (it != in.end()) {
        std::cout << "The string " << needle << " found at offset "
                  << it - in.begin() << '\n';
    }
    else {
        std::cout << "The string " << needle << " not found\n";
    }
  }
  std::cout << std::endl; //  make sure cout is flushed.
#endif  /* (__cplusplus > 201707L) */

#if (__cplusplus > 201707L)
  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::boyer_moore_horspool_searcher"s << std::endl;
  {
    std::string in = "Lorem ipsum dolor sit amet, consectetur adipiscing elit,"s
                     " sed do eiusmod tempor incididunt ut labore et dolore magna aliqua"s;
    std::string needle = "pisci"s;
    auto it = std::search(in.begin(), in.end(),
                          std::boyer_moore_horspool_searcher(needle.begin(), needle.end()));
    if (it != in.end()) {
      std::cout << "The string " << needle << " found at offset "
                << it - in.begin() << '\n';
    }
    else {
      std::cout << "The string " << needle << " not found\n";
    }
  }
  std::cout << std::endl; //  make sure cout is flushed.
#endif  /* (__cplusplus > 201707L) */

  return 0;
}
