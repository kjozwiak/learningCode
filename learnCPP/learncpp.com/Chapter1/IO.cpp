#include <iostream>

// this function will fail with a ambiguous error in the compiler
int cout() {
	return 5;
}

int main() {

	/* using declaration statements
	 * using std::cout;
	 * using std::endl;
	 * using std::cin;
	*/

	// using directive statement
	using namespace std;

	cout << "Please enter any number!: ";
	int myNumber = 0;
	cin >> myNumber;
	cout << "You've entered: " << myNumber << endl;
	return 0;
}