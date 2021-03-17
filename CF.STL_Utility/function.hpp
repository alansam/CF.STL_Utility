//
//  function.hpp
//  CF.STL_Utility
//
//  Created by Alan Sampson on 3/16/21.
//

#pragma once
#ifndef function_hpp
#define function_hpp

#include "helper.hpp"

using namespace std::literals::string_literals;

//  MARK: - Definitions
auto U_function(int argc, char const * argv[]) -> decltype(argc);

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

inline
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

void sampleFunction();

void checkFunc( std::function<void()> & func );

} /* namespace ufun1 */

//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  MARK: namespace ufun2
namespace ufun2 {

void call(std::function<int()> f);    // can be passed by value
 
int normal_function();

} /* namespace ufun2 */

//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  MARK: namespace ufun3
namespace ufun3 {

int f_fun(int a_);

void g_fun(double);

} /* namespace ufun3 */

//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  MARK: namespace ufun4
namespace ufun4 {

int f_fun(int, int);

int g_fun(int, int);

void test(std::function<int(int, int)> const & arg);

} /* namespace ufun4 */

//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  MARK: namespace ufun5
namespace ufun5 {

void foo(char const * str, int x_);

void bar(char const * str, int x_);

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

void user_func(int i_);

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

void print_num(int i_);

struct PrintNum {
  void operator()(int i_) const {
    std::cout << i_ << '\n';
  }
};

auto func2(char) -> int (*)();

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

#endif /* function_hpp */
