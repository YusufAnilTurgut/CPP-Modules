
#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"


class Cure : public AMateria
{
	public:
		Cure();
		~Cure();
		Cure(const Cure &old);
		Cure &operator = (const Cure &);

		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif