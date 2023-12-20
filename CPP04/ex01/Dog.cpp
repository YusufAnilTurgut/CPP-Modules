#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "Default Dog constructor called" << std::endl;
}


Dog::Dog(const Dog& old) : Animal()
{
	this->type = old.type;
	this->brain = new Brain(*old.brain);
	std::cout << "Copy Dog constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& rhs)
{
	if (this != &rhs)
	{
		this->type = rhs.type;
		this->brain = brain;
	}
	std::cout << "Copy assigment operator called" << std::endl;
	return *this;
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Bark bark" << std::endl;
}