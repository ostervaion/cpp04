#include "Cat.hpp"


Cat::Cat(const Cat &other)
{
	std::cout << "Cat copy constructor called" << std::endl;
	_type = other.getType();
	delete _brain;
	_brain = new Brain(*(other.getBrain()));
}

Cat::Cat()
{
	std::cout << "Cat default constructor called" << std::endl;
	_type = "Cat";
	_brain = new Brain();
}

Cat &Cat::operator=(const Cat &other)
{
	std::cout << "Cat assignment operator called" << std::endl;
	if (this != &other)
	{
		_type = other._type;
		delete _brain;
		_brain = new Brain(*(other.getBrain()));
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete _brain;
}

void	Cat::makeSound() const
{
	std::cout << "Miau" << std::endl;
}

Brain*	Cat::getBrain() const
{
	return (_brain);
}