#ifndef __ANIMAL_H__
# define __ANIMAL_H__

# include <iostream>

class Animal
{
	protected:
		std::string _type;
	public:
		virtual ~Animal() = 0;
		virtual void	makeSound() const = 0;
		virtual std::string getType() const = 0;
	};
#endif