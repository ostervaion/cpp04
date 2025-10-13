#ifndef __DOG_H__
# define __DOG_H__

# include "Animal.hpp"
# include <iostream>
# include "Brain.hpp"

class	Dog : public Animal
{
	private:
		Brain *_brain;
	public:
		Dog(const Dog &other);
		Dog();
		Dog &operator=(const Dog &other);
		~Dog();
		void	makeSound() const;
		Brain*	getBrain() const;
	};
#endif