#include <iostream>
#include "Character.h"
#include "Player.h"
#include "Monster.h"
#include "Boss.h"

int main(void) {

    // �R���p�C�����鎞�ɐ��������B
    Player<int> player;

    Monster<int> monster;

    Boss<int> boss;

    player.putStatus();

    monster.putStatus();

    boss.putStatus();

    return 0;

}