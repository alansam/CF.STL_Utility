//
//  main.cpp
//  CF.STL_Utility
//
//  Created by Alan Sampson on 3/8/21.
//
//  MARK: - Reference.
//  @see: https://en.cppreference.com/w/cpp/utility
//

#include "helper.hpp"

#include "initializer_list.hpp"
#include "swap.hpp"
#include "iter_swap.hpp"
#include "swap_ranges.hpp"
#include "exchange.hpp"
#include "forward.hpp"
#include "move.hpp"
#include "move_if_noexcept.hpp"
#include "as_const.hpp"
#include "declval.hpp"
#include "to_underlying.hpp"
#include "underlying_type.hpp"
#include "is_enum.hpp"
#include "in_range.hpp"
#include "pair.hpp"
#include "piecewise_construct_t.hpp"
#include "integer_sequence.hpp"
#include "apply.hpp"
#include "tuple.hpp"
#include "make_from_tuple.hpp"
#include "optional.hpp"
#include "variant.hpp"
#include "any.hpp"
#include "function.hpp"
#include "type_identity.hpp"
#include "bind.hpp"
#include "searchers.hpp"
#include "reference_wrapper.hpp"
#include "operator_functions.hpp"
#include "string_conversions.hpp"
#include "byte.hpp"

using namespace std::literals::string_literals;

//  MARK: - Definitions

//  MARK: - Local Constants.
namespace konst {

static
auto const dlm = delimiter();

static
auto const dot = delimiter('.');

} /* namespace konst */

//  MARK: - Implementation.
/*
 *  MARK: main()
 */
int main(int argc, const char * argv[]) {
  std::cout << "CF.STL_Utility"s << std::endl;
  std::cout << "C++ Version: "s << __cplusplus << std::endl;

  std::cout << '\n' << konst::dlm << std::endl;
  U_initializer_list(argc, argv);

  std::cout << '\n' << konst::dlm << std::endl;
  U_swap(argc, argv);

  std::cout << '\n' << konst::dlm << std::endl;
  U_iter_swap(argc, argv);

  std::cout << '\n' << konst::dlm << std::endl;
  U_swap_ranges(argc, argv);

  std::cout << '\n' << konst::dlm << std::endl;
  U_exchange(argc, argv);

  std::cout << '\n' << konst::dlm << std::endl;
  U_forward(argc, argv);

  std::cout << '\n' << konst::dlm << std::endl;
  U_move(argc, argv);

  std::cout << '\n' << konst::dlm << std::endl;
  U_move_if_noexcept(argc, argv);

  std::cout << '\n' << konst::dlm << std::endl;
  U_as_const(argc, argv);

  std::cout << '\n' << konst::dlm << std::endl;
  U_declval(argc, argv);

#if (__cplusplus > 201707L)
  std::cout << '\n' << konst::dlm << std::endl; //  C++23
  U_to_underlying(argc, argv);
#endif

  std::cout << '\n' << konst::dlm << std::endl;
  U_underlying_type(argc, argv);

  std::cout << '\n' << konst::dlm << std::endl;
  U_is_enum(argc, argv);

#if (__cplusplus > 201707L)
  std::cout << '\n' << konst::dlm << std::endl;
  U_in_range(argc, argv);
#endif

  std::cout << '\n' << konst::dlm << std::endl;
  U_pair(argc, argv);

  std::cout << '\n' << konst::dlm << std::endl;
  U_piecewise_construct_t(argc, argv);

  std::cout << '\n' << konst::dlm << std::endl;
  U_integer_sequence(argc, argv);

  std::cout << '\n' << konst::dlm << std::endl;
  U_apply(argc, argv);

  std::cout << '\n' << konst::dlm << std::endl;
  U_tuple(argc, argv);

  std::cout << '\n' << konst::dlm << std::endl;
  U_make_from_tuple(argc, argv);

  std::cout << '\n' << konst::dlm << std::endl;
  U_optional(argc, argv);

  std::cout << '\n' << konst::dlm << std::endl;
  U_variant(argc, argv);

  std::cout << '\n' << konst::dlm << std::endl;
  U_any(argc, argv);

  std::cout << '\n' << konst::dlm << std::endl;
  U_function(argc, argv);

  std::cout << '\n' << konst::dlm << std::endl;
  U_type_identity(argc, argv);

  std::cout << '\n' << konst::dlm << std::endl;
  U_bind(argc, argv);

  std::cout << '\n' << konst::dlm << std::endl;
  U_searchers(argc, argv);

  std::cout << '\n' << konst::dlm << std::endl;
  U_reference_wrapper(argc, argv);

  std::cout << '\n' << konst::dlm << std::endl;
  U_operator_functions(argc, argv);

  std::cout << '\n' << konst::dlm << std::endl;
  U_string_conversions(argc, argv);

  std::cout << '\n' << konst::dlm << std::endl;
  U_byte(argc, argv);

  return 0;
}
