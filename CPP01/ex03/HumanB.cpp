#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	std::cout << "Human B created" << std::endl;
	this->name = name;
	this->weapon = NULL;
};

HumanB::~HumanB()
{
	std::cout << "Human B died" << std::endl;
}

std::string HumanB::get_name()
{
	return this->name;
}

void HumanB::set_name(std::string name)
{
	this->name = name;
}

Weapon *HumanB::getWeapon()
{
	return this->weapon;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

void HumanB::attack()
{
	if (getWeapon() != NULL)
	{
		std::cout << this->get_name() + " attacks with their " << 
		this->getWeapon()->getType() << std::endl;
	}
	else if (this->getWeapon() == NULL)
	{
		std::cout << this->get_name() + " attacks with their " << std::endl;
	}
}