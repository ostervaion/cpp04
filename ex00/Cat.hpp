#ifndef __CAT_H__
# define __CAT_H__

# include "Animal.hpp"
# include <iostream>

class Cat : public Animal
{
	public:
		Cat(const Cat &other);
		Cat();
		Cat &operator=(const Cat &other);
		~Cat();
		void	makeSound() const;
	};
#endif