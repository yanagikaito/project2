#include <iostream>
#include "Character.h"

int main() {

    // 構造体だとnewしなくてもインスタンスが生成されてコンストラクタが呼ばれている
    Character player("勇者", 100, 5);
    Character monster("スライム", 30, 1);

    player.putStatus();
    monster.putStatus();

    return 0;
}