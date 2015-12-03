#include <iostream>

// this function will fail with a ambiguous error in the compiler
int16_t cout()
{
	return 5;
}

int main() {

	/* you could also use the following declaration statements
	 * using std::cout;
	 * using std::endl;
	 * using std::cin;
	*/

	// using directive statement
	using namespace std;

	cout << "Please enter any number!: ";
	int16_t myNumber{};
	cin >> myNumber;
	cout << "You've entered: " << myNumber << endl;
	return 0;
}