//
//  operator_functions.cpp
//  CF.STL_Utility
//
//  Created by Alan Sampson on 3/16/21.
//

#include "operator_functions.hpp"

using namespace std::literals::string_literals;

//  MARK: - U_operator_functions
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================

//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: U_operator_functions()
 */
auto U_operator_functions(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
  std::cout << "std::Operator function objects"s << std::endl;
  {
    std::cout << std::boolalpha;

    auto pr = [](auto const & tt, auto il, auto ir) {
      std::cout << tt << std::setw(4) << il << ',' << std::setw(4) << ir << '\n';
    };

    // ....+....|....+....|....+....|....+....|....+....|....+....|
    //  Comparisons
    pr("std::less<>: "s, 5, 20);
    std::cout << uof0::f_bf(5, 20) << '\n';
    pr("std::less<>: "s, 100, 10);
    std::cout << uof0::f_bf(100, 10) << '\n';

    pr("std::less_equal<>: "s, 5, 20);
    std::cout << uof0::f_bf<int, int, std::less_equal<>>(5, 20) << '\n';
    pr("std::less_equal<>: "s, 100, 10);
    std::cout << uof0::f_bf<int, int, std::less_equal<>>(100, 10) << '\n';

    pr("std::greater_equal<>: "s, 5, 20);
    std::cout << uof0::f_bf<int, int, std::greater_equal<>>(2, 20) << '\n';
    pr("std::greater_equal<>: "s, 100, 10);
    std::cout << uof0::f_bf<int, int, std::greater_equal<>>(100, 10) << '\n';

    pr("std::equal_to<>: "s, 2, 2);
    std::cout << uof0::f_bf<int, int, std::equal_to<>>(2, 2) << '\n';
    pr("std::equal_to<>: "s, 100, 10);
    std::cout << uof0::f_bf<int, int, std::equal_to<>>(100, 10) << '\n';

    pr("std::not_equal_to<>: "s, 2, 2);
    std::cout << uof0::f_bf<int, int, std::not_equal_to<>>(2, 2) << '\n';
    pr("std::not_equal_to<>: "s, 100, 10);
    std::cout << uof0::f_bf<int, int, std::not_equal_to<>>(100, 10) << '\n';

    // ....+....|....+....|....+....|....+....|....+....|....+....|
    //  Arithmetic operations
    pr("std::plus<>: "s, 20, 7);
    std::cout << uof0::f_af(20, 7) << '\n';

    pr("std::minus<>: "s, 20, 7);
    std::cout << uof0::f_af<int, int, std::minus<>>(20, 7) << '\n';

    pr("std::multiplies<>: "s, 20, 7);
    std::cout << uof0::f_af<int, int, std::multiplies<>>(20, 7) << '\n';

    pr("std::divides<>: "s, 20, 7);
    std::cout << uof0::f_af<int, int, std::divides<>>(20, 7) << '\n';

    pr("std::modulus<>: "s, 20, 7);
    std::cout << uof0::f_af<int, int, std::modulus<>>(20, 7) << '\n';

    // ....+....|....+....|....+....|....+....|....+....|....+....|
    pr("std::negate<>: "s, 20, ' ');
    std::cout << uof0::f_uf(20) << '\n';

    pr("std::negate<>: "s, -20, ' ');
    std::cout << uof0::f_uf(-20) << '\n';

    // ....+....|....+....|....+....|....+....|....+....|....+....|
    //  Logical operations
    pr("std::logical_and<>: "s, false, true);
    std::cout << uof0::f_bf<bool, bool, std::logical_and<>>(false, true) << '\n';

    pr("std::logical_and<>: "s, true, false);
    std::cout << uof0::f_bf<bool, bool, std::logical_and<>>(true, false) << '\n';

    pr("std::logical_and<>: "s, true, true);
    std::cout << uof0::f_bf<bool, bool, std::logical_and<>>(true, true) << '\n';

    pr("std::logical_and<>: "s, false, false);
    std::cout << uof0::f_bf<bool, bool, std::logical_and<>>(false, false) << '\n';

    pr("std::logical_or<>: "s, false, true);
    std::cout << uof0::f_bf<bool, bool, std::logical_or<>>(false, true) << '\n';

    pr("std::logical_or<>: "s, true, false);
    std::cout << uof0::f_bf<bool, bool, std::logical_or<>>(true, false) << '\n';

    pr("std::logical_or<>: "s, true, true);
    std::cout << uof0::f_bf<bool, bool, std::logical_or<>>(true, true) << '\n';

    pr("std::logical_or<>: "s, false, false);
    std::cout << uof0::f_bf<bool, bool, std::logical_or<>>(false, false) << '\n';

    // ....+....|....+....|....+....|....+....|....+....|....+....|
    pr("std::logical_not<>: "s, true, ' ');   // 1011 1101 ! 0100 0010
    std::cout << uof0::f_uf<bool, std::logical_not<>>(true) << '\n';

    pr("std::logical_not<>: "s, false, ' ');   // 1011 1101 ! 0100 0010
    std::cout << uof0::f_uf<bool, std::logical_not<>>(false) << '\n';

    // ....+....|....+....|....+....|....+....|....+....|....+....|
    //  Bitwise operations
    std::cout << std::hex;
    pr("std::bit_and<>: "s, 0b1101'1011, 0b1011'1101);
    std::cout << uof0::f_af<uint16_t, uint16_t, std::bit_and<>>(0b1101'1011, 0b1011'1101) << '\n';

    pr("std::bit_or<>: "s, 0b1101'1011, 0b1011'1101);
    std::cout << uof0::f_af<uint16_t, uint16_t, std::bit_or<>>(0b1101'1011, 0b1011'1101) << '\n';

    pr("std::bit_xor<>: "s, 0b1101'1011, 0b1011'1101);
    std::cout << uof0::f_af<uint16_t, uint16_t, std::bit_xor<>>(0b1101'1011, 0b1011'1101) << '\n';

    pr("std::bit_not<>: "s, 0b1101'1011, ' ');
    std::cout << uof0::f_uf<uint16_t, std::bit_not<>>(0b1101'1011) << '\n';
    std::cout << std::dec;
  }
  std::cout << std::endl; //  make sure cout is flushed.

  return 0;
}
