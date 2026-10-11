#include "../include/Array.hpp"
#include "../include/color.hpp"
#include <iostream>

int main()
{
	std::cout << CYAN << "===== CONSTRUCTOR =====" << RESET << std::endl;

	Array<int> a(5);

	for (unsigned int i = 0; i < a.size(); i++)
		a[i] = i * 10;

	for (unsigned int i = 0; i < a.size(); i++)
		std::cout << "a[" << i << "] = " << a[i] << std::endl;


	std::cout << CYAN << "\n===== COPY CONSTRUCTOR =====" << RESET << std::endl;

	Array<int> b(a);

	std::cout << "a[0] = " << a[0] << std::endl;
	std::cout << "b[0] = " << b[0] << std::endl;

	b[0] = 999;

	std::cout << YELLOW << "After b[0] = 999:" << RESET << std::endl;
	std::cout << "a[0] = " << a[0] << std::endl;
	std::cout << "b[0] = " << b[0] << std::endl;

	if (a[0] != b[0])
		std::cout << GREEN << "✓ Deep copy OK" << RESET << std::endl;
	else
		std::cout << RED << "✗ Deep copy FAILED" << RESET << std::endl;

	std::cout << CYAN <<"\n===== OPERATOR = =====" << RESET << std::endl;

	Array<int> c(2);
	c[0] = 100;
	c[1] = 200;

	c = a;

	std::cout << "c.size() = " << c.size() << std::endl;

	for (unsigned int i = 0; i < c.size(); i++)
		std::cout << "c[" << i << "] = " << c[i] << std::endl;

	c[0] = 777;

	std::cout << YELLOW << "After c[0] = 777:" << RESET << std::endl;
	std::cout << "a[0] = " << a[0] << std::endl;
	std::cout << "c[0] = " << c[0] << std::endl;

	if (a[0] != b[0])
		std::cout << GREEN << "✓ Assignment deep copy OK" << RESET << std::endl;
	else
		std::cout << RED << "✗ Assignment deep copy FAILED" << RESET << std::endl;


	std::cout << CYAN << "\n===== SELF ASSIGNMENT =====" << RESET << std::endl;

	a = a;

	for (unsigned int i = 0; i < a.size(); i++)
		std::cout << "a[" << i << "] = " << a[i] << std::endl;

	if (a[0] == 0)
		std::cout << GREEN << "✓ Self assignment OK" << RESET << std::endl;
	else
		std::cout << RED << "✗ Self assignment FAILED" << RESET << std::endl;

	
	std::cout << CYAN << "\n===== EMPTY ARRAY =====" << RESET << std::endl;

	Array<int> empty;

	std::cout << "empty.size() = " << empty.size() << std::endl;

	if (empty.size() == 0)
		std::cout << GREEN << "✓ Empty array OK" << RESET << std::endl;
	else
		std::cout << RED << "✗ Empty array FAILED" << RESET << std::endl;


	std::cout << CYAN << "\n===== OUT OF RANGE =====" << RESET << std::endl;

	try
	{
		std::cout << a[10] << std::endl;
		std::cout << RED << "✗ Exception FAILED" << RESET << std::endl;
	}
	catch (const std::out_of_range &e)
	{
		std::cout << GREEN << "✓ Exception caught: "
				  << e.what() << RESET << std::endl;
	}

	return (0);
}
