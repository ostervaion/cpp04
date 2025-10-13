#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &other)
{
	std::cout << "Brain copy constructor called" << std::endl;
	(*this) = other;
}

Brain &Brain::operator=(const Brain &other)
{
	std::cout << "Brain assignment operator called" << std::endl;
	if (this != &other)
	{
		for (size_t i = 0; i < _ideas->length() && i < other._ideas->length(); i++)
		_ideas[i].assign(other._ideas[i], 0, other._ideas[i].length());
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}