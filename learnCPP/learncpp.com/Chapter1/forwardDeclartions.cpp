#include <iostream>

int16_t additionNum(int16_t firstNumber, int16_t secondNumber, int16_t thirdNumber);

int main()
{
	std::cout << "Please insert the first number: ";
	int16_t firstNumber{};
	std::cin >> firstNumber;
	std::cout << "Please insert the second number: ";
	int16_t secondNumber{};
	std::cin >> secondNumber;
	std::cout << "Please insert the third number ";
	int16_t thirdNumber{};
	std::cin >> thirdNumber;
	std::cout << "Total is: " << additionNum(firstNumber, secondNumber, thirdNumber) << std::endl;
	return 0;
}

int16_t additionNum(int16_t firstNumber, int16_t secondNumber, int16_t thirdNumber)
{
	return firstNumber + secondNumber + thirdNumber;
}