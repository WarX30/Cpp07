#pragma once

#include "color.hpp"

#include <iostream>
#include <cstddef>

template <typename T>
void	iter(T *array, std::size_t lenght, void (*funct)(T &))
{
	for(std::size_t i = 0; i < lenght; i++)
		funct(array[i]);
}

template <typename T>
void	increment(T &elem)
{
	elem++;
}

template <typename T>
void	increment(T const& elem)
{
	(void)elem;
	std::cout << BOLD_ON YELLOW << "Cannot increment because const!"
			  << BOLD_OFF << std::endl;
}

template <typename T>
void	print(T &elem)
{
	std::cout << BOLD_ON GREEN << elem << BOLD_OFF << std::endl; 
}
