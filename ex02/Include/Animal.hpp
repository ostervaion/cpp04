#ifndef __ANIMAL_HPP__
# define __ANIMAL_HPP__

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