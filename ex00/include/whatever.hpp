#pragma once


// swap: Swaps the values of two given parameters
template <typename T>
void swap(T &a, T &b)
{
	T tmp = a;
	a = b;
	b = tmp;
}


// min: Compares the two values passed as parameters and returns the smallest one 
template <typename T>
T const& min(T const& a, T const& b)
{
	return ((a < b) ? a : b);
}

//max: Compares the two values passed as parameters and returns the greatest one
template <typename T>
T const& max(T const& a, T const& b)
{
	return ((a > b) ? a : b);
}
