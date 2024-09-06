#include <iostream>
#include "Character.h"

int main() {

    Character player("—EÒ", 100, 5);
    Character monster("ƒXƒ‰ƒCƒ€", 30, 1);

    player.putStatus();
    monster.putStatus();

    return 0;
}