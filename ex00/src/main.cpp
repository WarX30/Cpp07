#include "../include/Whatever.hpp"
#include "../include/color.hpp"

#include <iostream>

int main() {
    int a = 2;
    int b = 3;

	std::cout << BOLD_ON << "Before Swap: a = "
			  << BLUE << a << RESET << ", b = "
			  << BLUE << b << RESET << BOLD_OFF << std::endl;

    ::swap(a, b);
    std::cout << BOLD_ON << "\nAfter  Swap: a = "
			  << GREEN << a << RESET << ", b = "
			  << GREEN << b << RESET << BOLD_OFF << std::endl;
    std::cout << BOLD_ON << "\nmin(a, b) = "
			  << GREEN << ::min(a, b) << RESET << BOLD_OFF << std::endl;
    std::cout << BOLD_ON << "max(a, b) = "
			  << GREEN << ::max(a, b) << RESET << BOLD_OFF << std::endl;

    std::string c = "chaine1";
    std::string d = "chaine2";

	std::cout << BOLD_ON << "\nBefore Swap: c = "
			  << BLUE << c << RESET << ", d = "
			  << BLUE << d << RESET << BOLD_OFF << std::endl;

    ::swap(c, d);
    std::cout << BOLD_ON << "\nAfter  Swap: c = "
			  << YELLOW << c << RESET << ", d = "
			  << YELLOW << d << RESET << BOLD_OFF << std::endl;
    std::cout << BOLD_ON << "\nmin(c, d) = "
			  << YELLOW << ::min(c, d) << RESET << BOLD_OFF << std::endl;
    std::cout << BOLD_ON << "max(c, d) = "
			  << YELLOW << ::max(c, d) << RESET << BOLD_OFF << std::endl;
    return 0;
}
