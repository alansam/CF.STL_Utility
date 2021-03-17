//
//  reference_wrapper.cpp
//  CF.STL_Utility
//
//  Created by Alan Sampson on 3/16/21.
//

#include "reference_wrapper.hpp"

using namespace std::literals::string_literals;

//  MARK: - U_reference_wrapper
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================

//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: U_reference_wrapper()
 */
auto U_reference_wrapper(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
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
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
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
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
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
