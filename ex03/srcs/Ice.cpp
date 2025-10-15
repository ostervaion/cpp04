#include "Ice.hpp"

Ice::Ice(const Ice &other) : AMateria(other._type)
{
	std::cout << "Cure copy constructor" << std::endl;
}

Ice::Ice() : AMateria("ice")
{
	std::cout << "Cure default constructor" << std::endl;
}

Ice &Ice::operator=(const Ice &other)
{
	(void)other;
	/* 	if (this != &other)
	{
		_type = other._type;
	} */
	return (*this);
}

Ice::~Ice()
{
	std::cout << "Cure default destructor" << std::endl;
}

AMateria* Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}