#include "AMateria.hpp"

AMateria::AMateria()
{
	this->type = "Default";
	std::cout << "Default AMateria constructor called" << std::endl;
}

AMateria::AMateria(std::string const& type)
{
	this->type = type;
	std::cout << this->type <<  " AMateria constructor called" << std::endl;
}


AMateria::AMateria(const AMateria& old)
{
	this->type = old.type;
	std::cout << this->type <<  " AMateria copy constructor called" << std::endl;
}

AMateria& AMateria::operator=(const AMateria& rhs)
{
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	std::cout << "Copy assigment operator called" << std::endl;
	return *this;
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor called" << std::endl;
}

std::string AMateria::getType() const
{
	return this->type;
}

void AMateria::use(ICharacter& target)
{
	std::cout << "Metarial used on " << target.getName() << std::endl;
}