#pragma once

#include <string>
#include "ICharacter.hpp"

class Character : public ICharacter {
    Character() {};
    AMateria *container[4];
    std::string name;
public:
    Character(std::string name);
    ~Character();
    Character(Character const &other);
    Character & operator=(Character const &other);

    std::string const &getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
};
