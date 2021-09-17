#pragma once

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

using std::string;
using std::cout;
using std::endl;

class Character : public ICharacter {
	string name;
	AMateria **inventory;
	void freeArray();
public:
	Character(string const &name);
	virtual ~Character();
	Character& operator=(const Character &source);
	Character(const Character& source);
	virtual string const& getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
};

