
#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->name = "Default";
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDammage = 0;
	std::cout << "Default ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDammage = 0;
	std::cout <<this->name << " ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& old)
{
	this->name = old.name;
	this->hitPoints = old.hitPoints;
	this->energyPoints = old.energyPoints;
	this->attackDammage = old.attackDammage;
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& rhs)
{
	if ( this != &rhs)
	{
		this->name = rhs.name;
		this->hitPoints = rhs.hitPoints;
		this->energyPoints = rhs.energyPoints;
		this->attackDammage = rhs.attackDammage;
	}
	std::cout << "Copy assigment operator called" << std::endl;
	return *this;
	
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoints > 0 && this->energyPoints > 0)
	{
		this->hitPoints -= amount;
		std::cout << "ClapTrap " << this->name <<" took "<< amount << " damage" << std::endl;
	}
	else 
		std::cout << "ClapTrap " << this->name <<" dont have enough hit points or energy points" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoints > 0 && this->energyPoints > 0)
	{
		this->hitPoints += amount;
		this->energyPoints--;
		std::cout << "ClapTrap " << this->name <<" repaired "<< amount << " hit points" << std::endl;
	}
	else 
		std::cout << "ClapTrap " << this->name <<" dont have enough hit points or energy points" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->hitPoints > 0 && this->energyPoints > 0)
	{
		this->energyPoints--;
		std::cout << "ClapTrap " << this->name <<" attacks "<< target << ", causing "
			<< this->attackDammage << " points of damage!" << std::endl;
	}
	else 
		std::cout << "ClapTrap " << this->name <<" dont have enough hit points or energy points" << std::endl;
}
