#include "std_lib_facilities.h"

int main()
{
	// Safe Conversions

	char x = 'x';
	int y = x;
	double z = x;

	cout << "char: " << x << " int: " << y << " double: " << z <<"\n";

	// Unsafe Conversions
	
	// the {} initizilation notation outlaws narrowing converstions
	// double d = {0.0};

	double d = 0.0;

	while (cin >> d) {
		
		// int i = {d}; --> type 'double' cannot be narrowed to 'int' in initializer list [-Wc++11-narrowing]

		int i = d;
		char c = i;
		int i2 = c;

		cout << "Double: " << d << " \n";
		cout << "First Int: " << i << "\n";
		cout << "Second Int: " << i2 << "\n";
		cout << "Character: " << c << "\n";
	}
	return 0;
}