//
//  bind.cpp
//  CF.STL_Utility
//
//  Created by Alan Sampson on 3/16/21.
//

#include "bind.hpp"

using namespace std::literals::string_literals;

//  MARK: - U_bind
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: U_bind()
 */
auto U_bind(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
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
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
  std::cout << "std::is_bind_expression"s << std::endl;
  {
    // as if bind(f, bind(MyBind(), _1, _2), 2)
    auto b_bind = std::bind(ubin0::f_bind, ubin0::MyBind(), 2);

    std::cout << "Adding 2 to the sum of 10 and 11 gives "s << b_bind(10, 11) << '\n';
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
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
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
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

} /* namespace ubind */

//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  MARK: namespace ubin0
namespace ubin0 {

int f_bind(int n1, int n2) {
  return n1 + n2;
}

} /* namespace ubin0 */

//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  MARK: namespace ubin1
namespace ubin1 {

int f_bind(int n1, int n2) {
  return n1 + n2;
}

} /* namespace ubin1 */

//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  MARK: namespace ubin2
namespace ubin2 {

void goodbye(const std::string & sr) {
  std::cout << "Goodbye "s << sr << '\n';
}

} /* namespace ubin2 */
