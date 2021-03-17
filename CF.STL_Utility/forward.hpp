//
//  forward.hpp
//  CF.STL_Utility
//
//  Created by Alan Sampson on 3/16/21.
//

#pragma once
#ifndef forward_hpp
#define forward_hpp

#include "helper.hpp"

using namespace std::literals::string_literals;

auto U_forward(int argc, char const * argv[]) -> decltype(argc);

//  MARK: - U_forward
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//
//  MARK: namespace ufw
namespace ufw {

struct Afwd {
  Afwd() {
    std::cout << __func__ << "()\n"s;
  }
  Afwd(int && nrval) {
    std::cout << __func__ << "(int &&), "s;
    std::cout << "rvalue overload, nrval="s << nrval << "\n"s;
  }
  Afwd(int & nlval) {
    std::cout << __func__ << "(int &),  "s;
    std::cout << "lvalue overload, nlval="s << nlval << "\n"s;
  }
};

class Bfwd {
public:
  Bfwd() {
    std::cout << __func__ << "(), "s;
  }
  template<class T1, class T2, class T3>
  Bfwd(T1 && t1, T2 && t2, T3 && t3) :
      a1_{std::forward<T1>(t1)},
      a2_{std::forward<T2>(t2)},
      a3_{std::forward<T3>(t3)} {
    std::cout << __func__ << "(T1 &&, T2 &&, T3 &&)\n"s;
  }

private:
  Afwd a1_, a2_, a3_;
};

template<class T, class U>
std::unique_ptr<T> make_unique1(U && unq) {
  std::cout << __func__ << '\n';
  return std::unique_ptr<T>(new T(std::forward<U>(unq)));
}

template<class T, class... U>
std::unique_ptr<T> make_unique2(U &&... unq) {
  std::cout << __func__ << '\n';
  return std::unique_ptr<T>(new T(std::forward<U>(unq)...));
}

} /* namespace ufw */

#endif /* forward_hpp */
