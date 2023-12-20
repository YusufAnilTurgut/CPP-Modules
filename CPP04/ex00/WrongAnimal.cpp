#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "WrongAnimal";
	std::cout << "Default WrongAnimal constructor called" << std::endl;
}


WrongAnimal::WrongAnimal(const WrongAnimal& old)
{
	this->type = old.type;
	std::cout << "Copy WrongAnimal constructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& rhs)
{
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	std::cout << "Copy assigment operator called" << std::endl;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return this->type;
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal sound" << std::endl;
}