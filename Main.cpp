#include <iostream>
#include "Player.h"
#include "Monster.h"

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

void putMonster(Monster* monster) {

    monster->setName("ƒXƒ‰ƒCƒ€");

    std::cout << "-----------" << ' ' << std::endl;

    std::cout << monster->getName() << ' ';

    monster->setHp(10);
    int hp = monster->getHp();

    std::cout << "HP" << ' ' << hp << std::endl;

    std::cout << "-----------" << ' ' << std::endl;

    monster->setLv(5);
    int lv = monster->getLv();

    std::cout << "LV" << ' ' << lv << std::endl;

    std::cout << "-----------" << ' ' << std::endl;
}

int main() {

    Player* player = new Player();

    Monster* monster = new Monster();

    putStatus(player);

    putMonster(monster);

    return 0;
}