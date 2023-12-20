#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"

class MateriaSource
{
private:
	AMateria *materia[4];
public:
	MateriaSource();
	~MateriaSource();
	MateriaSource(const MateriaSource &);
	MateriaSource   &operator = (const MateriaSource &);

	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
};



#endif