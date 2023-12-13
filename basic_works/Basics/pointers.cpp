#include <iostream>

int main()
{
	int i = 5;
	int *ip = &i;

	std::cout << ip << std::endl;
	std::cout << *ip << std::endl;
	std::cout << &i << std::endl;
	std::cout << i << std::endl;
}