#include <iostream>
#include <iomanip> // need this head for setprecision()

int main()
{
	using namespace std;
	float x{123.456789f};
	cout << x << "\n"; // lost some precision
	cout << setprecision(10);
	float y{123.4567891f};
	cout << y << "\n";
	return 0;
}