#include "Number.h"

/*!
* Constant base is the base of 10 used to modify integer value.
*/
int const Number::base = 10;

// Constructors
Number::Number()
{
	mNumber = 0;
}
Number::Number(int num)
{
	while (num % base == 0)
	{
		num /= base;
	}
	if (num % base != 0)
	{
		mNumber = num;
	}
	else
	{
		mNumber = num / base;
	}
}

//Destructor
Number::~Number()
{
	// No action required here
}

//setters
int Number::setValue(int num)
{
	while (num % base == 0)
	{
		num /= base;
	}
	if (num % base != 0)
	{
		mNumber = num;
	}
	else
	{
		mNumber = num / base;
	}
	return mNumber;
}

// Getter
int Number::getNumber()
{
	return mNumber;
}

//split digit
/*!
*\Splits the digits of an integer up and stores them in a vector
*\param numbers is the integer to be split.
*\return std::vector<int>.
*/
std::vector<int> Number::splitDigit(int mNumber)
{
	std::vector<int> number;

	for (; mNumber; mNumber /= base)
	{
		number.push_back(mNumber % base);
	}
	return number;
}

//Reverse
/*!
*\Reverses order of individual digits of the integer input
*\param numbers is the integer to reverse.
*\return int that is reversed.
*/
int Number::reverse(int numbers)
{
	std::vector<int> digits = splitDigit(numbers);
	int result = 0;
	for (auto num : digits)
	{
		result = result * base + num;
	}
	return result;
}

//sort		function does not work as is. Had it working but broke it.
//int Number::sortNumber(std::vector<int> numbers)
//{
//	for (auto num : numbers)
//	{
//		if (num < 0)
//		{
//			num * (-1);
//		}//else do nothing
//	}
//	std::sort(numbers.end(), numbers.begin());
//	int result = 0;
//	for (auto num : numbers)
//	{
//		result = result * 10 + num;
//	}
//	return result;
//}
