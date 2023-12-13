#include <iostream>

int main()
{
	int x;
	std::cout << "What is the true number" << std::endl;
	std::cin >> x;
	if (x == 42)
		std::cout << "True!!" << std::endl;
	else if (x == 31 || x == 22)
		std::cout << "Kinda True" << std::endl;
	else
		std::cout << "False!!" << std::endl;
}