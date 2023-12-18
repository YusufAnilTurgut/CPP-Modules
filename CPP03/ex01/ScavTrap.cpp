
#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->name = "Default";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDammage = 20;
	std::cout << "Default ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) 
{
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDammage = 20;
	std::cout <<this->name << " ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& old) 
{
	this->name = old.name;
	this->hitPoints = old.hitPoints;
	this->energyPoints = old.energyPoints;
	this->attackDammage = old.attackDammage;
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& rhs)
{
	if (this != &rhs)
	{
		this->name = rhs.name;
		this->hitPoints = rhs.hitPoints;
		this->energyPoints = rhs.energyPoints;
		this->attackDammage = rhs.attackDammage;
	}
	std::cout << "ScavTrap copy assigment operator called" << std::endl;
	return *this;
	
}

ScavTrap::~ScavTrap() 
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->hitPoints > 0 && this->energyPoints > 0)
	{
		this->energyPoints--;
		std::cout << "ScavTrap " << this->name <<" attacks "<< target << ", causing "
			<< this->attackDammage << " points of damage!" << std::endl;
	}
	else 
		std::cout << "ScavTrap " << this->name <<" dont have enough hit points or energy points" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->name <<" guarding" << std::endl;
}