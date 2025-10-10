#ifndef __WRONG_ANIMAL_H__
# define __WRONG_ANIMAL_H__

# include <iostream>

class WrongAnimal
{
	protected:
		std::string _type;
	public:
		WrongAnimal(const WrongAnimal &other);
		WrongAnimal();
		WrongAnimal &operator=(const WrongAnimal &other);
		virtual ~WrongAnimal();
		void	makeSound() const;
		std::string getType() const;
	};
#endif