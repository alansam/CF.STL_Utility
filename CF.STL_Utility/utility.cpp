//
//  main.cpp
//  CF.STL_Utility
//
//  Created by Alan Sampson on 3/8/21.
//
//  MARK: - Reference.
//  @see: https://en.cppreference.com/w/cpp/utility
//

#include <iostream>
#include <iomanip>
#include <string>
#include <string_view>
#include <sstream>
#include <vector>
#include <array>
#include <deque>
#include <forward_list>
#include <list>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <stack>
#include <utility>
#include <algorithm>
#include <numeric>
#include <thread>
#include <chrono>
#include <tuple>
#include <optional>
#include <variant>
#include <initializer_list>
#include <iterator>
#include <functional>
#include <compare>
#include <memory>
#include <charconv>
#include <random>
#include <complex>
#include <type_traits>
#include <typeinfo>
#include <typeindex>
#include <any>
#include <stdexcept>
#include <cctype>

#if (__cplusplus > 201707L)

//  TODO: add samples when C++ version catches up
#include <source_location>
#include <coroutine>
#include <concepts>

#endif

using namespace std::literals::string_literals;

//  MARK: - Definitions
auto U_initializer_list(int argc, char const * argv[]) -> decltype(argc);
auto U_swap(int argc, char const * argv[]) -> decltype(argc);
auto U_iter_swap(int argc, char const * argv[]) -> decltype(argc);
auto U_swap_ranges(int argc, char const * argv[]) -> decltype(argc);
auto U_exchange(int argc, char const * argv[]) -> decltype(argc);
auto U_forward(int argc, char const * argv[]) -> decltype(argc);
auto U_move(int argc, char const * argv[]) -> decltype(argc);
auto U_move_if_noexcept(int argc, char const * argv[]) -> decltype(argc);
auto U_as_const(int argc, char const * argv[]) -> decltype(argc);
auto U_declval(int argc, char const * argv[]) -> decltype(argc);
#if (__cplusplus > 201707L)
auto U_to_underlying(int argc, char const * argv[]) -> decltype(argc);  // C++23
#endif
auto U_underlying_type(int argc, char const * argv[]) -> decltype(argc);
auto U_is_enum(int argc, char const * argv[]) -> decltype(argc);
#if (__cplusplus > 201707L)
auto U_in_range(int argc, char const * argv[]) -> decltype(argc);
#endif
auto U_pair(int argc, char const * argv[]) -> decltype(argc);
auto U_piecewise_construct_t(int argc, char const * argv[]) -> decltype(argc);
auto U_integer_sequence(int argc, char const * argv[]) -> decltype(argc);
auto U_apply(int argc, char const * argv[]) -> decltype(argc);
auto U_tuple(int argc, char const * argv[]) -> decltype(argc);
auto U_make_from_tuple(int argc, char const * argv[]) -> decltype(argc);
auto U_optional(int argc, char const * argv[]) -> decltype(argc);
auto U_variant(int argc, char const * argv[]) -> decltype(argc);
auto U_any(int argc, char const * argv[]) -> decltype(argc);
auto U_function(int argc, char const * argv[]) -> decltype(argc);
auto U_type_identity(int argc, char const * argv[]) -> decltype(argc);
auto U_bind(int argc, char const * argv[]) -> decltype(argc);
auto U_searchers(int argc, char const * argv[]) -> decltype(argc);
auto U_reference_wrapper(int argc, char const * argv[]) -> decltype(argc);
auto U_operator_functions(int argc, char const * argv[]) -> decltype(argc);
auto U_string_conversions(int argc, char const * argv[]) -> decltype(argc);
auto U_byte(int argc, char const * argv[]) -> decltype(argc);

//  MARK: - Local Constants.
namespace konst {

static
auto const dlm = std::string(80, '-');

static
auto const dot = std::string(80, '.');

} /* namespace konst */

//  MARK: - Implementation.
/*
 *  MARK: main()
 */
int main(int argc, const char * argv[]) {
  std::cout << "CF.STL_Utility"s << std::endl;
  std::cout << "C++ Version: "s << __cplusplus << std::endl;

  std::cout << '\n' << konst::dlm << std::endl;
  U_initializer_list(argc, argv);

  std::cout << '\n' << konst::dlm << std::endl;
  U_swap(argc, argv);

  std::cout << '\n' << konst::dlm << std::endl;
  U_iter_swap(argc, argv);

  std::cout << '\n' << konst::dlm << std::endl;
  U_swap_ranges(argc, argv);

  std::cout << '\n' << konst::dlm << std::endl;
  U_exchange(argc, argv);

  std::cout << '\n' << konst::dlm << std::endl;
  U_forward(argc, argv);

  std::cout << '\n' << konst::dlm << std::endl;
  U_move(argc, argv);

  std::cout << '\n' << konst::dlm << std::endl;
  U_move_if_noexcept(argc, argv);

  std::cout << '\n' << konst::dlm << std::endl;
  U_as_const(argc, argv);

  std::cout << '\n' << konst::dlm << std::endl;
  U_declval(argc, argv);

#if (__cplusplus > 201707L)
  std::cout << '\n' << konst::dlm << std::endl; //  C++23
  U_to_underlying(argc, argv);
#endif

  std::cout << '\n' << konst::dlm << std::endl;
  U_underlying_type(argc, argv);

  std::cout << '\n' << konst::dlm << std::endl;
  U_is_enum(argc, argv);

#if (__cplusplus > 201707L)
  std::cout << '\n' << konst::dlm << std::endl;
  U_in_range(argc, argv);
#endif

  std::cout << '\n' << konst::dlm << std::endl;
  U_pair(argc, argv);

  std::cout << '\n' << konst::dlm << std::endl;
  U_piecewise_construct_t(argc, argv);

  std::cout << '\n' << konst::dlm << std::endl;
  U_integer_sequence(argc, argv);

  std::cout << '\n' << konst::dlm << std::endl;
  U_apply(argc, argv);

  std::cout << '\n' << konst::dlm << std::endl;
  U_tuple(argc, argv);

  std::cout << '\n' << konst::dlm << std::endl;
  U_make_from_tuple(argc, argv);

  std::cout << '\n' << konst::dlm << std::endl;
  U_optional(argc, argv);

  std::cout << '\n' << konst::dlm << std::endl;
  U_variant(argc, argv);

  std::cout << '\n' << konst::dlm << std::endl;
  U_any(argc, argv);

  std::cout << '\n' << konst::dlm << std::endl;
  U_function(argc, argv);

  std::cout << '\n' << konst::dlm << std::endl;
  U_type_identity(argc, argv);

  std::cout << '\n' << konst::dlm << std::endl;
  U_bind(argc, argv);

  std::cout << '\n' << konst::dlm << std::endl;
  U_searchers(argc, argv);

  std::cout << '\n' << konst::dlm << std::endl;
  U_reference_wrapper(argc, argv);

  std::cout << '\n' << konst::dlm << std::endl;
  U_operator_functions(argc, argv);

  std::cout << '\n' << konst::dlm << std::endl;
  U_string_conversions(argc, argv);

  std::cout << '\n' << konst::dlm << std::endl;
  U_byte(argc, argv);

  return 0;
}

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
        return {&vct_m[0], vct_m.size()};  // copy list-initialization in return statement
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

//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: U_initializer_list()
 */
auto U_initializer_list(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  {
    uil::Sil<int> sil = { 1, 2, 3, 4, 5, }; // copy list-initialization
    sil.append({ 6, 7, 8, });      // list-initialization in function call

    std::cout << "The vector size is now "s << sil.c_arr().second << " ints:\n"s;

    for (auto n_elm : sil.vct_m) {
      std::cout << n_elm << ' ';
    }
    std::cout << '\n';

    std::cout << "Range-for over brace-init-list: \n"s;

    for (int x_val : { -1, -2, -3, }) { // the rule for auto makes this ranged-for work
      std::cout << x_val << ' ';
    }
    std::cout << '\n';

    auto al = { 10, 11, 12, };   // special rule for auto

    std::cout << "The list bound to auto has size() = "s << al.size() << '\n';

//    templated_fn({1, 2, 3});  // compiler error! "{1, 2, 3}" is not an expression,
                                // it has no type, and so T cannot be deduced
    uil::templated_fn<std::initializer_list<int>>({ 11, 12, 13, }); // OK
    uil::templated_fn<std::vector<int>>({ 21, 22, 23, });           // also OK  }
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  //  TODO: constructor
  std::cout << konst::dot << '\n';
  std::cout << "constructor\n"s;
  {
    std::initializer_list<int> empty_list;
    std::cout << "empty_list.size(): "s << empty_list.size() << '\n';

    // create initializer lists using list-initialization
    std::initializer_list<int> digits { 1, 2, 3, 4, 5, };
    std::cout << "digits.size(): "s << digits.size() << '\n';
    std::for_each(digits.begin(), digits.end(), [](auto const n_) {
      std::cout << n_ << ' ';
    });
    std::cout << std::endl;

    // special rule for auto means 'fractions' has the
    // type std::initializer_list<double>
    auto fractions = { 3.14159, 2.71828, };
    std::cout << "fractions.size(): "s << fractions.size() << '\n';
    std::copy(fractions.begin(), fractions.end(),
              std::ostream_iterator<double>(std::cout, " "));
    std::cout << std::endl;
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  //  TODO: std::begin/std::end
  std::cout << konst::dot << '\n';
  std::cout << "std::begin/std::end\n"s;
  {
    std::initializer_list<int> il = { 3, 1, 4, 1, };
    for(auto it = std::begin(il); it != std::end(il); ++it) {
      std::cout << *it << '\n';
    }

    std::cout << '\n';

    // range-based for uses std::begin and std::end to iterate
    // over a given range; in this case, it's an initializer list
    for (int i_ : { 3, 1, 4, 1, }) {
      std::cout << i_ << '\n';
    }
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  //  TODO: std::rbegin/std::rend
  std::cout << konst::dot << '\n';
  std::cout << "std::rbegin/std::rend\n"s;
  {
    auto il = { 3, 1, 4, };
    for (auto it = std::rbegin(il); it != std::rend(il); ++it) {
      std::cout << *it << ' ';
    }
    std::cout << '\n';
  }
  std::cout << std::endl; //  make sure cout is flushed.

  return 0;
}

//  MARK: - U_swap
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  MARK: namespace usw
namespace usw {

void foo(char const * str, int x_) {
  std::cout << "foo(\""s << str << "\", "s << x_ << ")\n"s;
}

void bar(char const * str, int x_) {
  std::cout << "bar(\""s << str << "\", "s << x_ << ")\n"s;
}

void fiz(std::string const & str, int x_) {
  std::cout << "fiz(\""s << str << "\", "s << x_ << ")\n"s;
}

void buz(std::string const & str, int x_) {
  std::cout << "buz(\""s << str << "\", "s << x_ << ")\n"s;
}

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

void foo() {
  std::this_thread::sleep_for(std::chrono::seconds(1));
}

void bar() {
  std::this_thread::sleep_for(std::chrono::seconds(1));
}

} /* namespace ust */

//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: U_swap()
 */
auto U_swap(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  {
    int aval = 5, bval = 3;

    // before
    std::cout << aval << ' ' << bval << '\n';

    std::swap(aval,bval);

    // after
    std::cout << aval << ' ' << bval << '\n';
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  //  TODO: std::swap(std::function) specialization
  std::cout << konst::dot << '\n';
  std::cout << "std::swap(std::function) specialization"s << std::endl;
  {
    std::function<void(char const *, int)> f1{ usw::foo };
    std::function<void(char const *, int)> f2{ usw::bar };

    f1("f1",  1);
    f2("f2",  2);

    std::cout << "std::swap(f1, f2);\n"s;
    std::swap(f1, f2);

    f1("f1",  1);
    f2("f2",  2);

    std::cout << '\n';

    std::function<void(std::string const &, int)> f3{ usw::fiz };
    std::function<void(std::string const &, int)> f4{ usw::buz };

    f3("f3"s, 3);
    f4("f4"s, 4);

    std::cout << "std::swap(f3, f4);\n"s;
    std::swap(f3, f4);

    f3("f3"s, 3);
    f4("f4"s, 4);
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  //  TODO: std::swap(std::array) specialization
  std::cout << konst::dot << '\n';
  std::cout << "std::swap(std::array) specialization"s << std::endl;
  {
    std::array<int, 3> alice { 1, 2, 3, };
    std::array<int, 3> bob   { 7, 8, 9, };

    usw::array_like<std::array<int, 3>>(alice, bob);
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  //  TODO: std::swap(std::deque) specialization
  std::cout << konst::dot << '\n';
  std::cout << "std::swap(std::deque) specialization"s << std::endl;
  {
    std::deque<int> alice { 1, 2, 3, };
    std::deque<int> bob   { 7, 8, 9, 10, };

    usw::array_like<std::deque<int>>(alice, bob);
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  //  TODO: std::swap(std::forward_list) specialization
  std::cout << konst::dot << '\n';
  std::cout << "std::swap(std::forward_list) specialization"s << std::endl;
  {
    std::forward_list<int> alice { 1, 2, 3, };
    std::forward_list<int> bob   { 7, 8, 9, 10, };

    usw::array_like<std::forward_list<int>>(alice, bob);
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  //  TODO: std::swap(std::list) specialization
  std::cout << konst::dot << '\n';
  std::cout << "std::swap(std::list) specialization"s << std::endl;
  {
    std::list<int> alice { 1, 2, 3, };
    std::list<int> bob   { 7, 8, 9, 10, };

    usw::array_like<std::list<int>>(alice, bob);
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  //  TODO: std::swap(std::map) specialization
  std::cout << konst::dot << '\n';
  std::cout << "std::swap(std::map) specialization"s << std::endl;
  {
    std::map<int, char> alice{ { 1, 'a', }, { 2, 'b', }, { 3, 'c', }, };
    std::map<int, char> bob{ { 7, 'Z', }, { 8, 'Y', }, { 9, 'X', }, { 10, 'W', } };

    usw::map_like<std::map<int, char>>(alice, bob);
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  //  TODO: std::swap(std::multimap) specialization
  std::cout << konst::dot << '\n';
  std::cout << "std::swap(std::multimap) specialization"s << std::endl;
  {
    std::multimap<int, char> alice{ { 1, 'a', }, { 2, 'b', }, { 3, 'c', }, };
    std::multimap<int, char> bob{ { 7, 'Z', }, { 8, 'Y', }, { 9, 'X', }, { 10, 'W', }, };

    usw::map_like<std::multimap<int, char>>(alice, bob);
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  //  TODO: std::swap(std::set) specialization
  std::cout << konst::dot << '\n';
  std::cout << "std::swap(std::set) specialization"s << std::endl;
  {
    std::set<int> alice { 1, 2, 3, };
    std::set<int> bob   { 7, 8, 9, 10, };

    usw::array_like<std::set<int>>(alice, bob);
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  //  TODO: std::swap(std::multiset) specialization
  std::cout << konst::dot << '\n';
  std::cout << "std::swap(std::multiset) specialization"s << std::endl;
  {
    std::multiset<int> alice { 1, 2, 3, };
    std::multiset<int> bob   { 7, 8, 9, 10, };

    usw::array_like<std::multiset<int>>(alice, bob);
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  //  TODO: std::swap(std::unordered_map) specialization
  std::cout << konst::dot << '\n';
  std::cout << "std::swap(std::unordered_map) specialization"s << std::endl;
  {
    std::unordered_map<int, char> alice{ { 1, 'a', }, { 2, 'b', }, { 3, 'c', }, };
    std::unordered_map<int, char> bob{ { 7, 'Z', }, { 8, 'Y', }, { 9, 'X', }, { 10, 'W', } };

    usw::map_like<std::unordered_map<int, char>>(alice, bob);
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  //  TODO: std::swap(std::unordered_multimap) specialization
  std::cout << konst::dot << '\n';
  std::cout << "std::swap(std::unordered_multimap) specialization"s << std::endl;
  {
    std::unordered_multimap<int, char> alice{ { 1, 'a', }, { 2, 'b', }, { 3, 'c', }, };
    std::unordered_multimap<int, char> bob{ { 7, 'Z', }, { 8, 'Y', }, { 9, 'X', }, { 10, 'W', } };

    usw::map_like<std::unordered_multimap<int, char>>(alice, bob);
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  //  TODO: std::swap(std::unordered_set) specialization
  std::cout << konst::dot << '\n';
  std::cout << "std::swap(std::unordered_set) specialization"s << std::endl;
  {
    std::unordered_set<int> alice { 1, 2, 3, };
    std::unordered_set<int> bob   { 7, 8, 9, 10, };

    usw::array_like<std::unordered_set<int>>(alice, bob);
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  //  TODO: std::swap(std::unordered_multiset) specialization
  std::cout << konst::dot << '\n';
  std::cout << "std::swap(std::unordered_multiset) specialization"s << std::endl;
  {
    std::unordered_multiset<int> alice { 1, 2, 3, };
    std::unordered_multiset<int> bob   { 7, 8, 9, 10, };

    usw::array_like<std::unordered_multiset<int>>(alice, bob);
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  //  TODO: std::swap(std::queue) specialization
  std::cout << konst::dot << '\n';
  std::cout << "std::swap(std::queue) specialization"s << std::endl;
  {
    std::queue<int> alice;
    std::queue<int> bob;
    
    auto print = [](auto const & title, auto const & cont) {
      std::cout << title << " size="s << cont.size();
      std::cout << " front="s << cont.front();
      std::cout << " back="s << cont.back() << '\n';
    };

    for (int i_ = 1; i_ < 4; ++i_) {
      alice.push(i_);
    }
    for (int i_ = 7; i_ < 11; ++i_) {
      bob.push(i_);
    }

    // Print state before swap
    print("alice:"s, alice);
    print("bob  :"s, bob);

    std::cout << "-- SWAP\n"s;
    std::swap(alice, bob);

    // Print state after swap
    print("alice:"s, alice);
    print("bob  :"s, bob);
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  //  TODO: std::swap(std::priority_queue) specialization
  std::cout << konst::dot << '\n';
  std::cout << "std::swap(std::priority_queue) specialization"s << std::endl;
  {
    std::priority_queue<int> alice;
    std::priority_queue<int> bob;

    auto print = [](const auto & title, const auto &cont) {
      std::cout << title << " size="s << cont.size();
      std::cout << " top="s << cont.top() << '\n';
    };

    for (int i_ = 1; i_ < 4; ++i_) {
      alice.push(i_);
    }
    for (int i_ = 7; i_ < 11; ++i_) {
      bob.push(i_);
    }

    // Print state before swap
    print("alice:"s, alice);
    print("bob  :"s, bob);

    std::cout << "-- SWAP\n"s;
    std::swap(alice, bob);

    // Print state after swap
    print("alice:"s, alice);
    print("bob  :"s, bob);
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  //  TODO: std::swap(std::stack) specialization
  std::cout << konst::dot << '\n';
  std::cout << "std::swap(std::stack) specialization"s << std::endl;
  {
    std::stack<int> alice;
    std::stack<int> bob;

    auto print = [](const auto & title, const auto &cont) {
      std::cout << title << " size="s << cont.size();
      std::cout << " top="s << cont.top() << '\n';
    };

    for (int i_ = 1; i_ < 4; ++i_) {
      alice.push(i_);
    }
    for (int i_ = 7; i_ < 11; ++i_) {
      bob.push(i_);
    }

    // Print state before swap
    print("alice:"s, alice);
    print("bob  :"s, bob);

    std::cout << "-- SWAP\n"s;
    std::swap(alice, bob);

    // Print state after swap
    print("alice:"s, alice);
    print("bob  :"s, bob);
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  //  TODO: std::swap(std::thread) specialization
  std::cout << konst::dot << '\n';
  std::cout << "std::swap(std::thread) specialization"s << std::endl;
  {
//    using std::swap;

    std::thread t1(ust::foo);
    std::thread t2(ust::bar);

    std::cout << "thread 1 id: "s << t1.get_id() << '\n'
              << "thread 2 id: "s << t2.get_id() << '\n';

    std::swap(t1, t2);

    std::cout << "after std::swap(t1, t2):"s << '\n'
              << "thread 1 id: "s << t1.get_id() << '\n'
              << "thread 2 id: "s << t2.get_id() << '\n';

    t1.swap(t2);

    std::cout << "after t1.swap(t2):"s << '\n'
              << "thread 1 id: "s << t1.get_id() << '\n'
              << "thread 2 id: "s << t2.get_id() << '\n';

    t1.join();
    t2.join();
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  //  TODO: std::swap(std::optional) specialization
  std::cout << konst::dot << '\n';
  std::cout << "std::swap(std::optional) specialization"s << std::endl;
  {
    // U+2588 - UTF-8: \xe2\x96\x88 - FULL BLOCK
    // U+2592 - UTF-8: \xe2\x96\x92 = MEDIUM SHADE
#define UTF_16_
#if defined(UTF_8)
    auto fb_utf8 = "\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88"s;
    auto ms_utf8 = "\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92"s;
    std::optional<std::string> opt_a{ fb_utf8 }, opt_b{ ms_utf8 };
#elif defined(UTF_16_)
    auto fb_utf16 = "\u2588\u2588\u2588\u2588\u2588\u2588"s;
    auto ms_utf16 = "\u2592\u2592\u2592\u2592\u2592\u2592"s;
    std::optional<std::string> opt_a{ fb_utf16 }, opt_b{ ms_utf16 };
#else
    std::optional<std::string> opt_a{ "██████"s }, opt_b{ "▒▒▒▒▒▒"s };
#endif

#define DEBUG_
//#undef DEBUG_
#if !defined(NDEBUG) && defined(DEBUG_)
    auto const cc_max(3U);
    auto cc(0U);
    std::cout << opt_a.value().size() << '\n';
    std::for_each(opt_a.value().cbegin(), opt_a.value().cend(), [&cc](auto x_) {
      auto sp = (++cc % cc_max == 0) ? " " : "";
      std::printf("\\x%02x%s", static_cast<unsigned char>(x_), sp);
    });
    std::cout << '\n';

    cc = 0U;
    std::cout << opt_b.value().size() << '\n';
    std::for_each(opt_b.value().cbegin(), opt_b.value().cend(), [&cc](auto x_) {
      auto sp = (++cc % cc_max == 0) ? " " : "";
      std::printf("\\x%02x%s", static_cast<unsigned char>(x_), sp);
    });
    std::cout << '\n' << '\n';
#endif

    auto print = [&](auto const & str) {
    std::cout << str << "\t"s
              << "a = "s << opt_a.value_or("(null)") << "  "s
              << "b = "s << opt_b.value_or("(null)") << '\n';
              };

    print("Initially:"s);
    std::swap(opt_a, opt_b);
    print("swap(a, b):"s);
    opt_a.reset();
    print("\n""a.reset():"s);
    std::swap(opt_a, opt_b);
    print("swap(a, b):"s);
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  //  TODO: std::swap(std::variant) specialization
  std::cout << konst::dot << '\n';
  std::cout << "std::swap(std::variant) specialization"s << std::endl;
  {
    auto print = [](auto const & v_, char term = '\n') {
      std::visit([](auto && o_) { std::cout << o_; }, v_);
      std::cout << term;
    };

    std::variant<int, std::string> v1 { 123, }, v2 { "XYZ", };
    print(v1, ' ');
    print(v2);

    std::swap(v1, v2);
    print(v1, ' ');
    print(v2);

    std::variant<double, std::string> v3 { 3.14, };
    // std::swap(v1, v3); // ERROR: ~ inconsistent parameter packs
  }
  std::cout << std::endl; //  make sure cout is flushed.

  return 0;
}

//  MARK: - U_iter_swap
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  MARK: namespace uis
namespace uis {

template<class ForwardIt>
void selection_sort(ForwardIt begin, ForwardIt end) {
  for (ForwardIt i_ = begin; i_ != end; ++i_) {
    std::iter_swap(i_, std::min_element(i_, end));
  }
}

} /* namespace uis */

//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: U_iter_swap()
 */
auto U_iter_swap(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist(-9, +9);
    std::vector<int> viz;
    std::generate_n(back_inserter(viz), 20, bind(dist, gen));

    auto cc(0UL);
    auto constexpr cc_max(20UL);

    auto show = [&cc](auto el) {
      std::cout << std::setw(3) << el << (++cc % cc_max == 0 ? "\n"s : ""s);
    };

    std::cout << "Before sort:\n"s << std::showpos;
    cc = 0UL;
    std::for_each(viz.cbegin(), viz.cend(), show);
    std::cout << '\n';

    uis::selection_sort(viz.begin(), viz.end());

    std::cout << "\nAfter sort :\n"s;
    std::for_each(viz.cbegin(), viz.cend(), show);
    std::cout << std::noshowpos << '\n';
  }
  std::cout << std::endl; //  make sure cout is flushed.

  return 0;
}

//  MARK: - U_swap_ranges
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: U_swap_ranges()
 */
auto U_swap_ranges(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  auto print = [](auto comment, auto const& seq) {
    std::cout << comment;
    for (const auto& e : seq) { std::cout << e << ' '; }
    std::cout << '\n';
  };

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  {
    std::vector<char> vsr = { 'a', 'b', 'c', 'd', 'e', };
    std::list<char>   lsr = { '1', '2', '3', '4', '5', };

    print("Before swap_ranges:\n"s "vsr: "s, vsr);
    print("lsr: "s, lsr);

    std::swap_ranges(vsr.begin(), vsr.begin() + 3, lsr.begin());

    print("After swap_ranges:\n"s "v:sr "s, vsr);
    print("lsr: "s, lsr);
  }
  std::cout << std::endl; //  make sure cout is flushed.

  return 0;
}

//  MARK: - U_exchange
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//
//  MARK: namespace uxc
namespace uxc {

class stream {
public:
  using flags_type = int;

public:
  flags_type flags() const {
    return flags_;
  }

  // Replaces flags_ by newf, and returns the old value.
  flags_type flags(flags_type newf) {
    return std::exchange(flags_, newf);
  }

private:
  flags_type flags_ = 0;
};
 
void f_exch() {
  std::cout << __func__ << "()"s;
}

} /* namespace uxc */

//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
auto U_exchange(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  {
    uxc::stream sux;

    std::cout << std::setw(3) << sux.flags()   << '\n';
    std::cout << std::setw(3) << sux.flags(12) << '\n';
    std::cout << std::setw(3) << sux.flags()   << "\n\n"s;

    std::vector<int> vux;

    // Since the second template parameter has a default value, it is possible
    // to use a braced-init-list as second argument. The expression below
    // is equivalent to std::exchange(vux, std::vector<int>{1,2,3,4});

    std::exchange(vux, { 1, 2, 3, 4, });

    std::copy(begin(vux), end(vux), std::ostream_iterator<int>(std::cout, ", "));
    std::cout << "\n\n"s;

    void (*fun)();

    // the default value of template parameter also makes possible to use a
    // normal function as second argument. The expression below is equivalent to
    // std::exchange(fun, static_cast<void(*)()>(f_exch))
    std::exchange(fun, uxc::f_exch);
    fun();
  }
  std::cout << std::endl; //  make sure cout is flushed.

  return 0;
}

//  MARK: - U_forward
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//
//  MARK: namespace ufw
namespace ufw {

struct Afwd {
  Afwd() {
    std::cout << __func__ << "()\n"s;
  }
  Afwd(int && nrval) {
    std::cout << __func__ << "(int &&), "s;
    std::cout << "rvalue overload, nrval="s << nrval << "\n"s;
  }
  Afwd(int & nlval) {
    std::cout << __func__ << "(int &),  "s;
    std::cout << "lvalue overload, nlval="s << nlval << "\n"s;
  }
};

class Bfwd {
public:
  Bfwd() {
    std::cout << __func__ << "(), "s;
  }
  template<class T1, class T2, class T3>
  Bfwd(T1 && t1, T2 && t2, T3 && t3) :
      a1_{std::forward<T1>(t1)},
      a2_{std::forward<T2>(t2)},
      a3_{std::forward<T3>(t3)} {
    std::cout << __func__ << "(T1 &&, T2 &&, T3 &&)\n"s;
  }

private:
  Afwd a1_, a2_, a3_;
};

template<class T, class U>
std::unique_ptr<T> make_unique1(U && unq) {
  std::cout << __func__ << '\n';
  return std::unique_ptr<T>(new T(std::forward<U>(unq)));
}

template<class T, class... U>
std::unique_ptr<T> make_unique2(U &&... unq) {
  std::cout << __func__ << '\n';
  return std::unique_ptr<T>(new T(std::forward<U>(unq)...));
}

} /* namespace ufw */

//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: U_forward()
 */
auto U_forward(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  {
    std::cout << "Afwd\n";
    auto p1 = ufw::make_unique1<ufw::Afwd>(2); // rvalue
    int i_val = 1;
    auto p2 = ufw::make_unique1<ufw::Afwd>(i_val); // lvalue

    std::cout << "Bfwd\n";
    auto t = ufw::make_unique2<ufw::Bfwd>(2, i_val, 3);
  }
  std::cout << std::endl; //  make sure cout is flushed.

  return 0;
}

//  MARK: - U_move
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: U_move()
 */
auto U_move(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  {
    std::string str = "Hello"s;
    std::vector<std::string> vstr;

    // uses the push_back(const T&) overload, which means
    // we'll incur the cost of copying str
    vstr.push_back(str);
    std::cout << "After copy, str is \""s << str << "\"\n"s;

    // uses the rvalue reference push_back(T&&) overload,
    // which means no strings will be copied; instead, the contents
    // of str will be moved into the vector.  This is less
    // expensive, but also means str might now be empty.
    vstr.push_back(std::move(str));
    std::cout << "After move, str is \""s << str << "\"\n"s;

    std::cout << "The contents of the vector are \""s << vstr[0]
                                         << "\", \""s << vstr[1] << "\"\n"s;
  }
  std::cout << std::endl; //  make sure cout is flushed.

  return 0;
}

//  MARK: - U_move_if_noexcept
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  MARK: namespace umx
namespace umx {

struct Bad {
  Bad() {
    std::cout << __func__ << "()\n"s;
  }

  Bad(Bad &&) {  // may throw
    std::cout << __func__ << "("s << __func__ << " &&), "s;
    std::cout << "Throwing move constructor called\n"s;
  }

  Bad(Bad const &) {  // may throw as well
    std::cout << __func__ << "("s << __func__ << " const &), "s;
    std::cout << "Throwing copy constructor called\n"s;
  }
};
 
struct Good {
  Good() {
    std::cout << __func__ << "()\n"s;
  }

  Good(Good &&) noexcept { // will NOT throw
    std::cout << __func__ << "("s << __func__ << " &&), "s;
    std::cout << "Non-throwing move constructor called\n"s;
  }

  Good(Good const &) noexcept { // will NOT throw
    std::cout << __func__ << "("s << __func__ << " const &), "s;
    std::cout << "Non-throwing copy constructor called\n"s;
  }
};

}
 /* namespace umx */

//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: U_move_if_noexcept()
 */
auto U_move_if_noexcept(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  {
    umx::Good gud1;
    umx::Bad  bad1;
    umx::Good gud2 = std::move_if_noexcept(gud1);
    umx::Bad  bad2 = std::move_if_noexcept(bad1);
  }
  std::cout << std::endl; //  make sure cout is flushed.

  return 0;
}

//  MARK: - U_as_const
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: U_as_const()
 */
auto U_as_const(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  {
    std::string mutableString = "Hello World!"s;
    auto && constRef = std::as_const(mutableString);

//      mutableString.clear();  // OK
//      constRef.clear();       // error: 'constRef' is 'const' qualified,
//                              //         but 'clear' is not marked const

    assert( &constRef == &mutableString );
    assert( &std::as_const( mutableString ) == &mutableString );

    using ExprType = std::remove_reference_t<decltype(std::as_const(mutableString))>;

    static_assert(std::is_same_v<std::remove_const_t<ExprType>, std::string>,
                  "ExprType should be some kind of string." );
    static_assert(!std::is_same_v<ExprType, std::string>,
                  "ExprType shouldn't be a mutable string." );
  }
  std::cout << std::endl; //  make sure cout is flushed.

  return 0;
}

//  MARK: - U_declval
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  MARK: namespace udv
namespace udv {

struct Default {
  int foo() const {
    return 1;
  }
};
 
struct NonDefault {
  NonDefault() = delete;
  int foo() const {
    return 1;
  }
};

} /* namespace udv */

//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: U_declval()
 */
auto U_declval(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  {
    decltype(udv::Default().foo()) n1 = 1;                    // type of n1 is int
//    decltype(udv::NonDefault().foo()) n2 = n1;               // error: no default constructor
    decltype(std::declval<udv::NonDefault>().foo()) n2 = n1;  // type of n2 is int
    std::cout << "n1 = " << n1 << '\n'
              << "n2 = " << n2 << '\n';
  }
  std::cout << std::endl; //  make sure cout is flushed.

  return 0;
}

#if (__cplusplus > 201707L)
//  MARK: - U_to_underlying
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  MARK: namespace uul
namespace uul {

#if defined(__cpp_lib_to_underlying)
  using std::to_underlying;
#else
  template <class Enum>
  constexpr std::underlying_type_t<Enum>
  to_underlying(Enum e) noexcept {
    return static_cast<std::underlying_type_t<Enum>>(e);
  }
#endif

} /* namespace uul */

//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: U_to_underlying()
 */
auto U_to_underlying(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  {
    enum class E1 : char { e_ };
    static_assert(std::is_same_v<char, decltype(cxx::to_underlying(E1::e_))>);
    enum struct E2 : long { e_ };
    static_assert(std::is_same_v<long, decltype(cxx::to_underlying(E2::e_))>);
    enum E3 : unsigned { e_ };
    static_assert(std::is_same_v<unsigned, decltype(cxx::to_underlying(e_))>);

    enum class ColorMask : std::uint32_t {
      red = 0xFF, green = (red << 8), blue = (green << 8), alpha = (blue << 8)
    }
  }
  std::cout << std::endl; //  make sure cout is flushed.

  return 0;
}
#endif  /* (__cplusplus > 201707L) */

//  MARK: - U_underlying_type
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  MARK: namespace uut
namespace uut {

enum        e1 {};
enum class  e2 {};
enum class  e3 : unsigned {};
enum class  e4 : int {};

} /* namespace uut */

//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: U_underlying_type()
 */
auto U_underlying_type(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  {
    constexpr bool e1_t = std::is_same_v< std::underlying_type_t<uut::e1>, int >;
    constexpr bool e2_t = std::is_same_v< std::underlying_type_t<uut::e2>, int >;
    constexpr bool e3_t = std::is_same_v< std::underlying_type_t<uut::e3>, int >;
    constexpr bool e4_t = std::is_same_v< std::underlying_type_t<uut::e4>, int >;

    std::cout
      << "underlying type for 'e1' is "s << (e1_t ? "int"s : "non-int"s) << '\n'
      << "underlying type for 'e2' is "s << (e2_t ? "int"s : "non-int"s) << '\n'
      << "underlying type for 'e3' is "s << (e3_t ? "int"s : "non-int"s) << '\n'
      << "underlying type for 'e4' is "s << (e4_t ? "int"s : "non-int"s) << '\n'
      ;
  }
  std::cout << std::endl; //  make sure cout is flushed.

  return 0;
}

//  MARK: - U_is_enum
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  MARK: namespace uin
namespace uin {

class       Ac {};
 
enum        Ee {};
 
enum class  Ec : int {};

class cls {};

template <class T>
T f_isInt(T i_) {
  static_assert(std::is_integral<T>::value, "Integral required.");
  return i_;
}
} /* namespace uin */

//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: U_is_enum()
 */
auto U_is_enum(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::is_enum"s << std::endl;
  {
    std::cout << std::boolalpha;
    std::cout << std::is_enum<uin::Ac>::value << '\n';
    std::cout << std::is_enum<uin::Ee>::value << '\n';
    std::cout << std::is_enum<uin::Ec>::value << '\n';
    std::cout << std::is_enum<int>::value     << '\n';
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::is_integral"s << std::endl;
  {
    std::cout << std::boolalpha;
    std::cout << std::is_integral<uin::Ac>::value << '\n';
    std::cout << std::is_integral_v<uin::Ec> << '\n';
    std::cout << std::is_integral_v<float> << '\n';
    std::cout << std::is_integral_v<int> << '\n';
    std::cout << std::is_integral_v<const int> << '\n';
    std::cout << std::is_integral_v<bool> << '\n';
    std::cout << uin::f_isInt(123) << '\n';
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::is_arithmetic"s << std::endl;
  {
    std::cout << std::boolalpha
              << "Ac:          "s << std::is_arithmetic_v<uin::Ac>     << '\n' // false
              << "bool:        "s << std::is_arithmetic_v<bool>        << '\n' // true
              << "int:         "s << std::is_arithmetic_v<int>         << '\n' // true
              << "int const:   "s << std::is_arithmetic_v<int const>   << '\n' // true
              << "int &:       "s << std::is_arithmetic_v<int &>       << '\n' // false
              << "int *:       "s << std::is_arithmetic_v<int *>       << '\n' // false
              << "float:       "s << std::is_arithmetic_v<float>       << '\n' // true
              << "float const: "s << std::is_arithmetic_v<float const> << '\n' // true
              << "float &:     "s << std::is_arithmetic_v<float &>     << '\n' // false
              << "float *:     "s << std::is_arithmetic_v<float *>     << '\n' // false
              << "char:        "s << std::is_arithmetic_v<char>        << '\n' // true
              << "char const:  "s << std::is_arithmetic_v<char const>  << '\n' // true
              << "char &:      "s << std::is_arithmetic_v<char &>      << '\n' // false
              << "char *:      "s << std::is_arithmetic_v<char *>      << '\n' // false
              ;
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::is_scalar"s << std::endl;
  {
    std::cout << (std::is_scalar<int>::value
                     ? "<int> is a scalar"s
                     : "<int> is not a scalar"s) << '\n';
    std::cout << (std::is_scalar<uin::cls>::value
                     ? "<uin::cls> is a scalar"s
                     : "<uin::cls> is not a scalar"s) << '\n';
  }
  std::cout << std::endl; //  make sure cout is flushed.

  //  TODO: there are more ...

  return 0;
}

#if (__cplusplus > 201707L)
//  MARK: - U_in_range
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: U_in_range()
 */
auto U_in_range(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  {
    std::cout << std::boolalpha;

    std::cout << std::in_range<std::size_t>(-1) << '\n';
    std::cout << std::in_range<std::size_t>(42) << '\n';
  }
  std::cout << std::endl; //  make sure cout is flushed.

  return 0;
}
#endif  /* (__cplusplus > 201707L) */

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

//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: U_pair()
 */
auto U_pair(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::pair - constructor"s << std::endl;
  {
    std::pair<int, float> p1;
    std::cout << "Value-initialized: "s
              << p1.first << ", "s << p1.second << '\n';

    std::pair<int, double> p2(42, 0.123);
    std::cout << "Initialized with two values: "s
              << p2.first << ", "s << p2.second << '\n';

    std::pair<char, int> p4(p2);
    std::cout << "Implicitly converted: "s
              << p4.first << ", "s << p4.second << '\n';

    std::pair<std::complex<double>, std::string> p6(
                   std::piecewise_construct,
                   std::forward_as_tuple(0.123, 7.7),
                   std::forward_as_tuple(10, 'a'));
    std::cout << "Piecewise constructed: "s
              << p6.first << ", "s << p6.second << '\n';
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::pair - operator=()"s << std::endl;
  {
    using namespace up1;
    std::pair<int, std::vector<int>> p1 { 1, { 2, }, }, q1 { 2, { 5, 6, }, };

    p1 = q1; // (1) operator=( const pair& other );
    std::cout << std::setw(25) << std::left
              << "(1) p1 = q1;"s << "p1"s << p1 << "   q1"s << q1 << '\n';

    std::pair<short, std::vector<int>> r1 { 4, { 7, 8, 9, }, };
    p1 = r1; // (2) operator=( const pair<U1,U2>& other );
    std::cout << std::setw(25)
              << "(2) p1 = r1;"s << "p1"s << p1 << " r1"s << r1 << '\n';

    p1 = std::pair<int, std::vector<int>> { 3, { 4, }, };
    p1 = std::move(q1); // (3) operator=( pair&& other );
    std::cout << std::setw(25)
              << "(3) p1 = std::move(q1);"s << "p1"s << p1 << "   q1"s << q1 << '\n';

    p1 = std::pair<int, std::vector<int>>{ 5, { 6, }, };
    p1 = std::move(r1); // (4) operator=( pair<U1,U2>&& other );
    std::cout << std::setw(25)
              << "(4) p1 = std::move(r1);"s << "p1"s << p1 << " r1"s << r1 << '\n';
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::pair - swap()"s << std::endl;
  {
    std::pair<int, std::string> p1, p2;
    p1 = std::make_pair(10, "test"s);
    p2 = std::make_pair(20, "swap"s);
    std::cout << "p1: "s << "("s << p1.first << ", "s << p1.second << ")\n"s;
    std::cout << "p2: "s << "("s << p2.first << ", "s << p2.second << ")\n"s;

    p2.swap(p1);

    std::cout << "p1: "s << "("s << p1.first << ", "s << p1.second << ")\n"s;
    std::cout << "p2: "s << "("s << p2.first << ", "s << p2.second << ")\n"s;
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::pair - make_pair()"s << std::endl;
  {
    int n_sclr = 1;
    int a_arry[5] = { 1, 2, 3, 4, 5, };

    // build a pair from two ints
    auto p1 = std::make_pair(n_sclr, a_arry[1]);
    std::cout << "The value of p1 is "s
              << "("s << p1.first << ", "s << p1.second << ")\n"s;

    // build a pair from a reference to int and an array (decayed to pointer)
    auto p2 = std::make_pair(std::ref(n_sclr), a_arry);
    n_sclr = 7;
    std::cout << "The value of p2 is "s
              << "("s << p2.first << ", "s << *(p2.second + 2) << ")\n"s;
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::pair - operator==() etc."s << std::endl;
  {
    //  Because operator< is defined for pairs, containers of pairs can be sorted.
    std::vector<std::pair<int, std::string>> vis = { { 2, "baz"s, },
                                                     { 2, "bar"s, },
                                                     { 1, "foo"s, }, };
    std::sort(vis.begin(), vis.end());

    for (auto p1 : vis) {
      std::cout << "{"s << p1.first << ", "s << std::quoted(p1.second) << "}\n"s;
    }

    //  TODO: Synthesized three-way comparison
    auto p1 = std::make_pair(42UL, "fortytwo"s);
    auto p2 = std::make_pair(0UL, "zero"s);
    [[maybe_unused]]
    auto cr = p1 < p2 ? std::weak_ordering::less :
              p2 < p1 ? std::weak_ordering::greater :
                        std::weak_ordering::equivalent;
#if (__cplusplus > 201707L)
    //  TODO: provide spaceship [<=>] sample when compiler catches up.
    auto cr = (p1 <=> p2);
#endif
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::pair - get()"s << std::endl;
  {
    auto p1 = std::make_pair(1, 3.14159);
    std::cout << '(' << std::get<0>(p1) << ", "s << std::get<1>(p1) << ")\n"s;
    std::cout << '(' << std::get<int>(p1) << ", "s << std::get<double>(p1) << ")\n"s;
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::pair - tuple_size()"s << std::endl;
  {
    up1::tuple_sz(std::make_tuple(1, 2, 3.14159));
    up1::tuple_sz(std::make_pair(1, 3.14159));
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::pair - tuple_element()"s << std::endl;
  {
    auto var = std::make_pair(1, std::string{"one"s});

    std::cout << up1::get_val<0>(var) << " = "s << up1::get_val<1>(var);
  }
  std::cout << std::endl; //  make sure cout is flushed.

  return 0;
}

//  MARK: - U_piecewise_construct_t
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  MARK: namespace up1
namespace upt {

struct Foo {
  Foo(std::tuple<int, float> tp) : tp_(tp) {
    std::cout << "Constructed a Foo from a tuple\n"s;
    iv_ = std::get<0>(tp_);
    fv_ = std::get<1>(tp_);
  }

  Foo(int iv, float fv) : iv_(iv), fv_(fv) {
    std::cout << "Constructed a Foo from an int and a float\n"s;
    tp_ = std::make_tuple(iv_, fv_);
  }

  std::tuple<int, float> tp_;
  int   iv_;
  float fv_;
};

} /* namespace upt */

//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: U_piecewise_construct_t()
 *
 *  std::piecewise_construct_t : tag type used to select correct function overload for
 *  piecewise construction
 *  std::piecewise_construct : an object of type piecewise_construct_t used to disambiguate
 *  functions for piecewise construction
 *
 *  std::piecewise_construct_t is an empty class tag type used to disambiguate between
 *  different functions that take two tuple arguments.
 *
 *  The overloads that do not use std::piecewise_construct_t assume that each tuple argument
 *  becomes the element of a pair. The overloads that use std::piecewise_construct_t assume
 *  that each tuple argument is used to construct, piecewise, a new object of specified type,
 *  which will become the element of the pair.
 *
 *  The constant std::piecewise_construct is an instance of an empty struct tag
 *  type std::piecewise_construct_t.
 */
auto U_piecewise_construct_t(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  {
    std::tuple<int, float> t_if(1, 3.14159F);
    std::pair<upt::Foo, upt::Foo> p1(t_if, t_if);
    std::pair<upt::Foo, upt::Foo> p2(std::piecewise_construct, t_if, t_if);

    auto [t1, t2] = p1;
    std::cout << std::get<0>(t1.tp_) << ' ' << std::get<1>(t1.tp_) << '\n';
    std::cout << std::get<0>(t2.tp_) << ' ' << std::get<1>(t2.tp_) << '\n';
    std::cout << t1.iv_ << ' ' << t1.fv_ << '\n';
    std::cout << t2.iv_ << ' ' << t2.fv_ << '\n' << '\n';

    auto [f1, f2] = p2;
    std::cout << f1.iv_ << ' ' << f1.fv_ << '\n';
    std::cout << f2.iv_ << ' ' << f2.fv_ << '\n';
    std::cout << std::get<0>(f1.tp_) << ' ' << std::get<1>(f1.tp_) << '\n';
    std::cout << std::get<0>(f2.tp_) << ' ' << std::get<1>(f2.tp_) << '\n' << '\n';
  }
  std::cout << std::endl; //  make sure cout is flushed.

  return 0;
}

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

//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: U_integer_sequence()
 */
auto U_integer_sequence(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
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

//  MARK: - U_apply
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  MARK: namespace uap
namespace uap {

int add(int first, int second) {
  std::cout << __func__ << "(int "s << first << ", int "s << second << ") "s;
  return first + second;
}

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

//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: U_apply()
 */
auto U_apply(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  {
    using namespace uap;
    // OK
    std::cout << std::apply(add, std::pair(1, 2)) << '\n';

    std::cout << std::apply(add_generic<double>, std::pair(10.5, 4.3)) << '\n';

    // Error: can't deduce the function type
    // std::cout << std::apply(add_generic, std::make_pair(2.0f, 3.0f)) << '\n';
    std::cout << std::apply(add_generic<float>, std::make_pair(2.0f, 3.0f)) << '\n';

    // OK
    std::cout << std::apply(add_lambda, std::pair(2.0f, 3.0f)) << '\n';

    // advanced example
    std::tuple myTuple(25, "Hello", 9.31f, 'c');
    std::cout << myTuple << '\n';
  }
  std::cout << std::endl; //  make sure cout is flushed.

  return 0;
}

//  MARK: - U_tuple
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  MARK: namespace utu1
namespace utu1 {

std::tuple<double, char, std::string> get_student(int id) {
  if (id == 0) { return std::make_tuple(3.8, 'A', "Lisa Simpson"s); }
  if (id == 1) { return std::make_tuple(2.9, 'C', "Milhouse Van Houten"s); }
  if (id == 2) { return std::make_tuple(1.7, 'D', "Ralph Wiggum"s); }

  throw std::invalid_argument("id");
}

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

std::tuple<int, int> f_tupl() {  // this function returns multiple values
    int xv = 5;
    return std::make_tuple(xv, 7); // return {x,7}; in C++17
}

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

//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: U_tuple()
 */
auto U_tuple(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::tuple"s << std::endl;
  {
    auto student0 = utu1::get_student(0);
    std::cout << "ID: 0, "s
              << "GPA: "s   << std::get<0>(student0) << ", "s
              << "grade: "s << std::get<1>(student0) << ", "s
              << "name: "s  << std::get<2>(student0) << '\n';

    double gpa1;
    char grade1;
    std::string name1;
    std::tie(gpa1, grade1, name1) = utu1::get_student(1);
    std::cout << "ID: 1, "s
              << "GPA: "s   << gpa1   << ", "s
              << "grade: "s << grade1 << ", "s
              << "name: "s  << name1  << '\n';

    // C++17 structured binding:
    auto [ gpa2, grade2, name2 ] = utu1::get_student(2);
    std::cout << "ID: 2, "s
              << "GPA: "s   << gpa2   << ", "s
              << "grade: "s << grade2 << ", "s
              << "name: "s  << name2  << '\n';
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::tuple - constructor"s << std::endl;
  {
    std::tuple<int, std::string, double> t1;
    std::cout << "Value-initialized: "s; utu1::print(t1);
    std::tuple<int, std::string, double> t2(42, "Test"s, -3.14);
    std::cout << "Initialized with values: "s; utu1::print(t2);
    std::tuple<char, std::string, int> t3(t2);
    std::cout << "Implicitly converted: "s; utu1::print(t3);
    std::tuple<int, double> t4(std::make_pair(42, 3.14));
    std::cout << "Constructed from a pair"s; utu1::print(t4);

//    // given Allocator my_alloc with a single-argument constructor my_alloc(int)
//    // use my_alloc(1) to allocate 10 ints in a vector
//    std::vector<int, my_alloc> v(10, 1, my_alloc(1));
//    // use my_alloc(2) to allocate 10 ints in a vector in a tuple
//    std::tuple<int, std::vector<int, my_alloc>, double> t5(std::allocator_arg,
//                                                           my_alloc(2), 42, v,  -3.14);

    std::vector<int> vi { 10, 21, 42, 64, 86, 11, 12, 14, 16, 17, };
    std::tuple<int, std::string, double> t5 { 12, utu1::toString(vi), 314159 };
    std::cout << "complicated tuple: "; utu1::print(t5);
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::tuple - operator="s << std::endl;
  {
    using namespace utu2;

    std::tuple<int, std::string, std::vector<int>>
      t1{1, "alpha", { 1, 2, 3, } }, t2 { 2, "beta"s, { 4, 5, }, };

    std::cout << "t1 = "s << t1 << ", t2 = "s << t2 << '\n';
    t1 = t2; // (1) operator=( const tuple& other );
    std::cout << "t1 = t2;\n"s "t1 = "s << t1 << ", t2 = "s << t2 << '\n'
              << line{};

    t1 = std::move(t2); // (2) operator=( tuple&& other );
    std::cout << "t1 = std::move(t2);\n"s "t1 = "s << t1 << ", t2 = "s << t2 << '\n'
              << line{};

    std::tuple<short, const char *, std::vector<int>> t3{3, "gamma", { 6, 7, 8, } };
    t1 = t3; // (3) operator=( const tuple<UTypes...>& other );
    std::cout << "t1 = t3; \n"s "t1 = "s << t1 << ", t3 = "s << t3 << '\n'
              << line{};

    t1 = std::move(t3); // (4) operator=( tuple<UTypes...>&& other );
    std::cout << "t1 = std::move(t3);\n"s "t1 = "s << t1 << ", t3 = "s << t3 << '\n'
              << line{};

    std::tuple<std::string, std::vector<int>> t4{"delta"s, { 10, 11, 12, } };
    std::pair<const char *, std::vector<int>> p1{"epsilon", { 14, 15, 16, } };
    std::cout << "t4 = "s << t4 << ", "s
              << "p1 = { "s << p1.first << ", "s << p1.second << " };\n"s;

    t4 = p1; // (5) operator=( const std::pair<U1,U2>& p );
    std::cout << "t4 = p1;\n"s "t4 = "s << t4
              << ", p1 = { "s << p1.first << ", "s << p1.second << " };\n"s
              << line{};

    t4 = std::move(p1); // (6) operator=( std::pair<U1,U2>&& p );
    std::cout << "t4 = std::move(p1);\n"s "t4 = "s << t4
              << ", p1 = { "s << p1.first << ", "s << p1.second << " };\n"s;
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::tuple - swap"s << std::endl;
  {
    std::tuple<int, std::string, float> p1, p2;
    p1 = std::make_tuple(10, "test"s, 3.14);
    p2.swap(p1);
    std::cout << "("s  << std::get<0>(p2)
              << ", "s << std::get<1>(p2)
              << ", "s << std::get<2>(p2) << ")\n"s;
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::tuple - make_tuple"s << std::endl;
  {
    // heterogeneous tuple construction
    int nv = 1;
    auto tup = std::make_tuple(10, "Test"s, 3.14, std::ref(nv), nv);
    nv = 7;
    std::cout << "The value of t is "s  << "("s
              << std::get<0>(tup) << ", "s << std::get<1>(tup) << ", "s
              << std::get<2>(tup) << ", "s << std::get<3>(tup) << ", "s
              << std::get<4>(tup) << ")\n"s;

    // function returning multiple values
    int a_val, b_val;
    std::tie(a_val, b_val) = utu3::f_tupl();
    std::cout << a_val << " "s << b_val << "\n"s;
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::tuple - tie"s << std::endl;
  {
    std::set<utu4::Szet> set_of_szet; // Szet is LessThanComparable

    utu4::Szet value{42, "Test"s, 3.14};
    std::set<utu4::Szet>::iterator iter;
    bool inserted;

    // unpacks the return value of insert into iter and inserted
    std::tie(iter, inserted) = set_of_szet.insert(value);

    if (inserted) {
      std::cout << "Value was inserted successfully\n"s;
    }

    int one, two, three;
    std::tie(one, std::ignore, two, three) = std::make_tuple(1, 2, 3, 4);
    std::cout << one << ' ' << two << ' ' << three << '\n';
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::tuple - forward_as_tuple"s << std::endl;
  {
    std::map<int, std::string> mis;

    mis[42] = "zyssy"s;
    mis[11] = "plugh"s;
    mis[76] = "plover"s;

    mis.emplace(std::piecewise_construct,
                std::forward_as_tuple(10),
                std::forward_as_tuple(20, 'a'));
    std::cout << "miis[10] = "s << mis[10] << '\n';

    for (auto [key, value] : mis) {
      std::cout << " ["s << key << "]: "s << value << '\n';
    }

    // The following is an error: it produces a
    // std::tuple<int&&, char&&> holding two dangling references.
    //
    // auto t = std::forward_as_tuple(20, 'a');
    // m.emplace(std::piecewise_construct, std::forward_as_tuple(10), t);
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::tuple - tuple_cat"s << std::endl;
  {
    std::tuple<int, std::string, float> t1(10, "Test"s, 3.14);
    utu5::print(t1);
    int nr = 7;
    auto t2 = std::tuple_cat(t1, std::make_tuple("Foo"s, "bar"s), t1, std::tie(nr));
    utu5::print(t2);
    nr = 42;
    utu5::print(t2);
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::tuple - std::get"s << std::endl;
  {
    auto tup = std::make_tuple(1, "Foo", 3.14);
    // index-based access
    std::cout << "("s << std::get<0>(tup) << ", "s << std::get<1>(tup)
              << ", "s << std::get<2>(tup) << ")\n"s;
    // type-based access (C++14 or later)
    std::cout << "("s << std::get<int>(tup) << ", "s << std::get<char const *>(tup)
              << ", "s << std::get<double>(tup) << ")\n"s;
    // Note: std::tie and structured binding may also be used to decompose a tuple
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::tuple - operator== etc."s << std::endl;
  {
    std::vector<std::tuple<int, std::string, float>> vt {
      {2, "baz"s, -0.1},
      {2, "bar"s, 3.14},
      {1, "foo"s, 10.1},
      {2, "baz"s, -1.1},
    };
    std::sort(vt.begin(), vt.end());

    for (auto const & pt : vt) {
      std::cout << "{"s << std::get<0>(pt) << ", "s << std::get<1>(pt)
                << ", "s << std::get<2>(pt) << "}\n"s;
    }

    //  TODO: Synthesized three-way comparison
    auto p1 = std::make_tuple(42UL, "fortytwo"s);
    auto p2 = std::make_tuple(0UL, "zero"s);
    [[maybe_unused]]
    auto cr = p1 < p2 ? std::weak_ordering::less :
              p2 < p1 ? std::weak_ordering::greater :
                        std::weak_ordering::equivalent;
#if (__cplusplus > 201707L)
    //  TODO: provide spaceship [<=>] sample when compiler catches up.
    auto cr = (p1 <=> p2);
#endif
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::tuple - std::swap"s << std::endl;
  {
    auto v1(-1);
    auto s1("string -1"s);
    auto d1(-1.000001);
    
    auto v2(97);
    auto s2("string 97"s);
    auto d2(97.000001);
    auto t1 = std::make_tuple(v1, s1, d1);
    auto t2 = std::make_tuple(v2, s2, d2);

    auto at = std::array<std::tuple<int, std::string, double>, 2> {
      std::make_tuple(v1, s1, d1), std::make_tuple(v2, s2, d2),
    };
    auto prt_tup = [](auto & t_) {
      std::cout << std::get<0>(t_) << ' '
                << std::get<1>(t_) << ' '
                << std::get<2>(t_) << "\n\n"s;
    };

    std::for_each(at.cbegin(), at.cend(), prt_tup);

    std::swap(at[0], at[1]);

    std::for_each(at.cbegin(), at.cend(), prt_tup);
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::tuple - std::tuple_size [helper]"s << std::endl;
  {
    auto tup = std::make_tuple(1, 2, 3.14);
    utu6::test(tup);
    auto constexpr tup_sz = std::tuple_size<decltype(tup)>::value;
    try {
      switch (tup_sz) {
        case 3:
          std::cout << std::get<0>(tup) << ' '
                    << std::get<2>(tup) << ' '
                    << std::get<1>(tup) << '\n';
          break;

        default:
          throw std::runtime_error("can't identify tuple"s);
          break;
      }
      std::cout << '\n';
    }
    catch (std::bad_variant_access & ex) {
      std::cout << "tuple member not found: "s << ex.what() << '\n';
    }
    catch (std::exception & ex) {
      std::cout << "GRONK! "s << ex.what() << '\n';
    }
    catch (...) {
      std::cout << "GRONK!\n"s;
    }
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::tuple - tuple_element"s << std::endl;
  {
    std::cout << std::boolalpha;
    utu6::type_list<int, char, bool>::type<2> x = true;
    std::cout << x << '\n';
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::tuple - std::ignore"s << std::endl;
  {
    std::set<std::string> set_of_str;
    bool inserted = false;
    std::tie(std::ignore, inserted) = set_of_str.insert("Test"s);
    if (inserted) {
      std::cout << "Value was inserted successfully\n"s;
    }
  }
  std::cout << std::endl; //  make sure cout is flushed.

  return 0;
}

//  MARK: - U_make_from_tuple
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  MARK: namespace umft
namespace umft {

struct Foo {
  Foo(int first, float second, int third) {
    std::cout << first << ", "s << second << ", "s << third << "\n"s;
  }
};

} /* namespace umft */

//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: U_make_from_tuple()
 */
auto U_make_from_tuple(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::make_from_tuple"s << std::endl;
  {
    auto tuple = std::make_tuple(42, 3.14f, 0);
    std::make_from_tuple<umft::Foo>(std::move(tuple));
  }
  std::cout << std::endl; //  make sure cout is flushed.

  return 0;
}

//  MARK: - U_optional
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  MARK: namespace uopt
namespace uopt {

// optional can be used as the return type of a factory that may fail
std::optional<std::string> create(bool bc) {
  if (bc) {
    return "Godzilla"s;
  }
  return {};
}

// std::nullopt can be used to create any (empty) std::optional
auto create2(bool bc2) {
  return bc2 ? std::optional<std::string>{"Godzilla"s} : std::nullopt;
}

// std::reference_wrapper may be used to return a reference
auto create_ref(bool bcr) {
  static std::string value = "Godzilla"s;
  return bcr ? std::optional<std::reference_wrapper<std::string>>{value}
             : std::nullopt;
}

} /* namespace uopt */

//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  MARK: namespace uopv
namespace uopv {

std::optional<char const *> maybe_getenv(char const * nc) {
  if (char const * xc = std::getenv(nc)) {
    return xc;
  }
  else {
    return {};
  }
}

} /* namespace uopv */

//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  MARK: namespace uopr
namespace uopr {

struct Aopr {
  std::string str_;
  Aopr(std::string str) : str_(std::move(str)) {
    std::cout << " constructed\n"s;
  }

  ~Aopr() {
    std::cout << " destructed\n"s;
  }

  Aopr(Aopr const & other) : str_(other.str_) {
    std::cout << " copy constructed\n"s;
  }

  Aopr(Aopr && other) : str_(std::move(other.str_)) {
    std::cout << " move constructed\n"s;
  }

  Aopr & operator=(Aopr const & other) {
    str_ = other.str_;
    std::cout << " copy assigned\n"s;
    return *this;
  }

  Aopr & operator=(Aopr && other) {
    str_ = std::move(other.str_);
    std::cout << " move assigned\n"s;
    return *this;
  }
};

} /* namespace uopr */

//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  MARK: namespace uope
namespace uope {

struct Aope {
  std::string str_;
  Aope(std::string str) : str_(std::move(str)) {
    std::cout << " constructed\n"s;
  }

  ~Aope() {
    std::cout << " destructed\n"s;
  }

  Aope(Aope const & other) : str_(other.str_) {
    std::cout << " copy constructed\n"s;
  }

  Aope(Aope && other) : str_(std::move(other.str_)) {
    std::cout << " move constructed\n"s;
  }

  Aope & operator=(Aope const & other) {
    str_ = other.str_;
    std::cout << " copy assigned\n"s;
    return *this;
  }

  Aope & operator=(Aope && other) {
    str_ = std::move(other.str_);
    std::cout << " move assigned\n"s;
    return *this;
  }
};

} /* namespace uope */

//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: U_optional()
 */
auto U_optional(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::optional"s << std::endl;
  {
    std::cout << "create(false) returned "s
              << uopt::create(false).value_or("empty"s) << '\n';

    // optional-returning factory functions are usable as conditions of while and if
    if (auto str = uopt::create2(true)) {
      std::cout << "create2(true) returned "s << *str << '\n';
    }

    if (auto str = uopt::create_ref(true)) {
      // using get() to access the reference_wrapper's value
      std::cout << "create_ref(true) returned "s << str->get() << '\n';
      str->get() = "Mothra"s;
      std::cout << "modifying it changed it to "s << str->get() << '\n';
    }
  }
  std::cout << std::endl; //  make sure cout is flushed.
  
  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::optional - constructor"s << std::endl;
  {
    std::optional<int> o1,      // empty
                       o2 = 1,  // init from rvalue
                       o3 = o2; // copy-constructor

    // calls std::string( initializer_list<CharT> ) constructor
    std::optional<std::string> o4(std::in_place, {'a', 'b', 'c'});

    // calls std::string( size_type count, CharT ch ) constructor
    std::optional<std::string> o5(std::in_place, 3, 'A');

    // Move-constructed from std::string using deduction guide to pick the type

    std::optional o6(std::string{"deduction"s});

    auto optsi = std::vector<std::pair<std::string, std::optional<int>>> {
      std::make_pair("o1"s, o1), std::make_pair("o2"s, o2), std::make_pair("o3"s, o3),
    };
    auto optss = std::vector<std::pair<std::string, std::optional<std::string>>> {
      std::make_pair("o4"s, o4), std::make_pair("o5"s, o5),
    };

    auto oshow = [](auto const & op) {
      auto const [on, ov] = op;
      bool ostate = ov ? true : false;
      std::cout << on << ".operator bool == "s << std::boolalpha << ostate << '\n';
      std::cout << on << ".has_value() == "s << ov.has_value() << '\n';
    };

    std::for_each(optsi.cbegin(), optsi.cend(), oshow);
    std::for_each(optss.cbegin(), optss.cend(), oshow);

    std::cout << *o2 << ' ' << *o3 << ' ' << *o4 << ' ' << *o5  << ' ' << *o6 << '\n';
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::optional - operator->, operator*"s << std::endl;
  {
//    using namespace std::string_literals;

    std::optional<int> opt1 = 1;
    std::cout<< "opt1: "s << *opt1 << '\n';

    *opt1 = 2;
    std::cout<< "opt1: "s << *opt1 << '\n';

    std::optional<std::string> opt2 = "abc"s;
    std::cout<< "opt2: "s << *opt2 << " size: "s << opt2->size() << '\n';

    // You can "take" the contained value by calling operator* on a rvalue to optional

    auto taken = *std::move(opt2);
    std::cout << "taken: "s << taken
              << " opt2: "s << *opt2
              << " size: "s << opt2->size()
              << '\n';
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::optional - operator bool, has_value"s << std::endl;
  {
    std::cout << std::boolalpha;

    std::optional<int> opt;
    std::cout << opt.has_value() << '\n';

    opt = 43;
    if (opt) {
      std::cout << "value set to "s << opt.value() << '\n';
    }
    else {
      std::cout << "value not set\n"s;
    }

    opt.reset();
    if (opt.has_value()) {
      std::cout << "value still set to "s << opt.value() << '\n';
    }
    else {
      std::cout << "value no longer set\n"s;
    }
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::optional - value"s << std::endl;
  {
    std::optional<int> opt = {};

    try {
      [[maybe_unused]]
      int nr = opt.value();
    }
    catch (std::bad_optional_access const & ex) {
      std::cout << ex.what() << '\n';
    }
    try {
      opt.value() = 42;
    }
    catch (std::bad_optional_access const & ex) {
      std::cout << ex.what() << '\n';
    }

    opt = 43;
    std::cout << *opt << '\n';

    opt.value() = 44;
    std::cout << opt.value() << '\n';
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::optional - value_or"s << std::endl;
  {
    auto envvars = std::vector<std::string const> {
      "MYPWD"s, "HOSTNAME"s, "USER"s, "SHELL"s,
    };

    for (auto env : envvars) {
      std::cout << "evironment variable: "s << env << ' '
                << uopv::maybe_getenv(env.c_str()).value_or("(none)") << '\n';
    }
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::optional - swap"s << std::endl;
  {
    std::optional<std::string> opt1("First example text"s);
    std::optional<std::string> opt2("2nd text"s);

    enum Swap { Before, After, };
    auto print_opts = [&](Swap e_) {
      std::cout << (e_ == Before ? "Before swap:\n"s : "After swap:\n"s);
      std::cout << "opt1 contains '"s << opt1.value_or(""s) << "'\n"s;
      std::cout << "opt2 contains '"s << opt2.value_or(""s) << "'\n"s;
      std::cout << (e_ == Before ? "---SWAP---\n"s : "\n"s);
    };

    print_opts(Before);
    opt1.swap(opt2);
    print_opts(After);

    // Swap with only 1 set
    opt1 = "Lorem ipsum dolor sit amet, consectetur tincidunt."s;
    opt2.reset();

    print_opts(Before);
    opt1.swap(opt2);
    print_opts(After);
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::optional - reset"s << std::endl;
  {
    std::cout << "Create empty optional:\n"s;
    std::optional<uopr::Aopr> opt;

    std::cout << "Construct and assign value:\n"s;
    opt = uopr::Aopr("Lorem ipsum dolor sit amet, consectetur adipiscing elit nec."s);

    std::cout << "Reset optional:\n"s;
    opt.reset();
    std::cout << "End example\n"s;
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::optional - emplace"s << std::endl;
  {
    std::optional<uope::Aope> opt;

    std::cout << "Assign:\n"s;
    opt = uope::Aope("Lorem ipsum dolor sit amet, consectetur adipiscing elit nec."s);

    std::cout << "Emplace:\n"s;
    // As opt contains a value it will also destroy that value
    opt.emplace("Lorem ipsum dolor sit amet, consectetur efficitur. "s);

    std::cout << "End example\n"s;
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::optional - std::make_optional"s << std::endl;
  {
    std::optional<std::string> ostr;
    if (!ostr) {
      ostr = std::make_optional("setup"s);
    }
    std::cout << *ostr << '\n';
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::optional - std::hash"s << std::endl;
  {
    using OptStr = std::optional<std::string>;

    // hash<optional> makes it possible to use unordered_set
    std::unordered_set<OptStr> opst = {
      "ABC"s, "abc"s, std::nullopt, "def"s
    };

    for (auto const & op : opst) {
      std::cout << std::setw(8) << std::left << op.value_or("(null)") << ' '
                << std::hex << std::hash<OptStr>{}(op) << std::dec << '\n';
    }
  }
  std::cout << std::endl; //  make sure cout is flushed.

  return 0;
}

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

std::ostream & operator<<(std::ostream & os, std::variant<int, std::string> const & va) {
  os << ": { ";

  std::visit([&](auto && arg) {
    using T = std::decay_t<decltype(arg)>;
    if constexpr (std::is_same_v<T, int>) {
      os << arg;
    }
    else if constexpr (std::is_same_v<T, std::string>) {
      os << std::quoted(arg);
    }
  }, va);

  return os << " };\n";
}

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

//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: U_variant()
 */
auto U_variant(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::variant"s << std::endl;
  {
    std::variant<int, float> vi, wf;
    vi = 12; // v contains int
    [[maybe_unused]]
    int i_ = std::get<int>(vi);
    wf = std::get<int>(vi);
    wf = std::get<0>(vi); // same effect as the previous line
    wf = vi;              // same effect as the previous line

//    std::get<double>(v); // error: no double in [int, float]
//    std::get<3>(v);      // error: valid index values are 0 and 1

    try {
      std::get<float>(wf); // w contains int, not float: will throw
    }
    catch (std::bad_variant_access const & ex) {
      std::cout << ex.what() << '\n';
    }

//    using namespace std::literals;

    std::variant<std::string> xs("abc"s);
    // converting constructors work when unambiguous
    xs = "def"s; // converting assignment also works when unambiguous

    std::variant<std::string, void const *> yv("abc");
    // casts to void const * when passed a char const *
    assert(std::holds_alternative<void const *>(yv)); // succeeds
    yv = "xyz"s;
    assert(std::holds_alternative<std::string>(yv)); // succeeds
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::variant - constructor"s << std::endl;
  {
    using namespace uvrnt;
    {
      std::variant<int, std::string> var; // value-initializes first alternative
      assert(std::holds_alternative<int>(var) && var.index() == 0 &&
             std::get<int>(var) == 0);
    }
    {
      std::variant<std::string, int> var { "STR"s };
          // initializes first alternative with std::string{"STR"};
      assert(var.index() == 0);
      std::cout << "1) "s << std::get<std::string>(var) << '\n';
    }
    {
      std::variant<std::string, int> var { 42 };
          // initializes second alternative with int = 42;
      assert(std::holds_alternative<int>(var));
      std::cout << "2) "s << std::get<int>(var) << '\n';
    }
    {
      std::variant<std::string, std::vector<int>, float> var {
          std::in_place_type<std::string>, 4, 'A'
      };
          // initializes first alternative with std::string{4, 'A'};
      assert(var.index() == 0);
      std::cout << "3) "s << std::get<std::string>(var) << '\n';
    }
    {
      std::variant<std::string, std::vector<int>, char> var {
          std::in_place_type<std::vector<int>>, { 1, 2, 3, 4, 5, } };
          // initializes second alternative with std::vector{1,2,3,4,5};
      assert(var.index() == 1);
      std::cout << "4) "s << std::get<std::vector<int>>(var) << '\n';
    }
    {
      std::variant<std::string, std::vector<int>, bool> var {
          std::in_place_index<0>, "ABCDE"s, 3
      };
          // initializes first alternative with std::string{"ABCDE", 3};
      assert(var.index() == 0);
      std::cout << "5) "s << std::get<std::string>(var) << '\n';
    }
    {
      std::variant<std::string, std::vector<int>, char> var {
          std::in_place_index<1>, 4, 42
      };
          // initializes second alternative with std::vector(4, 42);
      assert(std::holds_alternative<std::vector<int>>(var));
      std::cout << "6) "s << std::get<std::vector<int>>(var) << '\n';
    }
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::variant - destructor"s << std::endl;
  {
    struct Xvard { ~Xvard() { puts("Xvard::~Xvard();"); } };
    struct Yvard { ~Yvard() { puts("Yvard::~Yvard();"); } };

    {
      puts("entering block #1");
      std::variant<Xvard, Yvard> var;
      puts("leaving block #1");
    }

    {
      puts("entering block #2");
      std::variant<Xvard,Yvard> var{ std::in_place_index_t<1>{} }; // constructs var(Y)
      puts("leaving block #2");
    }
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::variant - operator="s << std::endl;
  {
    using namespace uvrn1;

    std::variant<int, std::string> av { 2017 }, bv { "CppCon"s };
    std::cout << "av"s << av << "bv"s << bv << '\n';

    std::cout << "(1) operator=( variant const & rhs )\n"s;
    av = bv;
    std::cout << "av"s << av << "bv"s << bv << '\n';

    std::cout << "(2) operator=( variant && rhs )\n"s;
    av = std::move(bv);
    std::cout << "av"s << av << "bv"s << bv << '\n';

    std::cout << "(3) operator=( T && t ), where T is int\n"s;
    av = 2019;
    std::cout << "av"s << av << '\n';

    std::cout << "(3) operator=( T && t ), where T is std::string\n"s;
    std::string sv { "CppNow"s };
    std::cout << "sv: "s << std::quoted(sv) << '\n';
    av = std::move(sv);
    std::cout << "av"s << av << "sv: "s << std::quoted(sv) << '\n';
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::variant - index"s << std::endl;
  {
    std::variant<int, std::string> vv = "abc"s;

    std::cout << "vv.index = "s << vv.index() << '\n';

    vv = {};

    std::cout << "vv.index = "s << vv.index() << '\n';
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::variant - valueless_by_exception"s << std::endl;
  {
    std::variant<std::string, uvrn2::Demo> var{"str"s};
    assert(var.index() == 0);
    assert(std::get<0>(var) == "str"s);
    assert(var.valueless_by_exception() == false);

    try {
      var = uvrn2::Demo{666};
    }
    catch (const std::domain_error & ex) {
      std::cout << "1) Exception: "s << ex.what() << '\n';
    }
    catch (std::exception const & ex) {
      std::cout << "1a) std::exception: "s << ex.what() << '\n';
    }
    catch (...) {
      std::cout << "1b) ...: unexpected"s << '\n';
    }

    assert(var.index() == std::variant_npos);
    assert(var.valueless_by_exception() == true);

    // Now the var is "valueless" which is an invalid state caused
    // by an exception raised in the process of var's initialization.

    try {
      std::get<1>(var);
    }
    catch (std::bad_variant_access const & ex) {
      std::cout << "2) Exception: "s << ex.what() << '\n';
    }
    catch (std::exception const & ex) {
      std::cout << "2b) std::exception: "s << ex.what() << '\n';
    }
    catch (...) {
      std::cout << "2c) ...: unexpected"s << '\n';
    }

    var = "str2"s;
    assert(var.index() == 0);
    assert(std::get<0>(var) == "str2"s);
    assert(var.valueless_by_exception() == false);
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::variant - emplace"s << std::endl;
  {
    std::variant<std::string> v1;
    v1.emplace<0>("abc"s); // OK
    std::cout << std::get<0>(v1) << '\n';
    v1.emplace<std::string>("def"s); // OK
    std::cout << std::get<0>(v1) << '\n';
   
    std::variant<std::string, std::string> v2;
    v2.emplace<1>("ghi"s); // OK
    std::cout << std::get<1>(v2) << '\n';
    // v2.emplace<std::string>("abc"); -> Error
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::variant - swap"s << std::endl;
  {
    std::variant<int, std::string> v1{2}, v2{"abc"s};
    std::visit([] (auto && x) { std::cout << x << ' '; }, v1);
    std::visit([] (auto && x) { std::cout << x << '\n'; }, v2);
    v1.swap(v2);
    std::visit([] (auto && x) { std::cout << x << ' '; }, v1);
    std::visit([] (auto && x) { std::cout << x << '\n'; }, v2);
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::variant - std::visit"s << std::endl;
  {
//    using namespace uvrn3;
    std::vector<uvrn3::var_t> vec = { 10, 15l, 1.5, "hello"s, };
    for(auto & v_ : vec) {

      // 1. void visitor, only called for side-effects (here, for I/O)
      std::visit([](auto && arg) { std::cout << arg; }, v_);

      // 2. value-returning visitor, demonstrates the idiom of returning another variant
      uvrn3::var_t w_viz = std::visit([](auto && arg) -> uvrn3::var_t {
        return arg + arg;
      }, v_);

      // 3. type-matching visitor: a lambda that handles each type differently
      std::cout << ". After doubling, variant holds "s;
      std::visit([](auto && arg) {
        using T = std::decay_t<decltype(arg)>;
        if constexpr (std::is_same_v<T, int>) {
          std::cout << "int with value "s << arg << '\n';
        }
        else if constexpr (std::is_same_v<T, long>) {
          std::cout << "long with value "s << arg << '\n';
        }
        else if constexpr (std::is_same_v<T, double>) {
          std::cout << "double with value "s << arg << '\n';
        }
        else if constexpr (std::is_same_v<T, std::string>) {
          std::cout << "std::string with value "s << std::quoted(arg) << '\n';
        }
        else {
          static_assert(uvrn3::always_false_v<T>, "non-exhaustive visitor!");
        }
      }, w_viz);
    }

    for (auto & v_ : vec) {
      // 4. another type-matching visitor: a class with 3 overloaded operator()'s
      std::visit(uvrn3::overloaded {
        [](auto arg) { std::cout << arg << ' '; },
        [](double arg) { std::cout << std::fixed << arg << ' '; },
        [](const std::string & arg) { std::cout << std::quoted(arg) << ' '; },
      }, v_);
    }
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::variant - std::holds_alternative"s << std::endl;
  {
    auto showme = [](auto vrnt) {
      if (std::holds_alternative<int>(vrnt)) {
        std::cout << "variant contains "s
                  << std::get<int>(vrnt) << '\n';
      }
      else if (std::holds_alternative<std::string>(vrnt)) {
        std::cout << "variant contains "s
                  << std::get<std::string>(vrnt) << '\n';
      }
      std::cout << std::boolalpha
                << "variant holds int? "s
                << std::holds_alternative<int>(vrnt) << '\n'
                << "variant holds string? "s
                << std::holds_alternative<std::string>(vrnt) << '\n' << '\n';
    };

    std::variant<int, std::string> vrnt = "abc"s;
    showme(vrnt);
    vrnt = 42;
    showme(vrnt);
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::variant - std::get"s << std::endl;
  {
    std::variant<int, float> vvar { 12 }, wvar;
    std::cout << std::get<int>(vvar) << '\n';
    wvar = std::get<int>(vvar);
    wvar = std::get<0>(vvar); // same effect as the previous line

//    std::get<double>(v); // error: no double in [int, float]
//    std::get<3>(v);      // error: valid index values are 0 and 1

    try {
      wvar = 42.0f;
      std::cout << std::get<float>(wvar) << '\n'; // ok, prints 42

      wvar = 42;
      std::cout << std::get<int>(wvar) << '\n';   // ok, prints 42

      std::cout << std::get<float>(wvar) << '\n'; // throws
    }
    catch (std::bad_variant_access const & ex) {
      std::cout << ex.what() << ": wvar contained int, not float\n";
    }
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::variant - operator==, etc."s << std::endl;
  {
    std::cout << std::boolalpha;
    std::string cmp;
    bool result;

    auto print2 = [&cmp, &result](auto const & lhs, auto const & rhs) {
        std::cout << lhs << ' ' << cmp << ' ' << rhs << " : " << result << '\n';
    };

    std::variant<int, std::string> v1, v2;

    std::cout << "operator==\n";
    {
      cmp = "==";

      // by default v1 = 0, v2 = 0;
      result = v1 == v2; // true
      std::visit(print2, v1, v2);

      v1 = v2 = 1;
      result = v1 == v2; // true
      std::visit(print2, v1, v2);

      v2 = 2;
      result = v1 == v2; // false
      std::visit(print2, v1, v2);

      v1 = "A"s;
      result = v1 == v2; // false: v1.index == 1, v2.index == 0
      std::visit(print2, v1, v2);

      v2 = "B"s;
      result = v1 == v2; // false
      std::visit(print2, v1, v2);

      v2 = "A"s;
      result = v1 == v2; // true
      std::visit(print2, v1, v2);
    }

    std::cout << "operator<\n"s;
    {
      cmp = "<"s;

      v1 = v2 = 1;
      result = v1 < v2; // false
      std::visit(print2, v1, v2);

      v2 = 2;
      result = v1 < v2; // true
      std::visit(print2, v1, v2);

      v1 = 3;
      result = v1 < v2; // false
      std::visit(print2, v1, v2);

      v1 = "A"s; v2 = 1;
      result = v1 < v2; // false: v1.index == 1, v2.index == 0
      std::visit(print2, v1, v2);

      v1 = 1; v2 = "A"s;
      result = v1 < v2; // true: v1.index == 0, v2.index == 1
      std::visit(print2, v1, v2);

      v1 = v2 = "A"s;
      result = v1 < v2; // false
      std::visit(print2, v1, v2);

      v2 = "B"s;
      result = v1 < v2; // true
      std::visit(print2, v1, v2);

      v1 = "C"s;
      result = v1 < v2; // false
      std::visit(print2, v1, v2);
    }

    {
      std::variant<int, std::string> v1;
      std::variant<std::string, int> v2;
//      result = v1 == v2;  // Compilation error: no known conversion
    }

#if (__cplusplus > 201707L)
    {
      // TODO: C++20 three-way comparison operator <=> for variants
      v1 = v2;
      result = std::is_eq(v1 <=> v2);
      //  etc.
    }
#endif
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::variant - std::swap"s << std::endl;
  {
    auto print = [](auto const & vrnt, char term = '\n') {
      std::visit([](auto && oviz) { std::cout << oviz; }, vrnt);
      std::cout << term;
    };

    std::variant<int, std::string> v1{123}, v2{"XYZ"s};
    print(v1, ' ');
    print(v2);

    std::swap(v1, v2);
    print(v1, ' ');
    print(v2);

    std::variant<double, std::string> v3{3.14};
//    std::swap(v1, v3); // ERROR: ~ inconsistent parameter packs
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::variant - std::monostate"s << std::endl;
  {
    // Without the monostate type this declaration will fail.
    // This is because S is not default-constructible.

    std::variant<std::monostate, uvrn4::Simp> var;
    assert(var.index() == 0);
    
    std::cout << "std::variant<std::monostate, uvrn4::Simp> var;\nvar.index()\n"s
              << var.index() << '\n';

    try {
      std::get<uvrn4::Simp>(var); // throws! We need to assign a value
    }
    catch(std::bad_variant_access const & ex) {
      std::cout << ex.what() << '\n';
    }

    var = 12;

    std::cout << std::get<uvrn4::Simp>(var).ival_ << '\n';
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::variant - std::bad_variant_access"s << std::endl;
  {
    std::variant<int, float> v;
    v = 12;
    try {
      std::get<float>(v);
    }
    catch (std::bad_variant_access const & ex) {
      std::cout << ex.what() << '\n';
    }
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::variant - std::variant_size, std::variant_size_v"s << std::endl;
  {
    static_assert(std::variant_size_v<std::variant<>> == 0);
    static_assert(std::variant_size_v<std::variant<int>> == 1);
    static_assert(std::variant_size_v<std::variant<int, int>> == 2);
    static_assert(std::variant_size_v<std::variant<int, int, int>> == 3);
    static_assert(std::variant_size_v<std::variant<int, float, double>> == 3);
    static_assert(std::variant_size_v<std::variant<std::monostate, void>> == 2);
    static_assert(std::variant_size_v<std::variant<const int, const float>> == 2);
    static_assert(std::variant_size_v<std::variant<std::variant<std::any>>> == 1);

    std::puts("All static assertions passed.");

    std::cout << std::boolalpha;
    std::cout << "std::variant_size_v<std::variant<>> == 0: "s
              << (std::variant_size_v<std::variant<>> == 0) << '\n';
    std::cout << "std::variant_size_v<std::variant<int>> == 1: "s
              << (std::variant_size_v<std::variant<int>> == 1) << '\n';
    std::cout << "std::variant_size_v<std::variant<int, int>> == 2: "s
              << (std::variant_size_v<std::variant<int, int>> == 2) << '\n';
    std::cout << "std::variant_size_v<std::variant<int, int, int>> == 3: "s
              << (std::variant_size_v<std::variant<int, int, int>> == 3) << '\n';
    std::cout << "std::variant_size_v<std::variant<int, float, double>> == 3: "s
              << (std::variant_size_v<std::variant<int, float, double>> == 3) << '\n';
    std::cout << "std::variant_size_v<std::variant<std::monostate, void>> == 2: "s
              << (std::variant_size_v<std::variant<std::monostate, void>> == 2) << '\n';
    std::cout << "std::variant_size_v<std::variant<const int, const float>> == 2: "s
              << (std::variant_size_v<std::variant<const int, const float>> == 2) << '\n';
    std::cout << "std::variant_size_v<std::variant<std::variant<std::any>>> == 1: "s
              << (std::variant_size_v<std::variant<std::variant<std::any>>> == 1) << '\n';
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::variant - std::variant_alternative, std::variant_alternative_v"s
            << std::endl;
  {
    using my_variant = std::variant<int, float>;

    static_assert(std::is_same_v
                  <int,   std::variant_alternative_t<0, my_variant>>);
    static_assert(std::is_same_v
                  <float, std::variant_alternative_t<1, my_variant>>);
    // cv-qualification on the variant type propagates to the extracted alternative type.
    static_assert(std::is_same_v
                  <const int, std::variant_alternative_t<0, const my_variant>>);
     
    std::cout << "All static assertions passed.\n";

    std::cout << "using my_variant = std::variant<int, float>;\n";
    std::cout << "std::is_same_v\n"s
              << "<int,   std::variant_alternative_t<0, my_variant>>: "s
              << std::is_same_v <int,   std::variant_alternative_t<0, my_variant>>
              << "\n\n";
    std::cout << "std::is_same_v\n"s
              << "<float, std::variant_alternative_t<1, my_variant>>: "s
              << std::is_same_v <float, std::variant_alternative_t<1, my_variant>>
              << "\n\n";
    std::cout << "std::is_same_v\n"s
              << "<const int, std::variant_alternative_t<0, const my_variant>>: "s
              << std::is_same_v <const int, std::variant_alternative_t<0, const my_variant>>
              << "\n\n";
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::variant - std::hash"s << std::endl;
  {
    uvrn5::Var var;

    std::get<0>(var) = 2020;
    uvrn5::print<0>(var);

    var.emplace<1>(2023);
    uvrn5::print<1>(var);

    var.emplace<2>(2026);
    uvrn5::print<2>(var);

    var = "C++"s;
    uvrn5::print<3>(var);
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::variant - std::variant_npos"s << std::endl;
  {
//    using namespace uvrn6;

    std::variant<int, uvrn6::Demon> var{42};
    std::cout << std::boolalpha
              << "var.index(): "s << var.index() << '\n'
              << "index == npos: " << (var.index() == std::variant_npos) << '\n';

    try {
      var = uvrn6::Demon{666};
    }
    catch (std::domain_error const & ex) {
      std::cout << "Exception: "s << ex.what() << '\n'
                << "var.index(): "s << var.index() << '\n'
                << "index == npos: "s << (var.index() == std::variant_npos) << '\n'
                << "valueless: "s << var.valueless_by_exception() << '\n';
    }
  }
  std::cout << std::endl; //  make sure cout is flushed.

  return 0;
}


//  MARK: - U_any
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  MARK: namespace uvrn0
namespace uany0 {

class Star {
  std::string name;
  int id;

public:
  Star(std::string name, int id) : name { name }, id { id } {
    std::cout << "Star::Star(string, int)\n"s;
  }

  void print() const {
    std::cout << "Star{ \"" << name << "\" : "s << id << " };\n"s;
  }
};

} /* namespace uany0 */

//  MARK: namespace uvrn1
namespace uany1 {

template<class T, class F>
inline std::pair<const std::type_index, std::function<void(std::any const &)>>
  to_any_visitor(F const & fav)
{
  return {
    std::type_index(typeid(T)), [g_fun = fav]( std::any const & ai) {
      if constexpr (std::is_void_v<T>) {
        g_fun();
      }
      else {
        g_fun(std::any_cast<T const&>(ai));
      }
    }
  };
}
 
static std::unordered_map<std::type_index, std::function<void(std::any const &)>>
  any_visitor {
    to_any_visitor<void>([] {
      std::cout << "{}"s;
    }),
    to_any_visitor<int>([](int xv) {
      std::cout << xv;
    }),
    to_any_visitor<unsigned>([](unsigned xv) {
      std::cout << xv;
    }),
    to_any_visitor<float>([](float xv) {
      std::cout << xv;
    }),
    to_any_visitor<double>([](double xv) {
      std::cout << xv;
    }),
    to_any_visitor<char const *>([](char const * sv) {
      std::cout << std::quoted(sv);
    }),
    // ... add more handlers for your types ...
  };
 
inline void process(std::any const & ap) {
  if (auto const it = any_visitor.find(std::type_index(ap.type())); it != any_visitor.cend()) {
    it->second(ap);
  }
  else {
    std::cout << "Unregistered type "s << std::quoted(ap.type().name());
  }
}
 
template<class T, class F>
inline void register_any_visitor(F const & frav) {
  std::cout << "Register visitor for type "s
            << std::quoted(typeid(T).name()) << '\n';
  any_visitor.insert(to_any_visitor<T>(frav));
}

} /* namespace uany1 */

//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: U_any()
 */
auto U_any(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::any"s << std::endl;
  {
    std::cout << std::boolalpha;

    // any type
    std::any a_val = 1;
    std::cout << a_val.type().name() << ": "s << std::any_cast<int>(a_val) << '\n';
    a_val = 3.14;
    std::cout << a_val.type().name() << ": "s << std::any_cast<double>(a_val) << '\n';
    a_val = true;
    std::cout << a_val.type().name() << ": "s << std::any_cast<bool>(a_val) << '\n';

    // bad cast
    try {
      a_val = 1;
      std::cout << std::any_cast<float>(a_val) << '\n';
    }
    catch (std::bad_any_cast const & ex) {
      std::cout << ex.what() << '\n';
    }

    // has value
    a_val = 1;
    if (a_val.has_value()) {
      std::cout << a_val.type().name() << '\n';
    }

    // reset
    a_val.reset();
    if (!a_val.has_value()) {
      std::cout << "no value\n"s;
    }

    // pointer to contained data
    a_val = 1;
    int * i = std::any_cast<int>(&a_val);
    std::cout << *i << "\n"s;
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::any - emplace"s << std::endl;
  {
    std::any celestial;
    // (1) emplace( Args&&... args );
    celestial.emplace<uany0::Star>("Procyon"s, 2943);
    auto const * star = std::any_cast<uany0::Star>(&celestial);
    star->print();

    std::any av;
    // (2) emplace( std::initializer_list<U> il, Args&&... args );
    av.emplace<std::vector<char>>({ 'C', '+', '+', '1', '7', } /* no args */ );
    std::cout << av.type().name() << '\n';
    auto const * va = std::any_cast<std::vector<char>>(&av);
    std::for_each(va->cbegin(), va->cend(), [](char const & cr) { std::cout << cr; });
    std::cout << '\n';
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::any - has_value"s << std::endl;
  {
    std::any a0;
    std::cout << "a0.has_value(): "s << a0.has_value() << "\n"s;

    std::any a1 = 42;
    std::cout << "a1.has_value(): "s << a1.has_value() << '\n';
    std::cout << "a1 = " << std::any_cast<int>(a1) << '\n';
    a1.reset();
    std::cout << "a1.has_value(): "s << a1.has_value() << '\n';

    auto a2 = std::make_any<std::string>("Milky Way"s);
    std::cout << "a2.has_value(): "s << a2.has_value() << '\n';
    std::cout << "a2 = \""s << std::any_cast<std::string &>(a2) << "\"\n"s;
    a2.reset();
    std::cout << "a2.has_value(): "s << a2.has_value() << '\n';
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::any - type"s << std::endl;
  {
//    using namespace uany1;

    std::vector<std::any> va { {}, 42, 123u, 3.14159f, 2.71828, "C++17", };

    std::cout << "{ "s;
    for (const std::any & a_any : va) {
      uany1::process(a_any);
      std::cout << ", "s;
    }
    std::cout << "}\n"s;

    uany1::process(std::any(0xFULL)); // < Unregistered type "y" (unsigned long long)
    std::cout << '\n';

    uany1::register_any_visitor<unsigned long long>([](auto x_anyv) {
      std::cout << std::hex << std::showbase
                << x_anyv
                << std::noshowbase << std::dec;
    });

    uany1::process(std::any(0xFULL)); // < OK: 0xf
    std::cout << '\n';
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::any - std::any_cast"s << std::endl;
  {
    // simple example

    auto ay = std::any(12);

    std::cout << std::any_cast<int>(ay) << '\n';

    try {
      std::cout << std::any_cast<std::string>(ay) << '\n';
    }
    catch (std::bad_any_cast const & ex) {
      std::cout << ex.what() << '\n';
    }

    // pointer example

    if (int * ip = std::any_cast<int>(&ay)) {
      std::cout << "ay is int: "s << *ip << '\n';
    }
    else if (std::string* s = std::any_cast<std::string>(&ay)) {
      std::cout << "ay is std::string: "s << *s << '\n';
    }
    else {
      std::cout << "ay is another type or unset\n"s;
    }

    // advanced example

    ay = std::string("hello"s);

    auto & ra = std::any_cast<std::string &>(ay); // < reference
    ra[1] = 'o';

    std::cout << "ay: "s
              << std::any_cast<const std::string &>(ay) << '\n'; // < const reference

    auto by = std::any_cast<std::string &&>(std::move(ay)); // < rvalue reference

    // Note: 'by' is a move-constructed std::string,
    // 'ay' is left in valid but unspecified state

    std::cout << "ay: "s << *std::any_cast<std::string>(&ay) // < pointer
              << "by: "s << by << '\n';
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::any - std::make_any"s << std::endl;
  {
    auto a0 = std::make_any<std::string>("Hello, std::any!\n"s);
    auto a1 = std::make_any<std::complex<double>>(0.1, 2.3);

    std::cout << std::any_cast<std::string&>(a0);
    std::cout << std::any_cast<std::complex<double>&>(a1) << '\n';

    using lambda = std::function<void(void)>;

    // Put a lambda into std::any. Attempt #1 (failed).
    std::any a2 = [] {
      std::cout << "Lambda #1.\n"s;
    };
    std::cout << "a2.type() = \""s << a2.type().name() << "\"\n"s;

    // any_cast casts to <void(void)> but actual type is not
    // a std::function..., but ~ main::{lambda()#1}, and it is
    // unique for each lambda. So, this throws...
    try {
      std::any_cast<lambda>(a2)();
    }
    catch (std::bad_any_cast const & ex) {
      std::cout << ex.what() << '\n';
    }

    // Put a lambda into std::any. Attempt #2 (successful).
    auto a3 = std::make_any<lambda>([] {
      std::cout << "Lambda #2.\n"s;
    });
    std::cout << "a3.type() = \""s << a3.type().name() << "\"\n"s;
    std::any_cast<lambda>(a3)();
  }
  std::cout << std::endl; //  make sure cout is flushed.

  return 0;
}

//  MARK: - U_function
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  MARK: namespace ufun0
namespace ufun0 {

struct Foo {
  Foo(int num) : num_(num) {}
  void print_add(int iv) const {
    std::cout << num_+iv << '\n';
  }
  int num_;
};

void print_num(int iv) {
  std::cout << iv << '\n';
}

struct PrintNum {
  void operator()(int iv) const {
    std::cout << iv << '\n';
  }
};

} /* namespace ufun0 */

//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  MARK: namespace ufun1
namespace ufun1 {

void sampleFunction() {
  std::cout << "This is the sample function!\n"s;
}

void checkFunc( std::function<void()> & func ) {
  // Use operator bool to determine if callable target is available.
  if( func ) {
    std::cout << "Function is not empty! Calling function.\n"s;
    func();
  }
  else {
    std::cout << "Function is empty. Nothing to do.\n"s;
  }
}

} /* namespace ufun1 */

//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  MARK: namespace ufun2
namespace ufun2 {

void call(std::function<int()> f) {   // can be passed by value
    std::cout << f() << '\n';
}
 
int normal_function() {
    return 42;
}

} /* namespace ufun2 */

//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  MARK: namespace ufun3
namespace ufun3 {

int f_fun(int a_) { return -a_; }

void g_fun(double) {}

} /* namespace ufun3 */

//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  MARK: namespace ufun4
namespace ufun4 {

int f_fun(int, int) { return 1; }

int g_fun(int, int) { return 2; }

void test(std::function<int(int, int)> const & arg) {
  std::cout << "test function: "s;

  if (arg.target<std::plus<int>>()) {
    std::cout << "it is plus\n"s;
  }

  if (arg.target<std::minus<int>>()) {
    std::cout << "it is minus\n"s;
  }

  int (*const * ptr)(int, int) = arg.target<int(*)(int, int)>();

  if (ptr && *ptr == f_fun) {
    std::cout << "it is the function f_fun\n"s;
  }

  if (ptr && *ptr == g_fun) {
    std::cout << "it is the function g_fun\n"s;
  }
}

} /* namespace ufun4 */

//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  MARK: namespace ufun5
namespace ufun5 {

void foo(char const * str, int x_) {
  std::cout << "foo(\""s << str << "\", "s << x_ << ")\n"s;
}

void bar(char const * str, int x_) {
  std::cout << "bar(\""s << str << "\", "s << x_ << ")\n"s;
}

} /* namespace ufun5 */

//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  MARK: namespace ufun6
namespace ufun6 {

using SomeVoidFunc = std::function<void(int)>;

class Cfunc6 {
public:
  Cfunc6(SomeVoidFunc void_func = nullptr) :
  void_func_(void_func) {
    if (void_func_ == nullptr) { // specialized compare with nullptr
      void_func_ = std::bind(&Cfunc6::default_func, this, std::placeholders::_1);
    }
    void_func_(7);
  }

  void default_func(int i_) {
    std::cout << i_ << '\n';
  };

private:
  SomeVoidFunc void_func_;
};

void user_func(int i_) {
    std::cout << (i_ + 1) << '\n';
}

} /* namespace ufun6 */

//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  MARK: namespace ufun7
namespace ufun7 {

struct Foo {
  void display_greeting() {
    std::cout << "Hello, world.\n"s;
  }

  void display_number(int i_) {
    std::cout << "number: "s << i_ << '\n';
  }

  int data = 7;
};

} /* namespace ufun7 */

//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  MARK: namespace ufun8
namespace ufun8 {

struct Foo {
  Foo(int num) : num_(num) {}

  void print_add(int i_) const {
    std::cout << num_ + i_ << '\n';
  }

  int num_;
};

void print_num(int i_) {
  std::cout << i_ << '\n';
}

struct PrintNum {
  void operator()(int i_) const {
    std::cout << i_ << '\n';
  }
};

auto func2(char) -> int (*)() {
  return nullptr;
}

} /* namespace ufun8 */

//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  MARK: namespace ufun9
namespace ufun9 {

struct Sfun {
  Sfun() {
    std::cout << "Sfun default c'tor\n"s;
  }
  double operator()(char, int & i_) {
    std::cout << "double operator()(char, int & "s << i_ << ")\n"s;
    return i_;
  }
  float operator()(int i_) {
    std::cout << "double operator()(int "s << i_ << ")\n"s;
    return 1.0;
  }
};

template<class T>
typename std::result_of<T(int)>::type fn(T & tv) {
  std::cout << "overload of fn for callable T\n"s;
  return tv(0);
}

template<class T, class U>
int fn(U uv) {
  std::cout << "overload of fn for non-callable T\n"s;
  return uv;
}

} /* namespace ufun9 */

//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: U_function()
 */
auto U_function(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::function"s << std::endl;
  {
//    using namespace ufun0;

    // store a free function
    std::function<void(int)> f_display = ufun0::print_num;
    f_display(-9);

    // store a lambda
    std::function<void()> f_display_42 = []() {
      ufun0::print_num(42);
    };
    f_display_42();

    // store the result of a call to std::bind
    std::function<void()> f_display_31337 = std::bind(ufun0::print_num, 31337);
    f_display_31337();

    // store a call to a member function
    std::function<void(ufun0::Foo const &, int)> f_add_display = &ufun0::Foo::print_add;
    ufun0::Foo const foo(314159);
    f_add_display(foo, 1);
    f_add_display(314159, 1);

    // store a call to a data member accessor
    std::function<int(ufun0::Foo const &)> f_num = &ufun0::Foo::num_;
    std::cout << "num_: "s << f_num(foo) << '\n';

    // store a call to a member function and object
    using std::placeholders::_1;
    std::function<void(int)> f_add_display2 = std::bind( &ufun0::Foo::print_add, foo, _1 );
    f_add_display2(2);

    // store a call to a member function and object ptr
    std::function<void(int)> f_add_display3 = std::bind( &ufun0::Foo::print_add, &foo, _1 );
    f_add_display3(3);

    // store a call to a function object
    std::function<void(int)> f_display_obj = ufun0::PrintNum();
    f_display_obj(18);
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::function - operator bool"s << std::endl;
  {
    std::function<void()> f1;
    std::function<void()> f2( ufun1::sampleFunction );

    std::cout << "f1: "s;
    ufun1::checkFunc( f1 );

    std::cout << "f2: "s;
    ufun1::checkFunc( f2 );
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::function - operator()"s << std::endl;
  {
    int nr = 1;
    std::function<int()> fn = [&nr](){ return nr; };
    ufun2::call(fn);

    nr = 2;
    ufun2::call(fn);

    fn = ufun2::normal_function;
    ufun2::call(fn);
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::function - target_type"s << std::endl;
  {
    // fn1 and fn2 have the same type, but their targets do not
    std::function<int(int)> fn1(ufun3::f_fun),
                            fn2([](int av) {return -av;});
    std::cout << fn1.target_type().name() << '\n'
              << fn2.target_type().name() << '\n';

    // since C++17 deduction guides (CTAD) can avail
    std::cout << std::function{ufun3::g_fun}.target_type().name() << '\n';
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::function - target"s << std::endl;
  {
//    using namespace ufun4;

    ufun4::test(std::function<int(int, int)>(std::plus<int>()));
    ufun4::test(std::function<int(int, int)>(std::minus<int>()));
    ufun4::test(std::function<int(int, int)>(ufun4::f_fun));
    ufun4::test(std::function<int(int, int)>(ufun4::g_fun));
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::function - std::swap"s << std::endl;
  {
    std::function<void(char const *, int)> f1{ ufun5::foo };
    std::function<void(char const *, int)> f2{ ufun5::bar };

    f1("f1", 1);
    f2("f2", 2);

    std::cout << "std::swap(f1, f2);\n"s;
    std::swap(f1, f2);

    f1("f1", 1);
    f2("f2", 2);
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::function - operator==, operator!="s << std::endl;
  {
    ufun6::Cfunc6 c1;
    ufun6::Cfunc6 c2(ufun6::user_func);
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::function - std::bad_function_call"s << std::endl;
  {
    std::function<int()> f_of_n = nullptr;
    try {
      f_of_n();
    }
    catch (const std::bad_function_call & ex) {
      std::cout << ex.what() << '\n';
    }
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::function - std::mem_fn"s << std::endl;
  {
//    using namespace ufun7;

    ufun7::Foo foo;

    auto greet = std::mem_fn(&ufun7::Foo::display_greeting);
    greet(foo);

    auto print_num = std::mem_fn(&ufun7::Foo::display_number);
    print_num(foo, 42);

    auto access_data = std::mem_fn(&ufun7::Foo::data);
    std::cout << "data: "s << access_data(foo) << '\n';
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::function - std::invoke"s << std::endl;
  {
    // invoke a free function
    std::invoke(ufun8::print_num, -9);

    // invoke a lambda
    std::invoke([]() {
      ufun8::print_num(42);
    });

    // invoke a member function
    const ufun8::Foo foo(314159);
    std::invoke(&ufun8::Foo::print_add, foo, 1);

    // invoke (access) a data member
    std::cout << "num_: "s << std::invoke(&ufun8::Foo::num_, foo) << '\n';

    // invoke a function object
    std::invoke(ufun8::PrintNum(), 18);
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::function - std::is_invocable etc."s << std::endl;
  {
    auto lambda2 = [](char) -> int (*)() {
      return nullptr;
    };

    static_assert( std::is_invocable<int()>::value );
    static_assert( std::is_invocable_r<int, int()>::value );
    static_assert( std::is_invocable_r<void, void(int), int>::value );
    static_assert( std::is_invocable_r<int(*)(), decltype(ufun8::func2), char>::value );
    static_assert( std::is_invocable_r<int(*)(), decltype(lambda2), char>::value );

    std::cout << std::boolalpha;
    std::cout << "std::is_invocable<int()>::value: "s
              << ( std::is_invocable<int()>::value ) << '\n';
    std::cout << "std::is_invocable_r<int, int()>::value: "
              << ( std::is_invocable_r<int, int()>::value ) << '\n';
    std::cout << "std::is_invocable_r<void, void(int), int>::value: "s
              << ( std::is_invocable_r<void, void(int), int>::value ) << '\n';
    std::cout << "std::is_invocable_r<int(*)(), decltype(ufun8::func2), char>::value: "s
              << ( std::is_invocable_r<int(*)(), decltype(ufun8::func2), char>::value ) << '\n';
    std::cout << "std::is_invocable_r<int(*)(), decltype(lambda2), char>::value: "s
              << ( std::is_invocable_r<int(*)(), decltype(lambda2), char>::value ) << '\n';
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::function - std::result_of, std::invoke_result"s << std::endl;
  {
//    using namespace ufun9;

    // the result of invoking S with char and int& arguments is double
    std::result_of<ufun9::Sfun(char, int &)>::type dval = 3.14; // d has type double
    static_assert(std::is_same<decltype(dval), double>::value, "");
    std::cout << "std::result_of ... dval: " << dval << '\n';
    std::cout << "std::is_same<decltype(dval), double>::value: "s
              << (std::is_same<decltype(dval), double>::value)
              << '\n';

    // std::invoke_result uses different syntax (no parentheses)
    std::invoke_result<ufun9::Sfun, char, int &>::type bval = 3.14;
    static_assert(std::is_same<decltype(bval), double>::value, "");
    std::cout << "std::invoke_result ... bval: " << bval << '\n';
    std::cout << "std::is_same<decltype(bval), double>::value "s
              << (std::is_same<decltype(dval), double>::value)
              << '\n';

    // the result of invoking S with int argument is float
    std::result_of<ufun9::Sfun(int)>::type xval = 3.14; // x has type float
    static_assert(std::is_same<decltype(xval), float>::value, "");
    std::cout << "std::result_of ... xval: " << xval << '\n';
    std::cout << "std::is_same<decltype(xval), float>::value"s
              << (std::is_same<decltype(xval), float>::value)
              << '\n';

    // result_of can be used with a pointer to member function as follows
    struct Clcl {
      Clcl() {
        std::cout << "Clcl default c'tor\n"s;
      }
      double Func(char, int & i_) {
        std::cout << "Clcl::fn\n"s;
        return i_;
      }
    };
    std::result_of<decltype(&Clcl::Func)(Clcl, char, int &)>::type gval = 3.14;
    static_assert(std::is_same<decltype(gval), double>::value, "");
    std::cout << "std::result_of ... gval: " << gval << '\n';
    std::cout << "std::is_same<decltype(gval), double>::value"s
              << (std::is_same<decltype(gval), double>::value)
              << '\n';

    ufun9::fn<Clcl>(1); // may fail to compile in C++11; calls the non-callable overload in C++14
    ufun9::fn<ufun9::Sfun>(1);
  }
  std::cout << std::endl; //  make sure cout is flushed.

  return 0;
}

//  MARK: - U_type_identity
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  MARK: namespace utid
namespace utid {

template <class T>
T foo(T av, T bv) {
  return av + bv;
}

template <class T>
T bar(T av, std::type_identity_t<T> bv) {
  return av + bv;
}

template <class T>
T baz(T av, typename std::type_identity<T>::type bv) {
  return av + bv;
}

} /* namespace utid */

//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: U_type_identity()
 */
auto U_type_identity(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::type_identity"s << std::endl;
  {
    using namespace utid;

//    foo(4.2, 1); // error, deduced conflicting types for 'T'
    std::cout << bar(4.2, 1) << '\n';  // OK, calls bar<double>

    std::cout << baz(42, 28) << '\n';
  }
  std::cout << std::endl; //  make sure cout is flushed.

  return 0;
}

//  MARK: - U_bind
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  MARK: namespace ubind
namespace ubind {

void f_fun(int n1, int n2, int n3, int const & n4, int n5) {
  std::cout << n1 << ' ' << n2 << ' ' << n3 << ' ' << n4 << ' ' << n5 << '\n';
}

int g_fun(int n1) {
  return n1;
}

struct Foo {
  void print_sum(int n1, int n2) {
    std::cout << n1 + n2 << '\n';
  }

  int data = 10;
};

} /* namespace ubind */

//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  MARK: namespace ubin0
namespace ubin0 {

struct MyBind {
  typedef int result_type;
  int operator()(int a, int b) const {
    return a + b;
  }
};

int f_bind(int n1, int n2) {
  return n1 + n2;
}

} /* namespace ubin0 */

//  namespace std:: extension
namespace std {

template<>
struct is_bind_expression<ubin0::MyBind> : public true_type {};

}

//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  MARK: namespace ubin1
namespace ubin1 {

//  custom placeholder
struct My_2 {} my_2;

int f_bind(int n1, int n2) {
  return n1 + n2;
}

} /* namespace ubin1 */

//  namespace std:: extension
namespace std {
  template<>
  struct is_placeholder<ubin1::My_2> : public integral_constant<int, 2> {};
}

//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  MARK: namespace ubin2
namespace ubin2 {

void goodbye(const std::string & sr) {
  std::cout << "Goodbye "s << sr << '\n';
}

class Object {
public:
  void hello(const std::string & sr) {
    std::cout << "Hello "s << sr << '\n';
  }
};

} /* namespace ubin2 */


//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: U_bind()
 */
auto U_bind(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::bind"s << std::endl;
  {
//    using namespace ubind;
    using namespace std::placeholders;  // for _1, _2, _3...

    // demonstrates argument reordering and pass-by-reference
    int nr = 7;
    // (_1 and _2 are from std::placeholders, and represent future
    // arguments that will be passed to f1)
    auto f1 = std::bind(ubind::f_fun, _2, 42, _1, std::cref(nr), nr);
    nr = 10;
    f1(1, 2, 1001); // 1 is bound by _1, 2 is bound by _2, 1001 is unused
                    // makes a call to f_fun(2, 42, 1, nr, 7)

    // nested bind subexpressions share the placeholders
    auto f2 = std::bind(ubind::f_fun, _3, std::bind(ubind::g_fun, _3), _3, 4, 5);
    f2(10, 11, 12); // makes a call to f_fun(12, g_fun(12), 12, 4, 5);

    // common use case: binding a RNG with a distribution
    std::default_random_engine dre;
    std::uniform_int_distribution<> uidis(0, 10);
    auto rnd = std::bind(uidis, dre); // a copy of dre is stored in rnd
    for (int n = 0; n < 10; ++n) {
      std::cout << rnd() << ' ';
    }
    std::cout << '\n';

    // bind to a pointer to member function
    ubind::Foo foo;
    auto f3 = std::bind(&ubind::Foo::print_sum, &foo, 95, _1);
    f3(5);

    // bind to a pointer to data member
    auto f4 = std::bind(&ubind::Foo::data, _1);
    std::cout << f4(foo) << '\n';

    // smart pointers can be used to call members of the referenced objects, too
    std::cout << f4(std::make_shared<ubind::Foo>(foo)) << '\n'
              << f4(std::make_unique<ubind::Foo>(foo)) << '\n';
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::is_bind_expression"s << std::endl;
  {
    // as if bind(f, bind(MyBind(), _1, _2), 2)
    auto b_bind = std::bind(ubin0::f_bind, ubin0::MyBind(), 2);

    std::cout << "Adding 2 to the sum of 10 and 11 gives "s << b_bind(10, 11) << '\n';
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::is_placeholder"s << std::endl;
  {
    std::cout << "Standard placeholder _5 is for the argument number "s
              << std::is_placeholder<decltype(std::placeholders::_5)>::value
              << '\n';

    auto bound = std::bind(ubin1::f_bind, ubin1::my_2, 2);
    std::cout << "Adding 2 to 11 selected with a custom placeholder gives "s
              << bound(10, 11) // the first argument, namely 10, is ignored
              << '\n';
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::placeholders::_1, ..."s << std::endl;
  {
    using ExampleFunction = std::function<void(const std::string &)>;
    ubin2::Object instance;
    std::string str("World");
    ExampleFunction fn = std::bind(&ubin2::Object::hello, &instance, std::placeholders::_1);

    // equivalent to instance.hello(str)
    fn(str);
    fn = std::bind(&ubin2::goodbye, std::placeholders::_1);

    // equivalent to goodbye(str)
    fn(str);
  }
  std::cout << std::endl; //  make sure cout is flushed.

  return 0;
}

//  MARK: - U_searchers
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: U_searchers()
 */
auto U_searchers(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::default_searcher"s << std::endl;
  {
    std::string in = "Lorem ipsum dolor sit amet, consectetur adipiscing elit,"s
                     " sed do eiusmod tempor incididunt ut labore et dolore magna aliqua"s;
    std::string needle = "pisci"s;
    auto it = std::search(in.begin(), in.end(),
                          std::default_searcher(needle.begin(), needle.end()));
    if (it != in.end()) {
      std::cout << "The string "s << needle << " found at offset "s
                << it - in.begin() << '\n';
    }
    else {
      std::cout << "The string " << needle << " not found\n"s;
    }
  }
  std::cout << std::endl; //  make sure cout is flushed.

#if (__cplusplus > 201707L)
  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::boyer_moore_searcher"s << std::endl;
  {
    std::string in = "Lorem ipsum dolor sit amet, consectetur adipiscing elit,"s
                     " sed do eiusmod tempor incididunt ut labore et dolore magna aliqua"s;
    std::string needle = "pisci"s;
    auto it = std::search(in.begin(), in.end(),
                          std::boyer_moore_searcher(needle.begin(), needle.end()));
    if (it != in.end()) {
        std::cout << "The string " << needle << " found at offset "
                  << it - in.begin() << '\n';
    }
    else {
        std::cout << "The string " << needle << " not found\n";
    }
  }
  std::cout << std::endl; //  make sure cout is flushed.
#endif  /* (__cplusplus > 201707L) */

#if (__cplusplus > 201707L)
  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::boyer_moore_horspool_searcher"s << std::endl;
  {
    std::string in = "Lorem ipsum dolor sit amet, consectetur adipiscing elit,"s
                     " sed do eiusmod tempor incididunt ut labore et dolore magna aliqua"s;
    std::string needle = "pisci"s;
    auto it = std::search(in.begin(), in.end(),
                          std::boyer_moore_horspool_searcher(needle.begin(), needle.end()));
    if (it != in.end()) {
      std::cout << "The string " << needle << " found at offset "
                << it - in.begin() << '\n';
    }
    else {
      std::cout << "The string " << needle << " not found\n";
    }
  }
  std::cout << std::endl; //  make sure cout is flushed.
#endif  /* (__cplusplus > 201707L) */

  return 0;
}

//  MARK: - U_reference_wrapper
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
namespace urw0 {

void f1() {
  std::cout << "reference to function called\n"s;
}

void f2(int nr) {
  std::cout << "bind expression called with "s << nr << " as the argument\n"s;
}

void fn(int & n1, int & n2, const int & n3) {
  std::cout << "In function: "s << n1 << ' ' << n2 << ' ' << n3 << '\n';
  ++n1; // increments the copy of n1 stored in the function object
  ++n2; // increments the main()'s n2
  // ++n3; // compile error
}

} /* namespace urw0 */

//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: U_reference_wrapper()
 */
auto U_reference_wrapper(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::reference_wrapper"s << std::endl;
  {
    auto pv = [](auto iv) {
      std::cout << std::setw(4) << iv;
    };

    std::list<int> lrw(10);

    std::iota(lrw.begin(), lrw.end(), -4);
    std::vector<std::reference_wrapper<int>> vrw(lrw.begin(), lrw.end());

    // can't use shuffle on a list (requires random access), but can use it on a vector
    std::shuffle(vrw.begin(), vrw.end(), std::mt19937{ std::random_device{}() });

    std::cout << "Contents of the list: "s;
    std::for_each(lrw.cbegin(), lrw.cend(), pv);
    std::cout << std::endl;

    std::cout << "\nContents of the list, as seen through a shuffled vector: "s;
    std::for_each(vrw.cbegin(), vrw.cend(), pv);
    std::cout << std::endl;

    std::cout << "\n\nDoubling the values in the initial list...\n\n"s;
    std::transform(lrw.cbegin(), lrw.cend(), lrw.begin(), [](auto & ir) { return ir * 2; });

    std::cout << "Contents of the list, as seen through a shuffled vector: "s;
    std::for_each(vrw.cbegin(), vrw.cend(), pv);
    std::cout << std::endl;
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::reference_wrapper<T> - operator()"s << std::endl;
  {
    std::reference_wrapper<void()> ref1 = std::ref(urw0::f1);
    ref1();

    auto bfn = std::bind(urw0::f2, std::placeholders::_1);
    auto ref2 = std::ref(bfn);
    ref2(7);

    auto clda = []{ std::cout << "lambda function called\n"s; };
    auto ref3 = std::ref(clda);
    ref3();
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::reference_wrapper<T> - std::ref, std::cref"s << std::endl;
  {
    int n1 = 1, n2 = 2, n3 = 3;
    std::function<void()> bound_f = std::bind(urw0::fn, n1, std::ref(n2), std::cref(n3));
    n1 = 10;
    n2 = 11;
    n3 = 12;
    std::cout << "Before function: "s << n1 << ' ' << n2 << ' ' << n3 << '\n';
    bound_f();
    std::cout << "After function:  "s << n1 << ' ' << n2 << ' ' << n3 << '\n';
  }
  std::cout << std::endl; //  make sure cout is flushed.

  return 0;
}

//  MARK: - U_operator_functions
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  MARK: namespace uof0
namespace uof0 {

template <typename A, typename B, typename U = std::less<>>
bool f_bf(A av, B bv, U uo = U()) {
  return uo(av, bv);
}

template <typename A, typename B, typename U = std::plus<>>
A f_af(A av, B bv, U uo = U()) {
  return uo(av, bv);
}

template <typename A, typename U = std::negate<>>
A f_uf(A av, U uo = U()) {
  return uo(av);
}

} /* namespace uof0 */

//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: U_operator_functions()
 */
auto U_operator_functions(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::Operator function objects"s << std::endl;
  {
    std::cout << std::boolalpha;

    auto pr = [](auto const & tt, auto il, auto ir) {
      std::cout << tt << std::setw(4) << il << ',' << std::setw(4) << ir << '\n';
    };

    // ....+....|....+....|....+....|....+....|....+....|....+....|
    //  Comparisons
    pr("std::less<>: "s, 5, 20);
    std::cout << uof0::f_bf(5, 20) << '\n';
    pr("std::less<>: "s, 100, 10);
    std::cout << uof0::f_bf(100, 10) << '\n';

    pr("std::less_equal<>: "s, 5, 20);
    std::cout << uof0::f_bf<int, int, std::less_equal<>>(5, 20) << '\n';
    pr("std::less_equal<>: "s, 100, 10);
    std::cout << uof0::f_bf<int, int, std::less_equal<>>(100, 10) << '\n';

    pr("std::greater_equal<>: "s, 5, 20);
    std::cout << uof0::f_bf<int, int, std::greater_equal<>>(2, 20) << '\n';
    pr("std::greater_equal<>: "s, 100, 10);
    std::cout << uof0::f_bf<int, int, std::greater_equal<>>(100, 10) << '\n';

    pr("std::equal_to<>: "s, 2, 2);
    std::cout << uof0::f_bf<int, int, std::equal_to<>>(2, 2) << '\n';
    pr("std::equal_to<>: "s, 100, 10);
    std::cout << uof0::f_bf<int, int, std::equal_to<>>(100, 10) << '\n';

    pr("std::not_equal_to<>: "s, 2, 2);
    std::cout << uof0::f_bf<int, int, std::not_equal_to<>>(2, 2) << '\n';
    pr("std::not_equal_to<>: "s, 100, 10);
    std::cout << uof0::f_bf<int, int, std::not_equal_to<>>(100, 10) << '\n';

    // ....+....|....+....|....+....|....+....|....+....|....+....|
    //  Arithmetic operations
    pr("std::plus<>: "s, 20, 7);
    std::cout << uof0::f_af(20, 7) << '\n';

    pr("std::minus<>: "s, 20, 7);
    std::cout << uof0::f_af<int, int, std::minus<>>(20, 7) << '\n';

    pr("std::multiplies<>: "s, 20, 7);
    std::cout << uof0::f_af<int, int, std::multiplies<>>(20, 7) << '\n';

    pr("std::divides<>: "s, 20, 7);
    std::cout << uof0::f_af<int, int, std::divides<>>(20, 7) << '\n';

    pr("std::modulus<>: "s, 20, 7);
    std::cout << uof0::f_af<int, int, std::modulus<>>(20, 7) << '\n';

    // ....+....|....+....|....+....|....+....|....+....|....+....|
    pr("std::negate<>: "s, 20, ' ');
    std::cout << uof0::f_uf(20) << '\n';

    pr("std::negate<>: "s, -20, ' ');
    std::cout << uof0::f_uf(-20) << '\n';

    // ....+....|....+....|....+....|....+....|....+....|....+....|
    //  Logical operations
    pr("std::logical_and<>: "s, false, true);
    std::cout << uof0::f_bf<bool, bool, std::logical_and<>>(false, true) << '\n';

    pr("std::logical_and<>: "s, true, false);
    std::cout << uof0::f_bf<bool, bool, std::logical_and<>>(true, false) << '\n';

    pr("std::logical_and<>: "s, true, true);
    std::cout << uof0::f_bf<bool, bool, std::logical_and<>>(true, true) << '\n';

    pr("std::logical_and<>: "s, false, false);
    std::cout << uof0::f_bf<bool, bool, std::logical_and<>>(false, false) << '\n';

    pr("std::logical_or<>: "s, false, true);
    std::cout << uof0::f_bf<bool, bool, std::logical_or<>>(false, true) << '\n';

    pr("std::logical_or<>: "s, true, false);
    std::cout << uof0::f_bf<bool, bool, std::logical_or<>>(true, false) << '\n';

    pr("std::logical_or<>: "s, true, true);
    std::cout << uof0::f_bf<bool, bool, std::logical_or<>>(true, true) << '\n';

    pr("std::logical_or<>: "s, false, false);
    std::cout << uof0::f_bf<bool, bool, std::logical_or<>>(false, false) << '\n';

    // ....+....|....+....|....+....|....+....|....+....|....+....|
    pr("std::logical_not<>: "s, true, ' ');   // 1011 1101 ! 0100 0010
    std::cout << uof0::f_uf<bool, std::logical_not<>>(true) << '\n';

    pr("std::logical_not<>: "s, false, ' ');   // 1011 1101 ! 0100 0010
    std::cout << uof0::f_uf<bool, std::logical_not<>>(false) << '\n';

    // ....+....|....+....|....+....|....+....|....+....|....+....|
    //  Bitwise operations
    std::cout << std::hex;
    pr("std::bit_and<>: "s, 0b1101'1011, 0b1011'1101);
    std::cout << uof0::f_af<uint16_t, uint16_t, std::bit_and<>>(0b1101'1011, 0b1011'1101) << '\n';

    pr("std::bit_or<>: "s, 0b1101'1011, 0b1011'1101);
    std::cout << uof0::f_af<uint16_t, uint16_t, std::bit_or<>>(0b1101'1011, 0b1011'1101) << '\n';

    pr("std::bit_xor<>: "s, 0b1101'1011, 0b1011'1101);
    std::cout << uof0::f_af<uint16_t, uint16_t, std::bit_xor<>>(0b1101'1011, 0b1011'1101) << '\n';

    pr("std::bit_not<>: "s, 0b1101'1011, ' ');
    std::cout << uof0::f_uf<uint16_t, std::bit_not<>>(0b1101'1011) << '\n';
    std::cout << std::dec;
  }
  std::cout << std::endl; //  make sure cout is flushed.

  return 0;
}

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
  std::cout << konst::dot << '\n';
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

//  MARK: - U_byte
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: U_byte()
 */
auto U_byte(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::byte"s << std::endl;
  {
    auto pb = [](std::byte const & b_, auto const & type = std::hex) -> std::string {
      std::ostringstream os;
      os << type << std::to_integer<int>(b_);
      return os.str();
    };

    auto tb = [](auto const & b1, auto const & cs, auto const & b2,
                 auto const & type,
                 bool const bcp ) -> std::string {
      auto b1i = std::to_integer<int>(b1);
      auto b2i = std::to_integer<int>(b2);
      std::ostringstream os;
      os << type << b1i << cs << b2i << ' ' << std::boolalpha << bcp;
      return os.str();
    };

    std::byte b1 { 0b10'1010 }; //  42
    std::byte b2 { 0b01'1000 }; //  24

    std::cout << pb(b1, std::dec) << ' ' << pb(b2, std::dec) << '\n';
    std::cout << pb(b1, std::hex) << ' ' << pb(b2, std::hex) << '\n';
    std::cout << pb(b1, std::oct) << ' ' << pb(b2, std::oct) << '\n';
    std::cout << '\n';

    // b *= 2 compilation error
    b1 <<= 1;
    std::cout << pb(b1, std::dec) << '\n';
    std::cout << pb(b1, std::hex) << '\n';
    std::cout << pb(b1, std::oct) << '\n';
    std::cout << '\n';
    b1 >>= 1;

    std::cout << tb(b1, " == "s, b2, std::hex, std::is_eq(  b1 <=> b2)) << '\n';
    std::cout << tb(b1, " != "s, b2, std::hex, std::is_neq( b1 <=> b2)) << '\n';
    std::cout << tb(b1, " <  "s, b2, std::hex, std::is_lt(  b1 <=> b2)) << '\n';
    std::cout << tb(b1, " <= "s, b2, std::hex, std::is_lteq(b1 <=> b2)) << '\n';
    std::cout << tb(b1, " >  "s, b2, std::hex, std::is_gt(  b1 <=> b2)) << '\n';
    std::cout << tb(b1, " >= "s, b2, std::hex, std::is_gteq(b1 <=> b2)) << '\n';
    std::cout << '\n';

    b2 = b1;
    std::cout << tb(b1, " == "s, b2, std::hex, std::is_eq(  b1 <=> b2)) << '\n';
    std::cout << tb(b1, " != "s, b2, std::hex, std::is_neq( b1 <=> b2)) << '\n';
    std::cout << tb(b1, " <  "s, b2, std::hex, std::is_lt(  b1 <=> b2)) << '\n';
    std::cout << tb(b1, " <= "s, b2, std::hex, std::is_lteq(b1 <=> b2)) << '\n';
    std::cout << tb(b1, " >  "s, b2, std::hex, std::is_gt(  b1 <=> b2)) << '\n';
    std::cout << tb(b1, " >= "s, b2, std::hex, std::is_gteq(b1 <=> b2)) << '\n';
    std::cout << '\n';
  }
  std::cout << std::endl; //  make sure cout is flushed.

  return 0;
}
