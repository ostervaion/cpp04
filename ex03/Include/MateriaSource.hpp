#ifndef __MATERIA_SOURCE_H__
# define __MATERIA_SOURCE_H__

# include "AMateria.hpp"
# include "IMateriaSource.hpp"
class MateriaSource : public IMateriaSource
{
	private:
		AMateria *_mat[4];
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &other);
		MateriaSource &operator=(const MateriaSource &other);
		~MateriaSource();
		void learnMateria(AMateria *materia);
		AMateria* createMateria(std::string const & type);
};

#endif