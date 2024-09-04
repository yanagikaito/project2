#include <iostream>
#include <string>
#include <map>
#include "Character.h"

class Player : public Character {

public:
    Player() {

    }

public:
    void setName(std::string name) {
        this->name = name;
    }
    std::string getName() {
        return this->name;
    }
};

void Character::setName(char name) {
    Name = name;
}

char Character::getName() {
    return Name;
}

void Character::setHp(int hp) {
    Hp = hp;
}

int Character::getHp() {
    return Hp;
}

void Character::setLv(int lv) {
    Lv = lv;
}

int Character::getLv() {
    return Lv;
};