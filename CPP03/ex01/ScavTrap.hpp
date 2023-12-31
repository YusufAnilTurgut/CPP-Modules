#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& old);
	ScavTrap& operator=(const ScavTrap& rhs);
	~ScavTrap();
	void attack(const std::string& target);
	void guardGate();
};




#endif