//
//  swap_ranges.cpp
//  CF.STL_Utility
//
//  Created by Alan Sampson on 3/16/21.
//

#include "swap_ranges.hpp"

using namespace std::literals::string_literals;

//  MARK: - U_swap_ranges
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: U_swap_ranges()
 */
auto U_swap_ranges(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  auto print = [](auto comment, auto const& seq) {
    std::cout << comment;
    for (const auto& e : seq) { std::cout << e << ' '; }
    std::cout << '\n';
  };

  // ....+....|....+....|....+....|....+....|....+....|....+....|
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
  {
    std::vector<char> vsr = { 'a', 'b', 'c', 'd', 'e', };
    std::list<char>   lsr = { '1', '2', '3', '4', '5', };

    print("Before swap_ranges:\n"s "vsr: "s, vsr);
    print("lsr: "s, lsr);

    std::swap_ranges(vsr.begin(), vsr.begin() + 3, lsr.begin());

    print("After swap_ranges:\n"s "v:sr "s, vsr);
    print("lsr: "s, lsr);
  }
  std::cout << std::endl; //  make sure cout is flushed.

  return 0;
}
