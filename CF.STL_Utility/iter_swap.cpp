//
//  iter_swap.cpp
//  CF.STL_Utility
//
//  Created by Alan Sampson on 3/16/21.
//

#include "iter_swap.hpp"
#include "helper.hpp"

using namespace std::literals::string_literals;

//  MARK: - U_iter_swap
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: U_iter_swap()
 */
auto U_iter_swap(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
  {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist(-9, +9);
    std::vector<int> viz;
    std::generate_n(back_inserter(viz), 20, bind(dist, gen));

    auto cc(0UL);
    auto constexpr cc_max(20UL);

    auto show = [&cc](auto el) {
      std::cout << std::setw(3) << el << (++cc % cc_max == 0 ? "\n"s : ""s);
    };

    std::cout << "Before sort:\n"s << std::showpos;
    cc = 0UL;
    std::for_each(viz.cbegin(), viz.cend(), show);
    std::cout << '\n';

    uis::selection_sort(viz.begin(), viz.end());

    std::cout << "\nAfter sort :\n"s;
    std::for_each(viz.cbegin(), viz.cend(), show);
    std::cout << std::noshowpos << '\n';
  }
  std::cout << std::endl; //  make sure cout is flushed.

  return 0;
}
