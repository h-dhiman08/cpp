#include <iostream>
#include <string_view>

constexpr std::string_view get_cpp_standard_name(long version) noexcept {
    switch (version) {
        case 202302L: return "C++23";
        case 202002L: return "C++20";
        case 201703L: return "C++17";
        case 201402L: return "C++14";
        case 201103L: return "C++11";
        case 199711L: return "C++98";
        default:      return "pre-standard C++";
    }
}

int main() {
    const auto version_name = get_cpp_standard_name(__cplusplus);
    std::cout << version_name;
    
    if (version_name == "pre-standard C++") {
        std::cout << " (__cplusplus value: " << __cplusplus << ")";
    }
    
    std::cout << '\n';  // Prefer '\n' over "\n" for single newline
}