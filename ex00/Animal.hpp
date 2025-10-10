#ifndef __ANIMAL_H__
# define __ANIMAL_H__

# include <iostream>

class Animal
{
	protected:
		std::string _type;
	public:
		Animal(const Animal &other);
		Animal();
		Animal &operator=(const Animal &other);
		virtual ~Animal();
		virtual void	makeSound() const;
		std::string getType() const;
	};
#endif