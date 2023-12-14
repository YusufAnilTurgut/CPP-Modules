#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:
	std::string name;
	Weapon& weapon;
public:
	HumanA(std::string name, Weapon& weapon);
	~HumanA();
	void attack();
	std::string get_name();
	void set_name(std::string name);
	Weapon *getWeapon();
	void setWeapon(Weapon weapon);

};


#endif