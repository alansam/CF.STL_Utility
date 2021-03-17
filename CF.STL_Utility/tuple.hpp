//
//  tuple.hpp
//  CF.STL_Utility
//
//  Created by Alan Sampson on 3/16/21.
//

#pragma once
#ifndef tuple_hpp
#define tuple_hpp

#include "helper.hpp"

using namespace std::literals::string_literals;

//  MARK: - Definitions
auto U_tuple(int argc, char const * argv[]) -> decltype(argc);

//  MARK: - U_tuple
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  MARK: namespace utu1
namespace utu1 {

std::tuple<double, char, std::string> get_student(int id);

// helper function to print a tuple of any size
template<class Tuple, std::size_t N>
struct TuplePrinter {
  static void print(const Tuple & tup) {
    TuplePrinter<Tuple, N-1>::print(tup);
    std::cout << ", "s << std::get<N - 1>(tup);
  }
};

template<class Tuple>
struct TuplePrinter<Tuple, 1>{
  static void print(const Tuple & tup) {
    std::cout << std::get<0>(tup);
  }
};
 
template<class... Args>
void print(const std::tuple<Args...> & tup) {
  std::cout << "("s;
  TuplePrinter<decltype(tup), sizeof...(Args)>::print(tup);
  std::cout << ")\n"s;
}

template<typename T>
std::string toString(std::vector<T> vec) {
  std::ostringstream oss;
  oss << "["s;
  std::for_each(vec.cbegin(), vec.cend(), [&oss](auto v_) {
    oss << v_ << ',';
  });
  oss.seekp(-1, std::ios_base::end);
  oss << "]"s;
  return oss.str();
}
// end helper function

} /* namespace utu */

//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  MARK: namespace utu2
namespace utu2 {

// helper function to print std::vector
template<class Os, class T> Os & operator<< (Os & os, std::vector<T> const& vt) {
  os << "{"s;
  for (std::size_t t_ = 0; t_ != vt.size(); ++t_) {
    os << vt[t_] << (t_+ 1 < vt.size() ? ","s : ""s);
  }
  return os << "}"s;
}

// helpers to print a tuple of any size
template<class Os, class Tuple, std::size_t N>
struct TuplePrinter {
  static void print(Os & os, const Tuple & tpl) {
    TuplePrinter<Os, Tuple, N - 1>::print(os, tpl);
    os << ", "s << std::get<N - 1>(tpl);
  }
};

template<class Os, class Tuple>
struct TuplePrinter<Os, Tuple, 1>{
  static void print(Os& os, const Tuple& tpl) {
    os << std::get<0>(tpl);
  }
};

template<class Os, class... Args>
Os & operator<< (Os & os, const std::tuple<Args...> & tpl) {
  os << "{ "s;
  TuplePrinter<Os, decltype(tpl), sizeof...(Args)>::print(os, tpl);
  return os << " }"s;
}

struct line{ int len { 60 }; };
template<class Os> Os& operator<< (Os& os, line l) {
  while (l.len-- > 0) {
    std::cout << "─"s;
  }
  return os << '\n';
}

} /* namespace utu2 */

//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  MARK: namespace utu3
namespace utu3 {

std::tuple<int, int> f_tupl();

} /* namespace utu3 */

//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  MARK: namespace utu4
namespace utu4 {

struct Szet {
  int n;
  std::string s;
  float d;
  bool operator<(const Szet & rhs) const {
    // compares n to rhs.n,
    // then s to rhs.s,
    // then d to rhs.d
    return std::tie(n, s, d) < std::tie(rhs.n, rhs.s, rhs.d);
  }
};

} /* namespace utu4 */

//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  MARK: namespace utu5
namespace utu5 {

// helper function to print a tuple of any size
template<class Tuple, std::size_t N>
struct TuplePrinter {
  static void print(const Tuple & tup) {
    TuplePrinter<Tuple, N - 1>::print(tup);
    std::cout << ", "s << std::get<N - 1>(tup);
  }
};

template<class Tuple>
struct TuplePrinter<Tuple, 1> {
  static void print(const Tuple & tup) {
    std::cout << std::get<0>(tup);
  }
};

template<typename... Args, std::enable_if_t<sizeof...(Args) == 0, int> = 0>
void print(const std::tuple<Args...> & tup) {
  std::cout << "()\n"s;
}

template<typename... Args, std::enable_if_t<sizeof...(Args) != 0, int> = 0>
void print(const std::tuple<Args...> & tup) {
    std::cout << "("s;
    TuplePrinter<decltype(tup), sizeof...(Args)>::print(tup);
    std::cout << ")\n"s;
}
// end helper function

} /* namespace utu5 */

//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  MARK: namespace utu6
namespace utu6 {

template <class T>
void test(T tup) {
  [[maybe_unused]]
  int a[std::tuple_size<T>::value]; // can be used at compile time

  std::cout << std::tuple_size<T>::value << '\n'; // or at run time
}

template <class... Args>
struct type_list {
  template <std::size_t N>
  using type = typename std::tuple_element<N, std::tuple<Args...>>::type;
};

} /* namespace utu6 */

#endif /* tuple_hpp */
