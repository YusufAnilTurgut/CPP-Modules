#include "Cure.hpp"

Cure::Cure()
{
	this->type = "Cure";
	std::cout << "Default Cure constructor called" << std::endl;
}

Cure::Cure(const Cure& old) : AMateria(old)
{
	this->type = old.type;
	std::cout << this->type <<  " Cure copy constructor called" << std::endl;
}

Cure& Cure::operator=(const Cure& rhs)
{
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	std::cout << "Copy assigment operator called" << std::endl;
	return *this;
}

Cure::~Cure()
{
	std::cout << "Cure destructor called" << std::endl;
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" <<  std::endl;
}

AMateria* Cure::clone() const
{
	return new Cure();
}