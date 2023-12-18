#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
protected:
	std::string name;
	int hitPoints;
	int energyPoints;
	int attackDammage;
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& old);
	ClapTrap& operator=(const ClapTrap& rhs);
	~ClapTrap();
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};




#endif