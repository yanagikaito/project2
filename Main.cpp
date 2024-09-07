#include <iostream>
#include "Character.h"
#include "Player.h"
#include "Monster.h"

int main() {

    // インスタンス(実例)をつくる。
    // 設計図をもとにしてつくる。
    // 構造体でもclassでもnewしなくてもインスタンスが生成されてコンストラクタが呼べる。

    Player player;

    // classではprivateだと.なんとかでの呼び出しはできなくなる
    // メンバ変数を外部から変な値を入れなくするため

    player.putStatus();

    std::cout << std::endl;

    // Playerクラスのインスタンスのアドレス(派生クラスのアドレス)
    // アドレスはCharacterクラスのポインタ(基底クラスのポインタ)
    // 基底クラスのポインタに派生クラスのインスタンスのアドレスが入れられる。

    Character* character{ new Player };

    character->putStatus();

    std::cout << std::endl;

    delete character;

    return 0;
}