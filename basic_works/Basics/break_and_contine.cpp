#include <iostream>

int main()
{
	int i = 0;
	int j = 0;
	while(j < 5)
	{
		j++;
		i = 0;
		while (i < 10)
		{	
			i++;
			if (i == 2)
				continue;
			std::cout << "i :: " << i << " j :: " << j << std::endl;
			
			
			if (i == 5)
				break;
			
		}
	}

}