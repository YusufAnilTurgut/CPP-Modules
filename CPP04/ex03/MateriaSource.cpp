#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		this->materia[i] = NULL;
	}
	
}


MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource destroyer called" <<  std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->materia[i] != NULL)
		{
			delete this->materia[i];
		}
		
	}
}

MateriaSource::MateriaSource(const MateriaSource& copy)
{
	int i = 0;
	while (copy.materia[i] != NULL)
	{
		this->materia[i] = copy.materia[i];
	}
	
}

MateriaSource& MateriaSource::operator=(const MateriaSource &rhs)
{
	if (this != &rhs)
	{
		int i = 0;
		while (rhs.materia[i] != NULL)
		{
			this->materia[i] = rhs.materia[i];
		}
	}
	return *this;
}


void MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->materia[i] == NULL)
		{
			this->materia[i] = m->clone();
			break;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->materia[i]->getType() == type && this->materia[i] != NULL)
		{
			return this->materia[i]->clone();
		}
	}
	return 0;
}