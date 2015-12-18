#include <iostream>
#include <cmath>

using std::cout;
using std::cin;

int16_t isEven(int16_t x);

int main()
{
	cout << "Please enter a #: ";
	int32_t x{};
	cin >> x;
	cout << "Please enter the ^ you would like to use: ";
	int32_t y{};
	cin >> y;
	cout << "Answer is: " << pow(x , y) << "\n";

	int16_t a{7};
	int16_t b{4};

	cout << "int16_t / int16_t = " << a / b << "\n";
	cout << "int16_t / double = " << a / static_cast<double>(b) << "\n";

	cout << "Inser a # and we'll check if it's even or odd: ";
	int16_t number{};
	cin >> number;
	isEven(number);

	return 0;
}

int16_t isEven(int16_t x) {
	
	if (x % 2 == 0) {
		cout << "It's an even #!!" << "\n";
	} else {
		cout << "Nope, definitely not a even #" << "\n";
	}

	// (x % 2 == 0) ? cout << "It's an even #!!" << "\n" : cout << "Nope, definitely not a even #" << "\n";
	
	return 0;
}