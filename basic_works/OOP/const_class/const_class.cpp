#include <iostream>

class Test{
	public:
		int a;
		Test(int a)
		{
			this->a = a;
		}
	
};

int main()
{
	const Test *a =  new Test(5);

	std::cout << "a :: " <<  a->a << std::endl;
}