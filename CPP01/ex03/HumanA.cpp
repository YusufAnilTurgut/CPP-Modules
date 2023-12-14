#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon)
{
	std::cout << "Human A created" << std::endl;
	this->name = name;
	
};

HumanA::~HumanA()
{
	std::cout << "Human A died" << std::endl;
}

std::string HumanA::get_name()
{
	return this->name;
}

void HumanA::set_name(std::string name)
{
	this->name = name;
}

Weapon * HumanA::getWeapon()
{
	return &this->weapon;
}

void HumanA::setWeapon(Weapon weapon)
{
	this->weapon = weapon;
}

void HumanA::attack()
{
	std::cout << this->get_name() + " attacks with their " << 
		this->getWeapon()->getType() << std::endl;
}