//
//  pair.hpp
//  CF.STL_Utility
//
//  Created by Alan Sampson on 3/16/21.
//

#pragma once
#ifndef pair_hpp
#define pair_hpp

#include "helper.hpp"

using namespace std::literals::string_literals;

//  MARK: - Definitions
auto U_pair(int argc, char const * argv[]) -> decltype(argc);

//  MARK: - U_pair
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  MARK: namespace up1
namespace up1 {

template <class Os, class T>
Os & operator<<(Os & os, const std::vector<T> & v) {
  os << "{";
  for (std::size_t t = 0; t != v.size(); ++t) {
    os << v[t] << (t+1 < v.size() ? "," : "");
  }
  return os << "}";
}
 
template <class Os, class U1, class U2>
Os & operator<<(Os & os, const std::pair<U1, U2> & pair) {
  return os << ":{ " << pair.first << ", " << pair.second << " } ";
}

template<class T>
void tuple_sz(T t_) {
  [[maybe_unused]]
  int a_[std::tuple_size<T>::value]; // can be used at compile time
  std::cout << std::tuple_size<T>::value << '\n'; // or at run time
}

namespace detail {
 
template <std::size_t>
struct index_tag {
  explicit constexpr index_tag() = default;
};
 
template <class T, class U>
constexpr T get_val_dispatch(std::pair<T, U> const& pair, index_tag<0>) {
  return pair.first;
}
 
template <class T, class U>
constexpr U get_val_dispatch(std::pair<T, U> const& pair, index_tag<1>) {
  return pair.second;
}
 
} // namespace detail
 
template <std::size_t N, class T, class U>
auto constexpr get_val(std::pair<T, U> const& pair)
  -> typename std::tuple_element<N, std::pair<T, U>>::type {
  return detail::get_val_dispatch(pair, detail::index_tag<N>{});
}

} /* namespace up1 */

#endif /* pair_hpp */
