#include <iostream>

int main()
{
	using namespace std;
	unsigned short x{65535};
	cout << "size of unsigned short variable x: " << x << "\n";
	 x=+1;
	cout << "size of unsigned short variable x + 1: " << x << "\n";
	
	unsigned short y{};
	cout << "size of unsigned short variable y: " << y << "\n";
	y=-1;
	cout << "size of unsigned short variable y - 5: " << y << "\n";
	return 0;
}