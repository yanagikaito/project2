#include <iostream>
#include "Character.h"
#include "Player.h"
#include "Monster.h"
#include "Boss.h"

// �}�b�v�\������֐�
void drawMap(int rows, int cols, int* map) {
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            std::cout << map[cols * r + c];
        }
        std::cout << std::endl;
    }
}

int main() {

    // rows �s�@cols ��
    const int rows = 10;
    const int cols = 20;

    // 1�����z�񏉊���
    int map[rows * cols]{};

    drawMap(rows, cols, map);

    // ���Ԑ�
    Character* characters[]{ new Player,new Monster,new Boss };

    for (auto character : characters) {

        character->putStatus();
    }

    for (auto character : characters) {

        delete character;
    }

    return 0;
}