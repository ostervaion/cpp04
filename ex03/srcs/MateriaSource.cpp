#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource default constructor" << std::endl;
	for (int i = 0; i < 4; i++)
	_mat[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	std::cout << "MateriaSource copy constructor" << std::endl;
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

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
	std::cout << "MateriaSource assignment operator" << std::endl;
	if (this != &other)
	{
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

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource default destructor" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (_mat[i] != NULL)
			delete _mat[i];
	}
}

void MateriaSource::learnMateria(AMateria *materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (_mat[i] == NULL)
		{
			_mat[i] = materia;
			std::cout << "Material added to source" << std::endl;
			return ;
		}
	}
	std::cout << "Source is full to be added" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_mat[i] != NULL && _mat[i]->getType() == type)
		{
			std::cout << "Material created from source" << std::endl;
			if (type == "ice")
				return (new Ice());
			else
				return (new Cure());
		}
	}
	std::cout << "Material not found in source" << std::endl;
	return (NULL);
}