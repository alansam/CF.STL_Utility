//
//  pair.cpp
//  CF.STL_Utility
//
//  Created by Alan Sampson on 3/16/21.
//

#include "pair.hpp"

using namespace std::literals::string_literals;

//  MARK: - U_pair
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: U_pair()
 */
auto U_pair(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
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
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
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
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
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
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
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
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
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
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
  std::cout << "std::pair - get()"s << std::endl;
  {
    auto p1 = std::make_pair(1, 3.14159);
    std::cout << '(' << std::get<0>(p1) << ", "s << std::get<1>(p1) << ")\n"s;
    std::cout << '(' << std::get<int>(p1) << ", "s << std::get<double>(p1) << ")\n"s;
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
  std::cout << "std::pair - tuple_size()"s << std::endl;
  {
    up1::tuple_sz(std::make_tuple(1, 2, 3.14159));
    up1::tuple_sz(std::make_pair(1, 3.14159));
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
  std::cout << "std::pair - tuple_element()"s << std::endl;
  {
    auto var = std::make_pair(1, std::string{"one"s});

    std::cout << up1::get_val<0>(var) << " = "s << up1::get_val<1>(var);
  }
  std::cout << std::endl; //  make sure cout is flushed.

  return 0;
}
