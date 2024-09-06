#include <iostream>
#include "Character.h"

int main() {

    // 構造体だとnewしなくてもインスタンスが生成されてコンストラクタが呼ばれている
    Character player("勇者", 100, 5);
    Character monster("スライム", 30, 1);

    // classではprivateだと.なんとかでの呼び出しはできなくなる
    player.putStatus();
    monster.putStatus();

    return 0;
}