#include "WrongAnimal.hpp"
#include "Animal.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"


int	main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* l = new WrongAnimal();
	const WrongAnimal* k = new WrongCat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	l->makeSound();
	k->makeSound();
	delete meta;
	delete i;
	delete j;
	delete l;
	delete k;
	return (0);
}