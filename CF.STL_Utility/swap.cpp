//
//  swap.cpp
//  CF.STL_Utility
//
//  Created by Alan Sampson on 3/16/21.
//

#include "swap.hpp"

using namespace std::literals::string_literals;


//  MARK: - U_swap
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: U_swap()
 */
auto U_swap(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
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
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
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
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
  std::cout << "std::swap(std::array) specialization"s << std::endl;
  {
    std::array<int, 3> alice { 1, 2, 3, };
    std::array<int, 3> bob   { 7, 8, 9, };

    usw::array_like<std::array<int, 3>>(alice, bob);
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  //  TODO: std::swap(std::deque) specialization
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
  std::cout << "std::swap(std::deque) specialization"s << std::endl;
  {
    std::deque<int> alice { 1, 2, 3, };
    std::deque<int> bob   { 7, 8, 9, 10, };

    usw::array_like<std::deque<int>>(alice, bob);
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  //  TODO: std::swap(std::forward_list) specialization
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
  std::cout << "std::swap(std::forward_list) specialization"s << std::endl;
  {
    std::forward_list<int> alice { 1, 2, 3, };
    std::forward_list<int> bob   { 7, 8, 9, 10, };

    usw::array_like<std::forward_list<int>>(alice, bob);
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  //  TODO: std::swap(std::list) specialization
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
  std::cout << "std::swap(std::list) specialization"s << std::endl;
  {
    std::list<int> alice { 1, 2, 3, };
    std::list<int> bob   { 7, 8, 9, 10, };

    usw::array_like<std::list<int>>(alice, bob);
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  //  TODO: std::swap(std::map) specialization
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
  std::cout << "std::swap(std::map) specialization"s << std::endl;
  {
    std::map<int, char> alice{ { 1, 'a', }, { 2, 'b', }, { 3, 'c', }, };
    std::map<int, char> bob{ { 7, 'Z', }, { 8, 'Y', }, { 9, 'X', }, { 10, 'W', } };

    usw::map_like<std::map<int, char>>(alice, bob);
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  //  TODO: std::swap(std::multimap) specialization
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
  std::cout << "std::swap(std::multimap) specialization"s << std::endl;
  {
    std::multimap<int, char> alice{ { 1, 'a', }, { 2, 'b', }, { 3, 'c', }, };
    std::multimap<int, char> bob{ { 7, 'Z', }, { 8, 'Y', }, { 9, 'X', }, { 10, 'W', }, };

    usw::map_like<std::multimap<int, char>>(alice, bob);
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  //  TODO: std::swap(std::set) specialization
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
  std::cout << "std::swap(std::set) specialization"s << std::endl;
  {
    std::set<int> alice { 1, 2, 3, };
    std::set<int> bob   { 7, 8, 9, 10, };

    usw::array_like<std::set<int>>(alice, bob);
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  //  TODO: std::swap(std::multiset) specialization
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
  std::cout << "std::swap(std::multiset) specialization"s << std::endl;
  {
    std::multiset<int> alice { 1, 2, 3, };
    std::multiset<int> bob   { 7, 8, 9, 10, };

    usw::array_like<std::multiset<int>>(alice, bob);
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  //  TODO: std::swap(std::unordered_map) specialization
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
  std::cout << "std::swap(std::unordered_map) specialization"s << std::endl;
  {
    std::unordered_map<int, char> alice{ { 1, 'a', }, { 2, 'b', }, { 3, 'c', }, };
    std::unordered_map<int, char> bob{ { 7, 'Z', }, { 8, 'Y', }, { 9, 'X', }, { 10, 'W', } };

    usw::map_like<std::unordered_map<int, char>>(alice, bob);
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  //  TODO: std::swap(std::unordered_multimap) specialization
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
  std::cout << "std::swap(std::unordered_multimap) specialization"s << std::endl;
  {
    std::unordered_multimap<int, char> alice{ { 1, 'a', }, { 2, 'b', }, { 3, 'c', }, };
    std::unordered_multimap<int, char> bob{ { 7, 'Z', }, { 8, 'Y', }, { 9, 'X', }, { 10, 'W', } };

    usw::map_like<std::unordered_multimap<int, char>>(alice, bob);
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  //  TODO: std::swap(std::unordered_set) specialization
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
  std::cout << "std::swap(std::unordered_set) specialization"s << std::endl;
  {
    std::unordered_set<int> alice { 1, 2, 3, };
    std::unordered_set<int> bob   { 7, 8, 9, 10, };

    usw::array_like<std::unordered_set<int>>(alice, bob);
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  //  TODO: std::swap(std::unordered_multiset) specialization
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
  std::cout << "std::swap(std::unordered_multiset) specialization"s << std::endl;
  {
    std::unordered_multiset<int> alice { 1, 2, 3, };
    std::unordered_multiset<int> bob   { 7, 8, 9, 10, };

    usw::array_like<std::unordered_multiset<int>>(alice, bob);
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  //  TODO: std::swap(std::queue) specialization
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
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
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
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
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
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
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
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
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
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
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
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
