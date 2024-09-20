#include <iostream>
#include "Character.h"
#include "Player.h"
#include "Monster.h"
#include "Boss.h"

int main(void) {

    // コンパイルする時に生成される。
    Player<int> player;

    Monster<int> monster;

    Boss<int> boss;

    player.putStatus();

    monster.putStatus();

    boss.putStatus();

    return 0;

}