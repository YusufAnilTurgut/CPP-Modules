#include <iostream>

int main()
{
	int arr[3][2];
	int n;
	arr[0][0] = 1;
	arr[1][0] = 2;
	arr[2][0] = 3;


	int i = 0;
	while (i < 3)
	{
		std::cin >> arr[i][1];
		i++;
	}
	i = 0;
	while (i < 3)
	{
		std::cout << "arr index : " << arr[i][0] << " : " << arr[i][1] << std::endl;
		i++;
	}
}