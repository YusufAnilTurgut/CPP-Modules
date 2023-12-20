#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Default Dog constructor called" << std::endl;
}


Dog::Dog(const Dog& old) : Animal()
{
	this->type = old.type;
	std::cout << "Copy Dog constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& rhs)
{
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	std::cout << "Copy assigment operator called" << std::endl;
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Bark bark" << std::endl;
}