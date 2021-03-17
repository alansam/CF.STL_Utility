//
//  variant.cpp
//  CF.STL_Utility
//
//  Created by Alan Sampson on 3/16/21.
//

#include "variant.hpp"

using namespace std::literals::string_literals;

//  MARK: - U_variant
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: U_variant()
 */
auto U_variant(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
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
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
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
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
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
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
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
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
  std::cout << "std::variant - index"s << std::endl;
  {
    std::variant<int, std::string> vv = "abc"s;

    std::cout << "vv.index = "s << vv.index() << '\n';

    vv = {};

    std::cout << "vv.index = "s << vv.index() << '\n';
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
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
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
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
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
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
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
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
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
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
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
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
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
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
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
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
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
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
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
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
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
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
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
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
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
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
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
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

//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
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
