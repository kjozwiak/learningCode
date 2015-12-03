#include <iostream>

int16_t readNumber();
void writeAnswer(int16_t x);

int main()
{
	int16_t firstNumber = readNumber();
	int16_t secondNumber = readNumber();
	writeAnswer(firstNumber + secondNumber);
}

int16_t readNumber()
{
	std::cout << "Please insert a number: ";
	int16_t userNum;
	std::cin >> userNum;
	return userNum;
}

void writeAnswer(int16_t x)
{
	std::cout << "Total: " << x << "\n"; 
}