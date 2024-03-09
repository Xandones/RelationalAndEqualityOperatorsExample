#include <iostream>

int main()
{
	double X, Y;

	std::cout << "Type two double values separated by <SPACE> then press <ENTER>: " << "\n";
	std::cin >> X >> Y;
	if (X == Y)
		std::cout << "The values are equal." << "\n";
	if (X != Y)
		std::cout << "The values are different." << "\n";
	if (X < Y)
		std::cout << "X is less than Y." << "\n";
	if (X <= Y)
		std::cout << "X is less or equal Y." << "\n";
	if (Y < X)
		std::cout << "Y is less than X." << "\n";
	if (Y <= X)
		std::cout << "Y is less or equal X." << "\n";
	if (X > Y)
		std::cout << "X is greater than Y." << "\n";
	if (X >= Y)
		std::cout << "X is greater or equal Y." << "\n";
	if (Y > X)
		std::cout << "Y is greater than X." << "\n";
	if (Y >= X)
		std::cout << "Y is greater or equal X." << "\n";
	
	system("PAUSE");
}