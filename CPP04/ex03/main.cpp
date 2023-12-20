
#include "AMateria.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	MateriaSource* src = new MateriaSource();
	AMateria *i1 = new Ice();
	AMateria *i2 = new Cure();
	Character c1("Anil");
	Character c2("Yusuf");
	c1.equip(i2);
	c1.equip(i1);
	c1.equip(i2);
	c1.equip(i1);
	c1.use(0, c2);
	c1.use(1, c2);
	c1.use(2, c2);
	c1.use(3, c2);
	c1.use(4, c2);
	AMateria* tmp;
	src->learnMateria(i1);

	tmp = src->createMateria("Ice");
	c1.unequip(0);
	c1.equip(tmp);
	c1.use(0, c2);
	delete i1;
	delete i2;
	delete src;
	delete tmp;
 }