#include <iostream>

int main()
{
	int a = int(25);
	int *ap = new int;
	int *arr = new int[5];

	std::cout << "adres of a " << ap << std::endl;
	for (int i = 0; i < 5; i++)
	{
		arr[i] = i;
	}

	for (int i = 0; i < 5; i++)
	{
		std::cout << "a value is " << arr[i] << std::endl;
	}
	delete ap;
	delete[] arr;
}