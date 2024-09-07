#include <iostream>
#include "Character.h"
#include "Player.h"
#include "Monster.h"

int main() {

    // ���Ԑ�
    Character* characters[]{ new Player,new Monster };

    for (auto character : characters) {

        character->putStatus();
    }

    for (auto character : characters) {

        delete character;
    }

    return 0;
}