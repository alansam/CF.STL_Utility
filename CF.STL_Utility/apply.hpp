//
//  apply.hpp
//  CF.STL_Utility
//
//  Created by Alan Sampson on 3/16/21.
//

#pragma once
#ifndef apply_hpp
#define apply_hpp

#include "helper.hpp"

using namespace std::literals::string_literals;

//  MARK: - Definitions
auto U_apply(int argc, char const * argv[]) -> decltype(argc);

//  MARK: - U_apply
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  MARK: namespace uap
namespace uap {

int add(int first, int second);

template<typename T>
T add_generic(T first, T second) {
  std::cout << __func__ << "<"s  << typeid(T).name()
                        << ">("s << typeid(T).name() << " "s << first
                        << ", "s << typeid(T).name() << " "s << second
                        << ") "s;
  return first + second;
}
 
auto add_lambda = [](auto first, auto second) {
  std::cout << __func__ << "(auto "s << first << ", auto "s << second << ") "s;
  return first + second;
};

template<typename... Ts>
std::ostream& operator<<(std::ostream & os, std::tuple<Ts...> const & theTuple) {
  std::apply (
    [&os](Ts const &... tupleArgs) {
      os << '[';
      std::size_t nv { 0, };
      ((os << tupleArgs << (++nv != sizeof...(Ts) ? ", "s : ""s)), ...);
      os << ']';
    }, theTuple
  );
  return os;
}

} /* namespace uap */

#endif /* apply_hpp */
