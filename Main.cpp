#include <iostream>
#include "Character.h"
#include "Player.h"
#include "Monster.h"
#include "Boss.h"

// マップ表示する関数
void drawMap(int rows, int cols, int* map) {
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            std::cout << map[cols * r + c];
        }
        std::cout << std::endl;
    }
}

int main() {

    // rows 行　cols 列
    const int rows = 10;
    const int cols = 20;

    // 1次元配列初期化
    int map[rows * cols]{};

    drawMap(rows, cols, map);

    // 多態性
    Character* characters[]{ new Player,new Monster,new Boss };

    for (auto character : characters) {

        character->putStatus();
    }

    for (auto character : characters) {

        delete character;
    }

    return 0;
}