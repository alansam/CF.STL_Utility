//
//  any.cpp
//  CF.STL_Utility
//
//  Created by Alan Sampson on 3/16/21.
//

#include "any.hpp"

using namespace std::literals::string_literals;

//  MARK: - U_any
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================

//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: U_any()
 */
auto U_any(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
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
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
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
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
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
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
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
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
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
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
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
