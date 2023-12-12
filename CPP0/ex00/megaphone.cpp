#include <iostream>

int main(int argc, char const *argv[])
{
	int i = 1;
	int j;
	std::string str1;
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	else
	{
		while (i < argc)
		{
			j = 0;
			while(argv[i][j])
				str1 += toupper(argv[i][j++]);
			i++;
		}
		std::cout << str1;
		std::cout <<std::endl;
	}
	return 0;
}
