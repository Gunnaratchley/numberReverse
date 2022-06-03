#include <iostream>

#include "Number.h"
int main()
{
	std::cout << "Please enter a number to be reversed: ";
	int number = 0;
	std::cin >> number;
	while (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Invalid number" << std::endl;
		std::cout << "Please enter a new number: ";
		std::cin >> number;
	}
	Number num;
	num.setValue(number);

	int reverse_num = num.reverse(num.getNumber());
	std::cout << "Reversed Number minus leading and trailing zero's: " << reverse_num << std::endl;

	return 0;
}