#include "Ice.hpp"

Ice::Ice()
{
	this->type = "Ice";
	std::cout << "Default Ice constructor called" << std::endl;
}

Ice::Ice(const Ice& old) : AMateria()
{
	this->type = old.type;
	std::cout << this->type <<  " Ice copy constructor called" << std::endl;
}

Ice& Ice::operator=(const Ice& rhs)
{
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	std::cout << "Copy assigment operator called" << std::endl;
	return *this;
}

Ice::~Ice()
{
	std::cout << "Ice destructor called" << std::endl;
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" <<  std::endl;
}

AMateria* Ice::clone() const
{
	return new Ice();
}