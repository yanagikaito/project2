#include <iostream>
#include <list>
#include "Character.h"
#include "Player.h"
#include "Monster.h"
#include "Boss.h"

int main(void) {

    // vector�ƈ���ă|�C���^�ŏ��ԂɒH���Ă����Ȃ���΂Ȃ�Ȃ�
    // �v�f�̒ǉ��ƍ폜������

    std::list<int> data;
    Player<int> player;
    Monster<int> monster;
    Boss<int> boss;

    std::cout << "emplace_front �ŏ��ɑ}��" << endl;
    std::cout << "emplace_back ������ɒǉ�" << endl;

    data.emplace_front(1);
    data.emplace_back(2);
    player.putStatus(data.front(), data.back());

    data.emplace_front(3);
    data.emplace_back(4);
    monster.putStatus(data.front(), data.back());

    data.emplace_front(5);
    data.emplace_back(6);
    boss.putStatus(data.front(), data.back());

    return 0;

}