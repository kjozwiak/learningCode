#include <iostream>

int main()
{
	void outputValues(int x, int y, int z);

	int x{2};
	int y(4);
	int z = 6;

	outputValues(x, y, z);

	return 0;
}

void outputValues(int x, int y, int z)
{
	using namespace std;
	cout << "uniform initialization: " << x << "\n" <<
			" implicit initialization: " << y << "\n" <<
			" explicit initialization: " << z << "\n";
}