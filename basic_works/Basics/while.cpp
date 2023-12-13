#include <iostream>

int main()
{
	int i = 0;
	while (i < 10)
	{
		std::cout << "i :: " << i << std::endl;
		i++;
	}

	do 
	{
		
		i--;
		std::cout << "i :: " << i << std::endl;
	}while(i != 8);
	
	for (int i = 0; i < 10; i = i + 2)
	{
		std::cout << "i :: " << i << std::endl;
	}
	

}