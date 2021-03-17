//
//  initializer_list.cpp
//  CF.STL_Utility
//
//  Created by Alan Sampson on 3/16/21.
//

#include "initializer_list.hpp"

using namespace std::literals::string_literals;

//  MARK: - U_initializer_list
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: U_initializer_list()
 */
auto U_initializer_list(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter() << '\n';
  {
    uil::Sil<int> sil = { 1, 2, 3, 4, 5, }; // copy list-initialization
    sil.append({ 6, 7, 8, });      // list-initialization in function call

    std::cout << "The vector size is now "s << sil.c_arr().second << " ints:\n"s;

    for (auto n_elm : sil.vct_m) {
      std::cout << n_elm << ' ';
    }
    std::cout << '\n';

    std::cout << "Range-for over brace-init-list: \n"s;

    for (int x_val : { -1, -2, -3, }) { // the rule for auto makes this ranged-for work
      std::cout << x_val << ' ';
    }
    std::cout << '\n';

    auto al = { 10, 11, 12, };   // special rule for auto

    std::cout << "The list bound to auto has size() = "s << al.size() << '\n';

//    templated_fn({1, 2, 3});  // compiler error! "{1, 2, 3}" is not an expression,
                                // it has no type, and so T cannot be deduced
    uil::templated_fn<std::initializer_list<int>>({ 11, 12, 13, }); // OK
    uil::templated_fn<std::vector<int>>({ 21, 22, 23, });           // also OK  }
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  //  TODO: constructor
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
  std::cout << "constructor\n"s;
  {
    std::initializer_list<int> empty_list;
    std::cout << "empty_list.size(): "s << empty_list.size() << '\n';

    // create initializer lists using list-initialization
    std::initializer_list<int> digits { 1, 2, 3, 4, 5, };
    std::cout << "digits.size(): "s << digits.size() << '\n';
    std::for_each(digits.begin(), digits.end(), [](auto const n_) {
      std::cout << n_ << ' ';
    });
    std::cout << std::endl;

    // special rule for auto means 'fractions' has the
    // type std::initializer_list<double>
    auto fractions = { 3.14159, 2.71828, };
    std::cout << "fractions.size(): "s << fractions.size() << '\n';
    std::copy(fractions.begin(), fractions.end(),
              std::ostream_iterator<double>(std::cout, " "));
    std::cout << std::endl;
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  //  TODO: std::begin/std::end
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';

  std::cout << "std::begin/std::end\n"s;
  {
    std::initializer_list<int> il = { 3, 1, 4, 1, };
    for(auto it = std::begin(il); it != std::end(il); ++it) {
      std::cout << *it << '\n';
    }

    std::cout << '\n';

    // range-based for uses std::begin and std::end to iterate
    // over a given range; in this case, it's an initializer list
    for (int i_ : { 3, 1, 4, 1, }) {
      std::cout << i_ << '\n';
    }
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  //  TODO: std::rbegin/std::rend
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
  std::cout << "std::rbegin/std::rend\n"s;
  {
    auto il = { 3, 1, 4, };
    for (auto it = std::rbegin(il); it != std::rend(il); ++it) {
      std::cout << *it << ' ';
    }
    std::cout << '\n';
  }
  std::cout << std::endl; //  make sure cout is flushed.

  return 0;
}
