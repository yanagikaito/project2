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


    data.emplace_back(2);

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

    std::list<int> data2;

    data2.emplace_front(4);

    // 奇数の前に偶数をを挿入
    int odd2 = 2;
    auto it2 = data2.begin();
    while (it2 != data2.end()) {
        if (*it2 % 2 == 1) {
            it2 = data2.emplace(it2, odd2);
            ++it2;
            ++it2;
            odd2 += 2;
        }
        else {
            ++it2;
        }
    }

    data.emplace_front(data.front());
    data.emplace_back(data.back());
    player.putStatus(data.front(), data.back());

    data2.emplace_front(3);
    data2.emplace_back(data2.back());
    monster.putStatus(data2.front(), data2.back());

    data.emplace_front(5);
    data.emplace_back(6);
    boss.putStatus(data.front(), data.back());

    return 0;

}