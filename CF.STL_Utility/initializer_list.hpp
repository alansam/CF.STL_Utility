//
//  initializer_list.hpp
//  CF.STL_Utility
//
//  Created by Alan Sampson on 3/16/21.
//

#pragma once
#ifndef initializer_list_hpp
#define initializer_list_hpp

#include "helper.hpp"

//  MARK: - Definitions
auto U_initializer_list(int argc, char const * argv[]) -> decltype(argc);

using namespace std::literals::string_literals;

//  MARK: - U_initializer_list
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  MARK: namespace uil
namespace uil {

template <class T>
struct Sil {
  std::vector<T> vct_m;
  Sil(std::initializer_list<T> lst) : vct_m(lst) {
    std::cout << "constructed with a "s << lst.size() << "-element list\n"s;
  }
  void append(std::initializer_list<T> lst) {
    vct_m.insert(vct_m.end(), lst.begin(), lst.end());
  }
  std::pair<const T *, std::size_t> c_arr() const {
    return {&vct_m[0], vct_m.size()};   // copy list-initialization in return statement
                                        // this is NOT a use of std::initializer_list
  }
};

template <typename T>
void templated_fn(T lst) {
  std::cout << "list size "s << lst.size() << '\n';
  for (auto n_ : lst) {
    std::cout << n_ << ' ';
  }
  std::cout << std::endl;
}

} /* namespace uil */

#endif /* initializer_list_hpp */
