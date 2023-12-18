#include "ClapTrap.hpp"

int main()
{
	ClapTrap a1;
	ClapTrap a2("Yusuf");
	ClapTrap a3("Anil");

	a2.attack("Anil");
	a2.takeDamage(0);

	a2.takeDamage(5);
	a2.beRepaired(5);

	a2.takeDamage(10);
	a2.beRepaired(10);

	a1.beRepaired(5);
	a3.beRepaired(10);
	return 0;
}
