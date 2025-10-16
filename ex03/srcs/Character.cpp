#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

Character::Character(const std::string name) : _name(name)
{
	std::cout << "Character parameterized constructor" << std::endl;
	for (int i = 0; i < 4; i++)
		_mat[i] = NULL;
}

Character::Character(const Character &other) : _name(other._name)
{
	std::cout << "Character copy constructor" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (other._mat[i] == NULL)
			_mat[i] = NULL;
		else
		{
			if (other._mat[i]->getType() == "ice")
				_mat[i] = new Ice();
			else
				_mat[i] = new Cure();
		}
	}
}

Character::Character() : _name("Default")
{
	std::cout << "Character default constructor" << std::endl;
	for (int i = 0; i < 4; i++)
		_mat[i] = NULL;
}

Character &Character::operator=(const Character &other)
{
	std::cout << "Character assignment constructor" << std::endl;
	if (this != &other)
	{
		_name = other.getName();
		for (int i = 0; i < 4; i++)
		{
			if (_mat[i] != NULL)
				delete _mat[i];
			if (other._mat[i] == NULL)
				_mat[i] = NULL;
			else
			{
				if (other._mat[i]->getType() == "ice")
				_mat[i] = new Ice();
				else
				_mat[i] = new Cure();
			}
		}
	}
	return (*this);
}

Character::~Character()
{
	std::cout << "Character default destructor" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (_mat[i] != NULL)
			delete _mat[i];
	}
}

std::string const &Character::getName() const
{
	return (_name);
}

void Character::equip(AMateria* m)
{
	std::cout << "equip" << std::endl;

	for (int i = 0; i < 4; i++)
	{
		if (_mat[i] == NULL)
		{
			_mat[i] = m;
			break ;
		}
	}
}

void Character::unequip(int idx)
{
	std::cout << "unequip" << std::endl;
	if (idx < 0 || idx >= 4)
		return ;
	if (_mat[idx] != NULL)
		_mat[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (_mat[idx] != NULL)
		_mat[idx]->use(target);
}
