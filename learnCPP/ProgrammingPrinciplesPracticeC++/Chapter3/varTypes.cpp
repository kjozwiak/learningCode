#include "std_lib_facilities.h"

int main()
{
	string firstName = "Kamil";
	string lastName = "Jozwiak";

	cout << "Hello, my name is: " << firstName << " " << lastName << "\n";
	cout << "What's your first name?: ";
	string fName;
	cin >> fName;
	cout << "What's your last name?: ";
	string lName;
	cin >> lName;
	cout << "Hello " << fName << " " << lName << "!!!\n";
	cout << "How old are you?: ";
	double age;
	cin >> age;
	double ageMonths;
	ageMonths = age * 12;
	cout << "Looks like you're " << ageMonths << " months old!\n";
	return 0;
}