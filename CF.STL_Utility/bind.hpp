//
//  bind.hpp
//  CF.STL_Utility
//
//  Created by Alan Sampson on 3/16/21.
//

#pragma once
#ifndef bind_hpp
#define bind_hpp

#include "helper.hpp"

using namespace std::literals::string_literals;

//  MARK: - Definitions
auto U_bind(int argc, char const * argv[]) -> decltype(argc);

//  MARK: - U_bind
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  MARK: namespace ubind
namespace ubind {

void f_fun(int n1, int n2, int n3, int const & n4, int n5);

int g_fun(int n1);

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

int f_bind(int n1, int n2);

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
static
struct My_2 {} my_2;

int f_bind(int n1, int n2);

} /* namespace ubin1 */

//  namespace std:: extension
namespace std {
  template<>
  struct is_placeholder<ubin1::My_2> : public integral_constant<int, 2> {};
}

//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  MARK: namespace ubin2
namespace ubin2 {

void goodbye(const std::string & sr);

class Object {
public:
  void hello(const std::string & sr) {
    std::cout << "Hello "s << sr << '\n';
  }
};

} /* namespace ubin2 */

#endif /* bind_hpp */
