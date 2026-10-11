#include "../include/iter.hpp"

int	main(void)
{
	int arr[] = {1, 2, 3, 4};

	std::cout << BOLD_ON BLUE << "Original:" << BOLD_OFF << std::endl;
	iter(arr, 4, print<int>);

	iter(arr, 4, increment<int>);
	std::cout << BOLD_ON BLUE << "After increment:" << BOLD_OFF << std::endl;
	
	iter(arr, 4, print<int>);
	
	return (0);
}
