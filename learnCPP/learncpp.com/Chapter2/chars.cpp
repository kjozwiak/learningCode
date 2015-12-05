#include <iostream>

int main()
{
	std::cout << "Please enter \"y\" or \"n\": ";
	char choice{};
	std::cin >> choice;
	if (static_cast<int16_t>(choice) == 121) {
		std::cout << "You've selected Yes!!" << "\n";
	} else if (static_cast<int16_t>(choice) == 110) {
		std::cout << "You've selected No!!" << "\n";
	} else {
		std::cout << "Damit.. You didn't follow directions..!" << "\n";
	}
	std::cout << "Please insert any letter from alphabet: ";
	char userInput{};
	std::cin >> userInput;
	std::cout << "the letter " << userInput << " translates to " << static_cast<int16_t>(userInput) << " in ASCII!" << "\n";
	return 0;
}