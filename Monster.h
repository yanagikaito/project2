#include <iostream>
#include <string>
#include "Character.h"

class Monster : public Character {

public:
    Monster() {

    }

public:
    virtual void setName(std::string name);
    virtual std::string getName();
    virtual void setHp(int hp);
    virtual int getHp();
    virtual void setLv(int lv);
    virtual int getLv();
};

void Monster::setName(std::string name) {
    name = name;
}
std::string Monster::getName() {
    return name;
}

void Monster::setHp(int hp) {
    Hp = hp;
}

int Monster::getHp() {
    return Hp;
}

void Monster::setLv(int lv) {
    Lv = lv;
}

int Monster::getLv() {
    return Lv;
}

