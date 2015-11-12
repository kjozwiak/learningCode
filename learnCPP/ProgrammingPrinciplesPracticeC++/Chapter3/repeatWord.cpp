#include "std_lib_facilities.h"

int main ()
{
	string previousWord = " ";
	string currentWord;
	while (cin >> currentWord) {
		if (currentWord == previousWord)
		{
			cout << "looks like the word: " << currentWord << " was entered twice in a row!!\n";
			return 0;
		}
		previousWord = currentWord;
	}
}