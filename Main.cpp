#include <iostream>
#include "Character.h"

int main() {

    Character player("�E��", 100, 5);
    Character monster("�X���C��", 30, 1);

    player.putStatus();
    monster.putStatus();

    return 0;
}