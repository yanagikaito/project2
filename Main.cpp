#include <iostream>
#include <list>
#include <iterator>
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

    data.emplace_front(3);
    data.emplace_back(4);

    data.emplace_front(5);
    data.emplace_back(6);

    // �����̑O�Ɋ��}��
    int odd = 1;
    auto it = data.begin();
    while (it != data.end()) {
        if (*it % 2 == 0) {
            it = data.emplace(it, odd);
            ++it;
            ++it;
            odd += 2;
        }
        else {
            ++it;
        }
    }

    data.emplace_front(data.front());
    data.emplace_back(data.back());
    player.putStatus(data.front(), data.back());

    data.emplace_front(data.front());
    data.emplace_back(data.back());
    monster.putStatus(data.front(), data.back());

    data.emplace_front(data.front());
    data.emplace_back(data.back());
    boss.putStatus(data.front(), data.back());

    return 0;

}