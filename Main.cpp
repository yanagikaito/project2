#include <iostream>
#include <vector>
#include "Character.h"
#include "Player.h"
#include "Monster.h"
#include "Boss.h"

struct POS {
    int x, y;
    POS() :x(0), y(0)
    {
        std::cout << "initialized(" << x << "," << y << ")\n";
    }
    // 変換コンストラクタ
    POS(int x, int y) :x(x), y(y)
    {
        std::cout << "converted(" << x << "," << y << ")\n";
    }

    // コピーコンストラクタ
    POS(const POS& pos) :x(pos.x), y(pos.y)
    {
        std::cout << "copied(" << x << "," << y << ")\n";
    }
};

// クラスに対してoperator<<をオーバーロードしています。
ostream& operator << (ostream& os, const POS& pos) {
    return os << pos.x << "," << pos.y;
}

int main() {

    //POS pos1;

    //// int型がPOS型に変換される
    //POS pos2{ 1,1 };

    //POS pos3 = pos2;

    // 要素数を変更できる配列

    std::vector<POS> data;

    // リザーブ メモリ上に最初から3つ分用意する。
    data.reserve(3);

    //おしりに要素を追加
    for (int i = 1; i <= 3; i++) {
        std::cout << "-----------------" << std::endl;
        std::cout << "push_back" << " " << i << "回目 ";
        data.push_back({ i,i * 10 });

        // data.capacity() 実際に表示されている数
        std::cout << "-----------------" << std::endl;
        /*  std::cout << "push_back" << " " << i << "回目 " << " " << data.size() << " ";

          std::cout << data.capacity() << std::endl;
          */
    }
    std::cout << "-----------------" << std::endl;

    for (auto it = data.begin(); it != data.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}