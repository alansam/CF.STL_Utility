//
//  tuple.cpp
//  CF.STL_Utility
//
//  Created by Alan Sampson on 3/16/21.
//

#include "tuple.hpp"

//  MARK: - U_tuple
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: U_tuple()
 */
auto U_tuple(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
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
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
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
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
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
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
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
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
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
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
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
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
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
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
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
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
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
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
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
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
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
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
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
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
  std::cout << "std::tuple - tuple_element"s << std::endl;
  {
    std::cout << std::boolalpha;
    utu6::type_list<int, char, bool>::type<2> x = true;
    std::cout << x << '\n';
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
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

} /* namespace utu1 */

//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  MARK: namespace utu3
namespace utu3 {

std::tuple<int, int> f_tupl() {  // this function returns multiple values
    int xv = 5;
    return std::make_tuple(xv, 7); // return {x,7}; in C++17
}

} /* namespace utu3 */
