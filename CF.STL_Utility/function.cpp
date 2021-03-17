//
//  function.cpp
//  CF.STL_Utility
//
//  Created by Alan Sampson on 3/16/21.
//

#include "function.hpp"

using namespace std::literals::string_literals;

//  MARK: - U_function
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: U_function()
 */
auto U_function(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
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
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
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
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
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
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
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
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
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
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
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
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
  std::cout << "std::function - operator==, operator!="s << std::endl;
  {
    ufun6::Cfunc6 c1;
    ufun6::Cfunc6 c2(ufun6::user_func);
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
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
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
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
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
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
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
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
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
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

//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
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

void user_func(int i_) {
    std::cout << (i_ + 1) << '\n';
}

} /* namespace ufun6 */

//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  MARK: namespace ufun8
namespace ufun8 {

void print_num(int i_) {
  std::cout << i_ << '\n';
}

auto func2(char) -> int (*)() {
  return nullptr;
}

} /* namespace ufun8 */
