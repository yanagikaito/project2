#include <iostream>
#include <list>
#include <iterator>
#include "Character.h"
#include "Player.h"
#include "Monster.h"
#include "Boss.h"

int main(void) {

    // vector‚Æˆá‚Á‚Äƒ|ƒCƒ“ƒ^‚Å‡”Ô‚É’H‚Á‚Ä‚¢‚©‚È‚¯‚ê‚Î‚È‚ç‚È‚¢
    // —v‘f‚Ì’Ç‰Á‚Æíœ‚ª“¾ˆÓ

    std::list<int> data;
    Player<int> player;
    Monster<int> monster;
    Boss<int> boss;

    std::cout << "emplace_front Å‰‚É‘}“ü" << endl;
    std::cout << "emplace_back ‚¨‚µ‚è‚É’Ç‰Á" << endl;

    data.emplace_front(1);
    data.emplace_back(2);

    data.emplace_front(3);
    data.emplace_back(4);

    data.emplace_front(5);
    data.emplace_back(6);

    // ‹ô”‚Ì‘O‚ÉŠï”‚ğ‘}“ü
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