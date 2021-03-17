//
//  any.hpp
//  CF.STL_Utility
//
//  Created by Alan Sampson on 3/16/21.
//

#ifndef any_hpp
#define any_hpp

#include "helper.hpp"

using namespace std::literals::string_literals;

//  MARK: - Definitions
auto U_any(int argc, char const * argv[]) -> decltype(argc);

//  MARK: - U_any
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  MARK: namespace uvrn0
namespace uany0 {

class Star {
  std::string name;
  int id;

public:
  Star(std::string name, int id) : name { name }, id { id } {
    std::cout << "Star::Star(string, int)\n"s;
  }

  void print() const {
    std::cout << "Star{ \"" << name << "\" : "s << id << " };\n"s;
  }
};

} /* namespace uany0 */

//  MARK: namespace uvrn1
namespace uany1 {

template<class T, class F>
inline std::pair<const std::type_index, std::function<void(std::any const &)>>
  to_any_visitor(F const & fav)
{
  return {
    std::type_index(typeid(T)), [g_fun = fav]( std::any const & ai) {
      if constexpr (std::is_void_v<T>) {
        g_fun();
      }
      else {
        g_fun(std::any_cast<T const&>(ai));
      }
    }
  };
}
 
static std::unordered_map<std::type_index, std::function<void(std::any const &)>>
  any_visitor {
    to_any_visitor<void>([] {
      std::cout << "{}"s;
    }),
    to_any_visitor<int>([](int xv) {
      std::cout << xv;
    }),
    to_any_visitor<unsigned>([](unsigned xv) {
      std::cout << xv;
    }),
    to_any_visitor<float>([](float xv) {
      std::cout << xv;
    }),
    to_any_visitor<double>([](double xv) {
      std::cout << xv;
    }),
    to_any_visitor<char const *>([](char const * sv) {
      std::cout << std::quoted(sv);
    }),
    // ... add more handlers for your types ...
  };
 
inline void process(std::any const & ap) {
  if (auto const it = any_visitor.find(std::type_index(ap.type())); it != any_visitor.cend()) {
    it->second(ap);
  }
  else {
    std::cout << "Unregistered type "s << std::quoted(ap.type().name());
  }
}
 
template<class T, class F>
inline void register_any_visitor(F const & frav) {
  std::cout << "Register visitor for type "s
            << std::quoted(typeid(T).name()) << '\n';
  any_visitor.insert(to_any_visitor<T>(frav));
}

} /* namespace uany1 */

#endif /* any_hpp */
