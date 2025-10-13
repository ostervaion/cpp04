#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main()
{
	Animal* j = new Dog();
	Animal* k = new Dog();
	Animal* i = new Cat();
	Animal* l = new Cat();

	(*j) = (*k);
	(*i) = (*l);
	std::cout << "1" << std::endl;
	delete j;//should not create a leak
	std::cout << "2" << std::endl;
	delete i;
	std::cout << "3" << std::endl;
	delete k;
	std::cout << "4" << std::endl;
	delete l;
	return (0);
}