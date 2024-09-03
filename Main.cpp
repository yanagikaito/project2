#include <iostream>
#include "Player.h"

int main() {

    Player* player = new Player[4]();

    player[0].setName('h');
    player[1].setName('e');
    player[2].setName('r');
    player[3].setName('o');

    for (int i = 0; i < 4; i++) {
        std::cout << player[i].getName() << std::endl;
    }

    player->setHp(100);
    int hp = player->getHp();
    std::cout << hp << std::endl;

    player->setLv(5);
    int lv = player->getLv();
    std::cout << lv << std::endl;
    return 0;
}