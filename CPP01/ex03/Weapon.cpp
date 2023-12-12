
#include "Weapon.hpp"

Weapon::Weapon()
{
	std::cout <<  "Weapon created!!" << std::endl;
}

Weapon::Weapon(std::string type)
{
	std::cout <<  "Weapon created!!" << std::endl;
	this->type = type;
}

Weapon::~Weapon()
{
	std::cout << "Weapon broke!!" << std::endl;
}

const std::string& Weapon::getType()
{
	return this->type;
}

void Weapon::setType(std::string type)
{
	this->type = type;
}