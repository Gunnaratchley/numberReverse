#ifndef Numbers_
#define Numbers_

#include <algorithm>
#include <iostream>
#include <vector>

class Number
{
private:
	//Data declarations
	int mNumber;

public:
	/*!
	* Constant base is the base of 10 used to modify integer value.
	*/
	static int const base;
	// Constructors
	Number();
	Number(int num);

	//Destructor
	~Number();

	//setters
	int setValue(int num);

	// Getter
	int getNumber();

	/*!
	*\Splits the digits of an integer up and stores them in a vector
	*\param numbers is the integer to be split.
	*\return std::vector<int>.
	*/
	std::vector<int> splitDigit(int num);

	/*!
	*\Reverses order of individual digits of the integer input
	*\param numbers is the integer to reverse.
	*\return int that is reversed.
	*/
	int reverse(int numbers);

	//sort
	//t sortNumber(std::vector<int> numbers);
};
#endif

