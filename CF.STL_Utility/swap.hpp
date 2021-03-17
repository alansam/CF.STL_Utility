//
//  swap.hpp
//  CF.STL_Utility
//
//  Created by Alan Sampson on 3/16/21.
//

#pragma once
#ifndef swap_hpp
#define swap_hpp

#include "helper.hpp"

//  MARK: - Definitions
auto U_swap(int argc, char const * argv[]) -> decltype(argc);

using namespace std::literals::string_literals;

//  MARK: - U_swap
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  MARK: namespace usw
namespace usw {

void foo(char const * str, int x_);

void bar(char const * str, int x_);

void fiz(std::string const & str, int x_);

void buz(std::string const & str, int x_);

//  MARK: Template array_like()
template <class Col>
void array_like(Col & alice, Col & bob) {
  auto print = [](int const & n_) { std::cout << ' ' << n_; };

  // Print state before swap
  std::cout << "alice:"s;
  std::for_each(alice.begin(), alice.end(), print);
  std::cout << '\n' << "bob  :"s;
  std::for_each(bob.begin(), bob.end(), print);
  std::cout << '\n';

  std::cout << "-- SWAP\n"s;
  std::swap(alice, bob);

  // Print state after swap
  std::cout << "alice:"s;
  std::for_each(alice.begin(), alice.end(), print);
  std::cout << '\n' << "bob  :"s;
  std::for_each(bob.begin(), bob.end(), print);
}

//  MARK: Template map_like()
template <class Col>
void map_like(Col & alice, Col & bob) {
  auto print = [](std::pair<const int, char>& n) {
    std::cout << " "s << n.first << '(' << n.second << ')';
  };

  // Print state before swap
  std::cout << "alice:"s;
  std::for_each(alice.begin(), alice.end(), print);
  std::cout << '\n' << "bob  :"s;
  std::for_each(bob.begin(), bob.end(), print);
  std::cout << '\n';

  std::cout << "-- SWAP\n"s;
  std::swap(alice, bob);

  // Print state after swap
  std::cout << "alice:"s;
  std::for_each(alice.begin(), alice.end(), print);
  std::cout << '\n' << "bob  :"s;
  std::for_each(bob.begin(), bob.end(), print);
}

} /* namespace usw */

//  MARK: namespace ust
namespace ust {

void foo();

void bar();

} /* namespace ust */

#endif /* swap_hpp */
