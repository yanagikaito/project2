#include <iostream>
#include "Character.h"
#include "Player.h"
#include "Monster.h"

void putStatus(Character* character, std::string name) {

    character->setName(name);

    std::cout << "-----------" << ' ' << std::endl;

    std::cout << character->getName() << ' ';

    character->setHp(100);
    int hp = character->getHp();

    std::cout << "HP" << ' ' << hp << std::endl;

    std::cout << "-----------" << ' ' << std::endl;

    character->setLv(5);
    int lv = character->getLv();

    std::cout << "LV" << ' ' << lv << std::endl;

    std::cout << "-----------" << ' ' << std::endl;

}

int main() {

    Player* player = new Player();

    Monster* monster = new Monster();

    putStatus(player, "hero");

    putStatus(monster, "ƒXƒ‰ƒCƒ€");

    return 0;
}