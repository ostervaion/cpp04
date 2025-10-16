#include "Cure.hpp"

Cure::Cure(const Cure &other) : AMateria(other._type)
{
	std::cout << "Cure copy constructor" << std::endl;
}

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure default constructor" << std::endl;
}

Cure &Cure::operator=(const Cure &other)
{
	(void)other;
/* 	if (this != &other)
	{
		_type = other._type;
	} */
	return (*this);
}

Cure::~Cure()
{
	std::cout << "Cure default destructor" << std::endl;
}

AMateria* Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "\'s wounds *" << std::endl;
}