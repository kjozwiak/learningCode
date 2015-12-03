#include <iostream>
#include "maths.h"

/* 
 * used while learning forward declarations.. moved into maths.h
 * int twoAddition(int firstNumber, int secondNumber);
 * int twoMultiply(int firstNumber, int secondNumber);
*/

int main()
{
	std::cout << "#1: ";
	int16_t firstNum{};
	std::cin >> firstNum;
	std::cout << "#2: ";
	int16_t secondNum{};
	std::cin >> secondNum;
	std::cout << "Total after addition is: " << twoAddition(firstNum, secondNum) << std::endl;
	std::cout << "#1: ";
	int16_t thirdNum{};
	std::cin >> thirdNum;
	std::cout << "#2: ";
	int16_t fourthNum{};
	std::cin >> fourthNum;
	std::cout << "Total after multiplication is: " << twoMultiply(thirdNum, fourthNum) << std::endl;
	return 0;
}