#include <iostream>
#include <list>
#include <iterator>
#include "Character.h"
#include "Player.h"
#include "Monster.h"
#include "Boss.h"

int main(void) {

    // vectorと違ってポインタで順番に辿っていかなければならない
    // 要素の追加と削除が得意

    std::list<int> data;
    Player<int> player;
    Monster<int> monster;
    Boss<int> boss;

    std::cout << "emplace_front 最初に挿入" << endl;
    std::cout << "emplace_back おしりに追加" << endl;


    // 偶数の前に奇数を挿入
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