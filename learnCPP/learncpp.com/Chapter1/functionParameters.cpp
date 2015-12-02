#include <iostream>

int addNum(int x, int y) {
	int total = x + y;
	return total;
}

int doubleNumber(int x) {
	int total = x * 2;
	return total;
}

int main () {
	std::cout << "#1 please: ";
	int firstNum{};
	std::cin >> firstNum;
	std::cout << "#2 please: ";
	int secondNum{};
	std::cin >> secondNum;
	std::cout << "Total after addition is : " << addNum(firstNum, secondNum) << std::endl;
	std::cout << "#3 please: ";
	int thirdNum{};
	std::cin >> thirdNum;
	std::cout << "Total after doubling your number is: " << doubleNumber(thirdNum) << std::endl;
	std::cout << "Doubled your original two numbers for you: " << doubleNumber(addNum(firstNum, secondNum)) << std::endl;
	return 0;
}