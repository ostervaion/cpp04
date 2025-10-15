#include "Animal.hpp"
/* 
Animal::Animal(const Animal &other)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = other;
}

Animal::Animal() : _type("?")
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
	std::cout << "Animal assignment operator called" << std::endl;
	if (this != &other)
		_type = other._type;
	return (*this);
}

void	Animal::makeSound() const
{
	std::cout << "Unrecognizable sound" << std::endl;
}
*/

Animal::~Animal()
{
	//std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType() const
{
	return (_type);
}
