#include <iostream>

bool isEqual(int16_t x, int16_t y);

int main ()
{
	using namespace std;
	bool x{true};
	bool y{false};
	if (!x) {
		cout << "Went through the IF statement, it's False!" << "\n";
	} else {
		cout << "Went through IF statement, it's True!" << "\n";
	}
	cout << "not using boolalpha: " << x << "\n";
	cout << "not using boolalpha " << y << "\n";
	cout << boolalpha;
	cout << "using boolalpha: " << x << "\n";
	cout << "using boolalpha: " << y << "\n";

	int16_t num1{};
	cout << "Please enter the first number: ";
	cin >> num1;
	int16_t num2{};
	cout << "Please enter the second number: ";
	cin >> num2;

	if (isEqual(num1, num2)) {
		cout << "Number: " << num1 << " & Number: " << num2 << " are equal!!" << "\n";
	} else {
		cout << "Number: " << num1 << " & Number: " << num2 << " are NOT equal!!" << "\n";
	}
	return 0;
}

bool isEqual(int16_t x, int16_t y)
{
	return x == y;
}