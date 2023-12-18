#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap b0;
	ScavTrap b1("Jack");
	ScavTrap b2("John");

	b1.attack("John");
	b2.takeDamage(20);
	b2.beRepaired(20);
	b2.guardGate();
	b2.takeDamage(100);
	b2.beRepaired(10);


	return 0;
}
