
#include "Zombie.hpp"

int main()
{
	Zombie *z1 = new Zombie("Anil");
	
	z1->announce();

	std::cout << std::endl;
	Zombie *arr = zombieHorde(5, "Sertan");
	

	for (int i = 0; i < 5; i++)
	{
		arr[i].announce();
	}
	
	delete[] arr;
	delete z1;
}