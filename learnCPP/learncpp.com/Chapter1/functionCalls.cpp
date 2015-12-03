#include <iostream>

// return type of "void" means the function doesn't return a value so a return satement isn't needed
void secondFunction() { std::cout << "We're in the secondFunction now!!!" << std::endl; }

int16_t myBirthday() { return 7; }

void emptyFunction() { }

int16_t pickNumber()
{
	std::cout << "Pick a #: ";
	int16_t selectedNumber{};
	std::cin >> selectedNumber;
	return selectedNumber;
}

int main()
{ 
	std::cout << "We're starting off in the the main() function" << std::endl;
	secondFunction();
	std::cout << "We're back in the main() function!!" << std::endl;
	std::cout << "Date: " << myBirthday() << " --> We just got your birthday from the myBirthday function!!" << std::endl;

	// below satement is invalid as you can't pass a void function into cout
	// std::cout << emptyFunction() << " We got nothing back! emptyFunction using a void return type" << std::endl;

	int16_t x = pickNumber();
	int16_t y = pickNumber();

	std::cout << "First # selected was: " << x << " followed by #: " << y << std::endl;
	std::cout << "Total: " << x + y << std::endl;
	return 0;
}