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

  // ....+....|....+....|....+....|....+....|....+....|....+....|
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
  std::cout << "std::from_chars"s << std::endl;
  {
    std::array<char, 10> str{ "42 xyz " };
    int result;
    if (auto [pv, ec] = std::from_chars(str.data(), str.data()+str.size(), result);
        ec == std::errc()) {
      std::cout << result << "\n" "p -> \""s << pv << "\"\n"s;
    }

    std::string_view sv{ "24 abc " };
    if(auto [p, ec] = std::from_chars(sv.begin(), sv.end(), result); ec == std::errc()) {
      std::cout << result << "\n" "p -> \""s << p << "\"\n"s;
    }
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
  std::cout << "std::chars_format"s << std::endl;
  {
    [[maybe_unused]]
    auto fmt_g = std::chars_format::general;
    [[maybe_unused]]
    auto fmt_s = std::chars_format::scientific;
    [[maybe_unused]]
    auto fmt_f = std::chars_format::fixed;
    [[maybe_unused]]
    auto fmt_h = std::chars_format::hex;

#if (__cplusplus > 201707L)
    std::array<char, 10> tca;
    std::string_view sv { "42" };

    auto cfr = std::to_chars(tca.data(), tca.data() + tca.size(), fmt_f, 3.14195);
    auto cfr = std::from_chars(sv.cbegin(), sv.cend(), fmt_s, 3.14195);
#else
    std::cout << "not available yet."s << std::endl;
#endif  /* (__cplusplus > 201707L) */
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
  std::cout << "std::stoi etc."s << std::endl;
  {
    std::string str1 = "45";
    std::string str2 = "3.14159";
    std::string str3 = "31337 with words";
    std::string str4 = "words and 2";

    int myint1 = std::stoi(str1);
    int myint2 = std::stoi(str2);
    int myint3 = std::stoi(str3);
    // error: 'std::invalid_argument'
    // int myint4 = std::stoi(str4);

    std::cout << "std::stoi(\"" << str1 << "\") is " << myint1 << '\n';
    std::cout << "std::stoi(\"" << str2 << "\") is " << myint2 << '\n';
    std::cout << "std::stoi(\"" << str3 << "\") is " << myint3 << '\n';
    //std::cout << "std::stoi(\"" << str4 << "\") is " << myint4 << '\n';
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
  std::cout << "std::strtol etc."s << std::endl;
  {
    char const * parse_str = "10 200000000000000000000000000000 30 -40";
    std::cout << "Parsing "s << std::quoted(parse_str) << ":\n"s;

    for (;;) {
      // errno can be set to any non-zero value by a library function call
      // regardless of whether there was an error, so it needs to be cleared
      // in order to check the error set by strtol
      errno = 0;
      char * p_end;
      const long iv = std::strtol(parse_str, &p_end, 10);
      if (parse_str == p_end) {
        break;
      }

      bool const range_error = errno == ERANGE;
      std::string const extracted(parse_str, p_end - parse_str);
      parse_str = p_end;

      std::cout << "Extracted "s << std::quoted(extracted)
                << ", strtol returned "s << iv << '.';
      if (range_error) {
        std::cout << " Range error occurred."s;
      }

      std::cout << '\n';
    }
    std::cout << std::endl; //  make sure cout is flushed.

    // ....+....|....+....|....+....|....+....|....+....|....+....|
  //  std::cout << konst::dot << '\n';
    std::cout << konst::delimiter('.') << '\n';
    std::cout << "std::strtof etc."s << std::endl;
    {
      char const * parse_str = "111.11 -2.22 0X1.BC70A3D70A3D7P+6  1.18973e+4932zzz";
      char * end;
      std::cout << "Parsing \""s << parse_str << "\":\n"s;
      for (double fv = std::strtod(parse_str, &end); parse_str != end;
           fv = std::strtod(parse_str, &end)) {
        std::cout << "  '"s << std::string(parse_str, end-parse_str) << "' -> "s;
        parse_str = end;
        if (errno == ERANGE) {
          std::cout << "range error, got "s;
          errno = 0;
        }
        std::cout << fv << '\n';
      }

      if (std::setlocale(LC_NUMERIC, "de_DE.utf8")) {
        std::cout << "With de_DE.utf8 locale:\n"s;
        std::cout << "  '123.45' -> "s << std::strtod("123.45", 0) << '\n';
        std::cout << "  '123,45' -> "s << std::strtod("123,45", 0) << '\n';
      }
    }
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
  std::cout << "std::strtoul etc."s << std::endl;
  {
    char const * parse_this = "10 200000000000000000000000000000 30 -40";
    char * end;
    std::cout << "Parsing '"s << parse_this << "':\n"s;
    for (unsigned long iv = std::strtoul(parse_this, &end, 10);
      parse_this != end;
      iv = std::strtoul(parse_this, &end, 10))
    {
      std::cout << "'"s << std::string(parse_this, end-parse_this) << "' -> "s;
      parse_this = end;
      if (errno == ERANGE) {
        std::cout << "range error, got "s;
        errno = 0;
      }
      std::cout << iv << '\n';
    }
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
  std::cout << "std::strtoimax etc."s << std::endl;
  {
    std::string str = "helloworld"s;
    std::intmax_t val = std::strtoimax(str.c_str(), nullptr, 36);
    std::cout << str << " in base 36 is "s << val << " in base 10\n"s;

    char * nptr;
    val = std::strtoimax(str.c_str(), &nptr, 30);
    if(nptr != &str[0] + str.size()) {
      std::cout << str << " in base 30 is invalid."s
                << " The first invalid digit is '"s << *nptr << "'\n"s;
    }
  }
  std::cout << std::endl; //  make sure cout is flushed.

  return 0;
}
