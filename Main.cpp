#include <iostream>
#include "Player.h"

int main() {

    Player* player = new Player();

    player->setName('hero');
    char name = player->getName();
    std::cout << name << std::endl;

    player->setHp(100);
    int hp = player->getHp();
    std::cout << hp << std::endl;

    player->setLv(5);
    int lv = player->getLv();
    std::cout << lv << std::endl;

    return 0;
}