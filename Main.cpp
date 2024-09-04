#include <iostream>
#include "Player.h"

void putStatus(Player* player) {

    player->setName("hero");

    std::cout << "-----------" << ' ' << std::endl;

    std::cout << player->getName() << ' ';

    player->setHp(100);
    int hp = player->getHp();

    std::cout << "HP" << ' ' << hp << std::endl;

    std::cout << "-----------" << ' ' << std::endl;

    player->setLv(5);
    int lv = player->getLv();

    std::cout << "LV" << ' ' << lv << std::endl;

    std::cout << "-----------" << ' ' << std::endl;

}

int main() {

    Player* player;

    player = new Player();

    putStatus(player);

    return 0;
}