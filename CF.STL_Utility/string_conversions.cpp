//
//  string_conversions.cpp
//  CF.STL_Utility
//
//  Created by Alan Sampson on 3/16/21.
//

#include "string_conversions.hpp"

using namespace std::literals::string_literals;

//  MARK: - U_string_conversions
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: U_string_conversions()
 */
auto U_string_conversions(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
  std::cout << "std::to_chars"s << std::endl;
  {
    std::array<char, 10> str;

    if (auto [ptr, ec] = std::to_chars(str.data(), str.data() + str.size(), 42);
        ec == std::errc()) {
#if (__cplusplus > 201707L)
      // C++20, uses string_view(first, last)
      std::cout << std::string_view(str.data(), ptr) << '\n';
#else
      // C++17, uses string_view(ptr, length)
      std::cout << std::string_view(str.data(), ptr - str.data()) << '\n';
#endif  /* (__cplusplus > 201707L) */
    }

    if (auto [ptr, ec] = std::to_chars(str.data(), str.data() + str.size(), 42, 16);
        ec == std::errc()) {
#if (__cplusplus > 201707L)
      // C++20, uses string_view(first, last)
      std::cout << std::string_view(str.data(), ptr) << '\n';
#else
      // C++17, uses string_view(ptr, length)
      std::cout << std::string_view(str.data(), ptr - str.data()) << '\n';
#endif  /* (__cplusplus > 201707L) */
    }

    if (auto [ptr, ec] = std::to_chars(str.data(), str.data() + str.size(), 42, 8);
        ec == std::errc()) {
#if (__cplusplus > 201707L)
      // C++20, uses string_view(first, last)
      std::cout << std::string_view(str.data(), ptr) << '\n';
#else
      // C++17, uses string_view(ptr, length)
      std::cout << std::string_view(str.data(), ptr - str.data()) << '\n';
#endif  /* (__cplusplus > 201707L) */
    }
  }
  std::cout << std::endl; //  make sure cout is flushed.

  return 0;
}
