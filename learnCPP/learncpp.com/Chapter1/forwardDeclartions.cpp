#include <iostream>

int additionNum(int firstNumber, int secondNumber, int thirdNumber);

int main()
{
	std::cout << "Please insert the first number: ";
	int firstNumber;
	std::cin >> firstNumber;
	std::cout << "Please insert the second number: ";
	int secondNumber;
	std::cin >> secondNumber;
	std::cout << "Please insert the third number ";
	int thirdNumber;
	std::cin >> thirdNumber;
	std::cout << "Total is: " << additionNum(firstNumber, secondNumber, thirdNumber) << std::endl;
	return 0;
}

int additionNum(int firstNumber, int secondNumber, int thirdNumber)
{
	return firstNumber + secondNumber + thirdNumber;
}