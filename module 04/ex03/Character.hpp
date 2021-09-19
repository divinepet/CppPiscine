#pragma once

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter {
	string name;
	AMateria **inventory;
	void freeArray();
public:
	Character(string const &name);
	Character(const Character& source);
	virtual ~Character();

	Character& operator=(const Character &source);

	virtual string const& getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
};

std::ostream &operator<<(std::ostream &out, Character const &other);