//
//  integer_sequence.cpp
//  CF.STL_Utility
//
//  Created by Alan Sampson on 3/16/21.
//

#include "integer_sequence.hpp"

using namespace std::literals::string_literals;

//  MARK: - U_integer_sequence
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: U_integer_sequence()
 */
auto U_integer_sequence(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
  {
    using namespace uis;

    print_sequence(std::integer_sequence<unsigned, 9, 2, 5, 1, 9, 1, 6>{});
    print_sequence(std::make_integer_sequence<int, 20>{});
    print_sequence(std::make_index_sequence<10>{});
    print_sequence(std::index_sequence_for<float, std::iostream, char>{});

    std::array<int, 4> array = { 1, 2, 3, 4, };

    // convert an array into a tuple
    auto tuple = a2t(array);
    static_assert(std::is_same<decltype(tuple),
                               std::tuple<int, int, int, int>>::value, "");

    // print it to cout
    std::cout << tuple << '\n';
  }
  std::cout << std::endl; //  make sure cout is flushed.

  return 0;
}
