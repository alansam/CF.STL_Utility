//
//  optional.cpp
//  CF.STL_Utility
//
//  Created by Alan Sampson on 3/16/21.
//

#include "optional.hpp"

using namespace std::literals::string_literals;

//  MARK: - U_optional
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: U_optional()
 */
auto U_optional(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
  std::cout << "std::optional"s << std::endl;
  {
    std::cout << "create(false) returned "s
              << uopt::create(false).value_or("empty"s) << '\n';

    // optional-returning factory functions are usable as conditions of while and if
    if (auto str = uopt::create2(true)) {
      std::cout << "create2(true) returned "s << *str << '\n';
    }

    if (auto str = uopt::create_ref(true)) {
      // using get() to access the reference_wrapper's value
      std::cout << "create_ref(true) returned "s << str->get() << '\n';
      str->get() = "Mothra"s;
      std::cout << "modifying it changed it to "s << str->get() << '\n';
    }
  }
  std::cout << std::endl; //  make sure cout is flushed.
  
  // ....+....|....+....|....+....|....+....|....+....|....+....|
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
  std::cout << "std::optional - constructor"s << std::endl;
  {
    std::optional<int> o1,      // empty
                       o2 = 1,  // init from rvalue
                       o3 = o2; // copy-constructor

    // calls std::string( initializer_list<CharT> ) constructor
    std::optional<std::string> o4(std::in_place, {'a', 'b', 'c'});

    // calls std::string( size_type count, CharT ch ) constructor
    std::optional<std::string> o5(std::in_place, 3, 'A');

    // Move-constructed from std::string using deduction guide to pick the type

    std::optional o6(std::string{"deduction"s});

    auto optsi = std::vector<std::pair<std::string, std::optional<int>>> {
      std::make_pair("o1"s, o1), std::make_pair("o2"s, o2), std::make_pair("o3"s, o3),
    };
    auto optss = std::vector<std::pair<std::string, std::optional<std::string>>> {
      std::make_pair("o4"s, o4), std::make_pair("o5"s, o5),
    };

    auto oshow = [](auto const & op) {
      auto const [on, ov] = op;
      bool ostate = ov ? true : false;
      std::cout << on << ".operator bool == "s << std::boolalpha << ostate << '\n';
      std::cout << on << ".has_value() == "s << ov.has_value() << '\n';
    };

    std::for_each(optsi.cbegin(), optsi.cend(), oshow);
    std::for_each(optss.cbegin(), optss.cend(), oshow);

    std::cout << *o2 << ' ' << *o3 << ' ' << *o4 << ' ' << *o5  << ' ' << *o6 << '\n';
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
  std::cout << "std::optional - operator->, operator*"s << std::endl;
  {
//    using namespace std::string_literals;

    std::optional<int> opt1 = 1;
    std::cout<< "opt1: "s << *opt1 << '\n';

    *opt1 = 2;
    std::cout<< "opt1: "s << *opt1 << '\n';

    std::optional<std::string> opt2 = "abc"s;
    std::cout<< "opt2: "s << *opt2 << " size: "s << opt2->size() << '\n';

    // You can "take" the contained value by calling operator* on a rvalue to optional

    auto taken = *std::move(opt2);
    std::cout << "taken: "s << taken
              << " opt2: "s << *opt2
              << " size: "s << opt2->size()
              << '\n';
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
  std::cout << "std::optional - operator bool, has_value"s << std::endl;
  {
    std::cout << std::boolalpha;

    std::optional<int> opt;
    std::cout << opt.has_value() << '\n';

    opt = 43;
    if (opt) {
      std::cout << "value set to "s << opt.value() << '\n';
    }
    else {
      std::cout << "value not set\n"s;
    }

    opt.reset();
    if (opt.has_value()) {
      std::cout << "value still set to "s << opt.value() << '\n';
    }
    else {
      std::cout << "value no longer set\n"s;
    }
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
  std::cout << "std::optional - value"s << std::endl;
  {
    std::optional<int> opt = {};

    try {
      [[maybe_unused]]
      int nr = opt.value();
    }
    catch (std::bad_optional_access const & ex) {
      std::cout << ex.what() << '\n';
    }
    try {
      opt.value() = 42;
    }
    catch (std::bad_optional_access const & ex) {
      std::cout << ex.what() << '\n';
    }

    opt = 43;
    std::cout << *opt << '\n';

    opt.value() = 44;
    std::cout << opt.value() << '\n';
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
  std::cout << "std::optional - value_or"s << std::endl;
  {
    auto envvars = std::vector<std::string const> {
      "MYPWD"s, "HOSTNAME"s, "USER"s, "SHELL"s,
    };

    for (auto env : envvars) {
      std::cout << "evironment variable: "s << env << ' '
                << uopv::maybe_getenv(env.c_str()).value_or("(none)") << '\n';
    }
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
  std::cout << "std::optional - swap"s << std::endl;
  {
    std::optional<std::string> opt1("First example text"s);
    std::optional<std::string> opt2("2nd text"s);

    enum Swap { Before, After, };
    auto print_opts = [&](Swap e_) {
      std::cout << (e_ == Before ? "Before swap:\n"s : "After swap:\n"s);
      std::cout << "opt1 contains '"s << opt1.value_or(""s) << "'\n"s;
      std::cout << "opt2 contains '"s << opt2.value_or(""s) << "'\n"s;
      std::cout << (e_ == Before ? "---SWAP---\n"s : "\n"s);
    };

    print_opts(Before);
    opt1.swap(opt2);
    print_opts(After);

    // Swap with only 1 set
    opt1 = "Lorem ipsum dolor sit amet, consectetur tincidunt."s;
    opt2.reset();

    print_opts(Before);
    opt1.swap(opt2);
    print_opts(After);
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
  std::cout << "std::optional - reset"s << std::endl;
  {
    std::cout << "Create empty optional:\n"s;
    std::optional<uopr::Aopr> opt;

    std::cout << "Construct and assign value:\n"s;
    opt = uopr::Aopr("Lorem ipsum dolor sit amet, consectetur adipiscing elit nec."s);

    std::cout << "Reset optional:\n"s;
    opt.reset();
    std::cout << "End example\n"s;
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
  std::cout << "std::optional - emplace"s << std::endl;
  {
    std::optional<uope::Aope> opt;

    std::cout << "Assign:\n"s;
    opt = uope::Aope("Lorem ipsum dolor sit amet, consectetur adipiscing elit nec."s);

    std::cout << "Emplace:\n"s;
    // As opt contains a value it will also destroy that value
    opt.emplace("Lorem ipsum dolor sit amet, consectetur efficitur. "s);

    std::cout << "End example\n"s;
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
  std::cout << "std::optional - std::make_optional"s << std::endl;
  {
    std::optional<std::string> ostr;
    if (!ostr) {
      ostr = std::make_optional("setup"s);
    }
    std::cout << *ostr << '\n';
  }
  std::cout << std::endl; //  make sure cout is flushed.

  // ....+....|....+....|....+....|....+....|....+....|....+....|
//  std::cout << konst::dot << '\n';
  std::cout << konst::delimiter('.') << '\n';
  std::cout << "std::optional - std::hash"s << std::endl;
  {
    using OptStr = std::optional<std::string>;

    // hash<optional> makes it possible to use unordered_set
    std::unordered_set<OptStr> opst = {
      "ABC"s, "abc"s, std::nullopt, "def"s
    };

    for (auto const & op : opst) {
      std::cout << std::setw(8) << std::left << op.value_or("(null)") << ' '
                << std::hex << std::hash<OptStr>{}(op) << std::dec << '\n';
    }
  }
  std::cout << std::endl; //  make sure cout is flushed.

  return 0;
}

//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  MARK: namespace uopv
namespace uopv {

std::optional<char const *> maybe_getenv(char const * nc) {
  if (char const * xc = std::getenv(nc)) {
    return xc;
  }
  else {
    return {};
  }
}

} /* namespace uopv */
