//
//  optional.hpp
//  CF.STL_Utility
//
//  Created by Alan Sampson on 3/16/21.
//

#pragma once
#ifndef optional_hpp
#define optional_hpp

#include "helper.hpp"

using namespace std::literals::string_literals;

//  MARK: - Definitions
auto U_optional(int argc, char const * argv[]) -> decltype(argc);

//  MARK: - U_optional
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  MARK: namespace uopt
namespace uopt {

// optional can be used as the return type of a factory that may fail
//std::optional<std::string> create(bool bc) {
//  if (bc) {
//    return "Godzilla"s;
//  }
//  return {};
//}

// optional can be used as the return type of a factory that may fail
[[maybe_unused]]
static
auto create(bool bc) -> std::optional<std::string>  {
  if (bc) {
    return "Godzilla"s;
  }
  return {};
}

// std::nullopt can be used to create any (empty) std::optional
[[maybe_unused]]
static
auto create2(bool bc2) {
  return bc2 ? std::optional<std::string>{"Godzilla"s} : std::nullopt;
}

// std::reference_wrapper may be used to return a reference
[[maybe_unused]]
static
auto create_ref(bool bcr) {
  static std::string value = "Godzilla"s;
  return bcr ? std::optional<std::reference_wrapper<std::string>>{value}
             : std::nullopt;
}

} /* namespace uopt */

//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  MARK: namespace uopv
namespace uopv {

std::optional<char const *> maybe_getenv(char const * nc);

} /* namespace uopv */

//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  MARK: namespace uopr
namespace uopr {

struct Aopr {
  std::string str_;
  Aopr(std::string str) : str_(std::move(str)) {
    std::cout << " constructed\n"s;
  }

  ~Aopr() {
    std::cout << " destructed\n"s;
  }

  Aopr(Aopr const & other) : str_(other.str_) {
    std::cout << " copy constructed\n"s;
  }

  Aopr(Aopr && other) : str_(std::move(other.str_)) {
    std::cout << " move constructed\n"s;
  }

  Aopr & operator=(Aopr const & other) {
    str_ = other.str_;
    std::cout << " copy assigned\n"s;
    return *this;
  }

  Aopr & operator=(Aopr && other) {
    str_ = std::move(other.str_);
    std::cout << " move assigned\n"s;
    return *this;
  }
};

} /* namespace uopr */

//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  MARK: namespace uope
namespace uope {

struct Aope {
  std::string str_;
  Aope(std::string str) : str_(std::move(str)) {
    std::cout << " constructed\n"s;
  }

  ~Aope() {
    std::cout << " destructed\n"s;
  }

  Aope(Aope const & other) : str_(other.str_) {
    std::cout << " copy constructed\n"s;
  }

  Aope(Aope && other) : str_(std::move(other.str_)) {
    std::cout << " move constructed\n"s;
  }

  Aope & operator=(Aope const & other) {
    str_ = other.str_;
    std::cout << " copy assigned\n"s;
    return *this;
  }

  Aope & operator=(Aope && other) {
    str_ = std::move(other.str_);
    std::cout << " move assigned\n"s;
    return *this;
  }
};

} /* namespace uope */

#endif /* optional_hpp */
