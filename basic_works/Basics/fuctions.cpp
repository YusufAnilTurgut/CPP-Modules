#include <iostream>

int fac(int n)
{
	int ret = 1;
	while(n > 1)
	{
		ret *= n;
		n--;
	}
	return ret;
}


int main(void)
{
	std::cout << "factor of 5 is : " << fac(5) << std::endl;
}