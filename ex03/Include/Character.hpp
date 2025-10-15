#ifndef __CHARATER_H__
#define __CHARATER_H__

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
private:
	std::string _name;
	AMateria	*_mat[4]; //4 slots and empty on construction
public:
	Character(const std::string name);
	Character(const Character &other);
	Character();
	Character &operator=(const Character &other);
	~Character();
	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};

#endif