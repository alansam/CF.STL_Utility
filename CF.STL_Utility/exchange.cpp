//
//  exchange.cpp
//  CF.STL_Utility
//
//  Created by Alan Sampson on 3/16/21.
//

#include "exchange.hpp"

using namespace std::literals::string_literals;

//  MARK: - U_exchange
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
auto U_exchange(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
  {
    uxc::stream sux;

    std::cout << std::setw(3) << sux.flags()   << '\n';
    std::cout << std::setw(3) << sux.flags(12) << '\n';
    std::cout << std::setw(3) << sux.flags()   << "\n\n"s;

    std::vector<int> vux;

    // Since the second template parameter has a default value, it is possible
    // to use a braced-init-list as second argument. The expression below
    // is equivalent to std::exchange(vux, std::vector<int>{1,2,3,4});

    std::exchange(vux, { 1, 2, 3, 4, });

    std::copy(begin(vux), end(vux), std::ostream_iterator<int>(std::cout, ", "));
    std::cout << "\n\n"s;

    void (*fun)();

    // the default value of template parameter also makes possible to use a
    // normal function as second argument. The expression below is equivalent to
    // std::exchange(fun, static_cast<void(*)()>(f_exch))
    std::exchange(fun, uxc::f_exch);
    fun();
  }
  std::cout << std::endl; //  make sure cout is flushed.

  return 0;
}

//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  MARK: namespace uxc
namespace uxc {
 
void f_exch() {
  std::cout << __func__ << "()"s;
}

} /* namespace uxc */
