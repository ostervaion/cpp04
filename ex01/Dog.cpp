#include "Dog.hpp"

Dog::Dog(const Dog &other)
{
	std::cout << "Dog copy constructor called" << std::endl;
	delete _brain;
	_type = other._type;
	_brain = new Brain(*(other.getBrain()));
}

Dog::Dog()
{
	std::cout << "Dog default constructor called" << std::endl;
	_type = "Dog";
	_brain =  new Brain();
}

Dog &Dog::operator=(const Dog &other)
{
	std::cout << "Dog assignment operator called" << std::endl;
	if (this != &other)
	{
		_type = other._type;
		delete _brain;
		_brain = new Brain(*(other.getBrain()));
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete _brain;
}

void	Dog::makeSound() const
{
	std::cout << "Guau" << std::endl;
}

Brain*	Dog::getBrain() const
{
	return (_brain);
}