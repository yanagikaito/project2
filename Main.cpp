#include <iostream>
#include "Player.h"

int main() {

    Player* player = new Player[5]();

    player[0].setName('h');
    player[1].setName('e');
    player[2].setName('r');
    player[3].setName('o');
    player[4].setName(' ');

    std::cout << "-----------" << ' ' << std::endl;

    for (int i = 0; i < 5; i++) {
        std::cout << player[i].getName();
    }

    player->setHp(100);
    int hp = player->getHp();
    std::cout << "HP" << ' ' << hp << std::endl;

    std::cout << "-----------" << ' ' << std::endl;

    player->setLv(5);
    int lv = player->getLv();
    std::cout << "LV" << ' ' << lv << std::endl;

    std::cout << "-----------" << ' ' << std::endl;

    return 0;
}