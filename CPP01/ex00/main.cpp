
#include "Zombie.hpp"

int main()
{
	Zombie *a = newZombie("Anil");
	a->announce();
	randomChump("Yusuf");
	delete a;
}