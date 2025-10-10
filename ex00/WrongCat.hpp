#ifndef __WRONG_CAT_H__
# define __WRONG_CAT_H__

# include "WrongAnimal.hpp"
# include <iostream>

class WrongCat : public WrongAnimal
{
	public:
		WrongCat(const WrongCat &other);
		WrongCat();
		WrongCat &operator=(const WrongCat &other);
		~WrongCat();
		void	makeSound() const;
	};
#endif