//
//  integer_sequence.hpp
//  CF.STL_Utility
//
//  Created by Alan Sampson on 3/16/21.
//

#pragma once
#ifndef integer_sequence_hpp
#define integer_sequence_hpp

#include "helper.hpp"

using namespace std::literals::string_literals;

//  MARK: - Definitions
auto U_integer_sequence(int argc, char const * argv[]) -> decltype(argc);

//  MARK: - U_integer_sequence
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  MARK: namespace up1
namespace uis {

// debugging aid
template<typename T, T... ints>
void print_sequence(std::integer_sequence<T, ints...> int_seq) {
  std::cout << "The sequence of size " << int_seq.size() << ": ";
  ((std::cout << ints << ' '), ...);
  std::cout << '\n';
}

// Convert array into a tuple
template<typename Array, std::size_t... I>
auto a2t_impl(const Array & ar, std::index_sequence<I...>) {
  return std::make_tuple(ar[I]...);
}

template<typename T, std::size_t N, typename Indices = std::make_index_sequence<N>>
auto a2t(const std::array<T, N> & ar) {
  return a2t_impl(ar, Indices{});
}

// pretty-print a tuple
 
template<class Ch, class Tr, class Tuple, std::size_t... Is>
void print_tuple_impl(std::basic_ostream<Ch,Tr> & os,
                      const Tuple & tp,
                      std::index_sequence<Is...>) {
  ((os << (Is == 0 ? "" : ", ") << std::get<Is>(tp)), ...);
}

template<class Ch, class Tr, class... Args>
auto & operator<<(std::basic_ostream<Ch, Tr> & os,
                  const std::tuple<Args...> & tp) {
    os << "(";
    print_tuple_impl(os, tp, std::index_sequence_for<Args...> {});
    return os << ")";
}

} /* namespace uis */

#endif /* integer_sequence_hpp */
