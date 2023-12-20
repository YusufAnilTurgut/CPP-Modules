#include "WrongDog.hpp"

WrongDog::WrongDog()
{
	this->type = "WrongDog";
	std::cout << "Default WrongDog constructor called" << std::endl;
}


WrongDog::WrongDog(const WrongDog& old) : WrongAnimal()
{
	this->type = old.type;
	std::cout << "Copy WrongDog constructor called" << std::endl;
}

WrongDog& WrongDog::operator=(const WrongDog& rhs)
{
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	std::cout << "Copy assigment operator called" << std::endl;
	return *this;
}

WrongDog::~WrongDog()
{
	std::cout << "WrongDog destructor called" << std::endl;
}

void WrongDog::makeSound() const
{
	std::cout << "Wrong Bark bark" << std::endl;
}