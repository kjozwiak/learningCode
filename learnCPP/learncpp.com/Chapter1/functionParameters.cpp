#include <iostream>

int16_t addNum (int16_t x, int16_t y);
int16_t doubleNumber (int16_t x);

int main () {
	std::cout << "#1 please: ";
	int16_t firstNum{};
	std::cin >> firstNum;
	std::cout << "#2 please: ";
	int16_t secondNum{};
	std::cin >> secondNum;
	std::cout << "Total after addition is : " << addNum(firstNum, secondNum) << std::endl;
	std::cout << "#3 please: ";
	int16_t thirdNum{};
	std::cin >> thirdNum;
	std::cout << "Total after doubling your number is: " << doubleNumber(thirdNum) << std::endl;
	std::cout << "Doubled your original two numbers for you: " << doubleNumber(addNum(firstNum, secondNum)) << std::endl;
	return 0;
}

int16_t addNum(int16_t x, int16_t y) {
	int16_t total = x + y;
	return total;
}

int16_t doubleNumber(int16_t x) {
	int16_t total = x * 2;
	return total;
}