#include <iostream>
#include "constants.h"

int main()
{
	constexpr int16_t myBirthday{7}; // constant resolved during compile-time
	std::cout << "My birthday is on the: " << myBirthday << "th!" << "\n";
	std::cout << "What day is your birthday?: ";
	int16_t x{};
	std::cin >> x;
	const int16_t z{x}; // constant resolved during run-time
	std::cout << "My birthday is on the: " << z << "th!" << "\n";
	if (z == myBirthday) {
		std::cout << "You have the same birthday as me!! \n";
	} else {
		std::cout << "You're definitely not as cool as me...\n";
	}
	std::cout << "Sonja's birthday is on the " << constants::sonjaBirthday << "\n";
	return 0;
}