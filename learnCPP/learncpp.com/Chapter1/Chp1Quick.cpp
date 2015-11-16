#include <iostream>

int readNumber();
void writeAnswer(int x);

int main()
{
	int firstNumber = readNumber();
	int secondNumber = readNumber();
	writeAnswer(firstNumber + secondNumber);
}

int readNumber()
{
	std::cout << "Please insert a number: ";
	int userNum;
	std::cin >> userNum;
	return userNum;
}

void writeAnswer(int x)
{
	std::cout << "Total: " << x << "\n"; 
}