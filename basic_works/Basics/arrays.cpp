#include <iostream>

int main()
{
	int arr[3] = {0,4,1};


	int i = 0;
	while (i < 3)
	{
		std::cin >> arr[i];
		i++;
	}
	i = 0;
	while (i < 3)
	{
		std::cout << "arr index : " << i << " : " << arr[i] << std::endl;
		i++;
	}
	
}