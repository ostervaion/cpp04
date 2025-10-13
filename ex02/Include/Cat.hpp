#ifndef __CAT_H__
# define __CAT_H__

# include "Animal.hpp"
# include <iostream>
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain *_brain;
	public:
		Cat(const Cat &other);
		Cat();
		Cat &operator=(const Cat &other);
		~Cat();
		void	makeSound() const;
		Brain*	getBrain() const;
	};
#endif