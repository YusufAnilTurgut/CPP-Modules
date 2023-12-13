#include <iostream>

int main()
{
	int i;
	std::cout << "give me a number between 1 to 3";
	std::cin >> i;

	switch (i)
	{
	case 1:
		std::cout << "case 1" << std::endl;
		break;
	case 2:
		std::cout << "case 2" << std::endl;
		break;
	case 3:
		std::cout << "case 3" << std::endl;
		break;
	default:
		std::cout << "case 4" << std::endl;
		break;
	}
}