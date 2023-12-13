#include <iostream>

void printf_arrr(int *arr, int size)
{
	int i = 0;
	while(i < size)
	{
		std::cout << arr[i] << std::endl;
		i++;
	}
}


int main(void)
{
	int arr[5] = {1,3,5,7,9};
	printf_arrr(arr, 5);

	int size = sizeof(arr) / sizeof(int);
	std::cout << "size of arr :: " <<  size << std::endl;
}