#include <iostream>
#include "Character.h"
#include "Player.h"
#include "Monster.h"

int main() {

    // インスタンス(実例)をつくる。
    // 設計図をもとにしてつくる。
    // 構造体でもclassでもnewしなくてもインスタンスが生成されてコンストラクタが呼べる。
    Player player;
    Monster monster;

    std::cout << player.getName() << std::endl;
    std::cout << player.getHP() << std::endl;

    // classではprivateだと.なんとかでの呼び出しはできなくなる
    // メンバ変数を外部から変な値を入れなくするため

    player.putStatus();
    monster.putStatus();

    return 0;
}