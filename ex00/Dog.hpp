#ifndef __DOG_H__
# define __DOG_H__

# include "Animal.hpp"
# include <iostream>

class	Dog : public Animal
{
	public:
		Dog(const Dog &other);
		Dog();
		Dog &operator=(const Dog &other);
		~Dog();
		void	makeSound() const;
	};
#endif