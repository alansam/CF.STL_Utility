//
//  variant.hpp
//  CF.STL_Utility
//
//  Created by Alan Sampson on 3/16/21.
//

#pragma once
#ifndef variant_hpp
#define variant_hpp

#include "helper.hpp"

using namespace std::literals::string_literals;

//  MARK: - Definitions
auto U_variant(int argc, char const * argv[]) -> decltype(argc);

//  MARK: - U_variant
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  MARK: namespace uvrnt
namespace uvrnt {

template <class Os> Os & operator<< (Os & os, const std::vector<int> & vnt) {
  os << "{ "s;
  for (int e_ : vnt) {
    std::cout << e_ << ' ';
  }

  return os << "}"s;
}

} /* namespace uvrnt */

//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  MARK: namespace uvrn1
namespace uvrn1 {

std::ostream & operator<<(std::ostream & os, std::variant<int, std::string> const & va);

} /* namespace uvrn1 */

//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  MARK: namespace uvrn2
namespace uvrn2 {

struct Demo {
  Demo(int dv = 0) : dv_(dv) { std::cout << __func__ << '(' << dv << ')' << '\n'; }
  Demo(Demo const & other) {
    std::cout << __func__ << '(' << __func__ << " const & other"s << ')' << '\n';
    throw std::domain_error("copy ctor"s);
  }

  Demo & operator= (Demo const &) = default;

private:
  int dv_;
};

} /* namespace uvrn2 */
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  MARK: namespace uvrn2
namespace uvrn3 {

// the variant to visit
using var_t = std::variant<int, long, double, std::string>;

// helper constant for the visitor #3
template<class> inline constexpr bool always_false_v = false;

// helper type for the visitor #4
template<class... Ts> struct overloaded : Ts... { using Ts::operator()...; };

// explicit deduction guide (not needed as of C++20)
template<class... Ts> overloaded(Ts...) -> overloaded<Ts...>;

} /* namespace uvrn2 */

//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  MARK: namespace uvrn4
namespace uvrn4 {

struct Simp {
  Simp(int iv) : ival_(iv) {}

  int ival_;
};

}  /* namespace uvrn4 */

//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  MARK: namespace uvrn5
namespace uvrn5 {

using Var = std::variant<int, int, int, std::string>;
 
template<unsigned I>
void print(Var const & var) {
  std::cout << "get<"s << var.index() << "> = "s
            << std::setw(4)
            << std::get<I>(var)
            << " # = "s
            << std::dec
            << std::right
            << std::setw(20)
            << std::hash<Var>{}(var)
            << " - "s
            << std::hex
            << std::setw(16)
            << std::hash<Var>{}(var)
            << std::dec
            << '\n';
}

}  /* namespace uvrn5 */

//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  MARK: namespace uvrn6
namespace uvrn6 {

struct Demon {
  Demon(int iv = 0) : iv_(iv) {
    std::cout << "default c'tor\n"s;
  }

  Demon(Demon const & other) {
    std::cout << "copy c'tor\n"s;
    throw std::domain_error("copy ctor"s);
  }

  Demon & operator= (Demon const & other) = default;

private:
  int iv_;
};

}  /* namespace uvrn6 */

#endif /* variant_hpp */
