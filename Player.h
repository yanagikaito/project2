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

    void setHp(int hp) override {
        Hp = hp;
    }

    int getHp() override {
        return Hp;
    }

    void setLv(int lv) override {
        Lv = lv;
    }

    int getLv() override {
        return Lv;
    }
};