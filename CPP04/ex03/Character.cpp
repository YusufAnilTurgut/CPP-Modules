#include "Character.hpp"

Character::Character()
{
	std::cout << "Character constructor called" << std::endl;
	this->name = "Default";
	for (int i = 0; i < 4; i++)
	{
		this->materia[i] = NULL;
	}
	
}


Character::Character(const std::string name)
{
	this->name = name;
	for (int i = 0; i < 4; i++)
	{
		this->materia[i] = NULL;
	}
	std::cout << this->name << " Character constructor called" << std::endl;
}

Character::~Character()
{
	std::cout << "Character destroyer called" <<  std::endl;
}

Character::Character(const Character& copy)
{
	this->name = copy.name;
	int i = 0;
	while (copy.materia[i] != NULL)
	{
		this->materia[i] = copy.materia[i];
	}
	
}

Character& Character::operator=(const Character &rhs)
{
	if (this != &rhs)
	{
		this -> name = rhs.name;
		int i = 0;
		while (rhs.materia[i] != NULL)
		{
			this->materia[i] = rhs.materia[i];
		}
	}
	return *this;
}

const std::string& Character::getName(void) const
{
	return this->name;
}

void Character::equip(AMateria* e)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->materia[i] == NULL)
		{
			this->materia[i] = e;
			std::cout << this->name << "'s " << e->getType() << " materia equipped" << std::endl;
			break;		
		}
	}
}

void	Character::unequip(int idx)
{
	if (0 <= idx && idx < 4 && this->materia[idx] != NULL)
	{
		std::cout << this->name << "'s " << this->materia[idx]->getType() << " materia unequiped" << std::endl;
		this->materia[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter& target)
{
	if(idx < 0 || idx > 3)
		return;
	if (this->materia[idx] != NULL)
		this->materia[idx]->use(target);
}