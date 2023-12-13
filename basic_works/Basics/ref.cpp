#include <iostream>
using namespace std;
 
	int main()
	{
		int x = 10;
	
		// ref is a reference to x.
		int& ref = x;
	
		std::cout << " x = " << x << std::endl;
		std::cout << " ref = " << ref << std::endl;

		x++;
		std::cout << " x = " << x << std::endl;
		std::cout << " ref = " << ref << std::endl;


		ref++;
		std::cout << " x = " << x << std::endl;
		std::cout << " ref = " << ref << std::endl;
	
		return 0;
}