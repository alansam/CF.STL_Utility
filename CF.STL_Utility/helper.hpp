//
//  helper.hpp
//  CF.STL_Utility
//
//  Created by Alan Sampson on 3/16/21.
//

#pragma once
#ifndef helper_h
#define helper_h

#include <iostream>
#include <iomanip>
#include <string>
#include <string_view>
#include <sstream>
#include <vector>
#include <array>
#include <deque>
#include <forward_list>
#include <list>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <stack>
#include <utility>
#include <algorithm>
#include <numeric>
#include <thread>
#include <chrono>
#include <tuple>
#include <optional>
#include <variant>
#include <initializer_list>
#include <iterator>
#include <functional>
#include <compare>
#include <memory>
#include <charconv>
#include <random>
#include <complex>
#include <type_traits>
#include <typeinfo>
#include <typeindex>
#include <any>
#include <stdexcept>
#include <cctype>
#include <clocale>
#include <cinttypes>

#if (__cplusplus > 201707L)

//  TODO: add samples when C++ version catches up
#include <source_location>
#include <coroutine>
#include <concepts>

#endif

namespace konst {

auto delimiter(char const dc = '-', size_t sl = 80) -> std::string const;

} /* namespace konst */

#endif /* helper_h */
