#ifndef __ICE__H__
#define __ICE__H__

#include "AMateria.hpp"

class Ice : public AMateria 
{
	public:
		Ice(const Ice &other);
		Ice();
		Ice &operator=(const Ice &other);
		~Ice();
		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif