#include <iostream>
#include "Character.h"
#include "Player.h"
#include "Monster.h"
#include "Boss.h"

// �}�b�v�\������֐�
void drawMap(int rows, int cols, int** p) {
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            std::cout << p[r][c];
        }
        std::cout << std::endl;
    }
}

int main() {

    const int rows = 20;
    const int cols = 20;

    // 2�����z�񏉊���
    int map[rows][cols]{};

    int** p = new int* [rows];

    // �e�s�̐擪�A�h���X������B
    for (int r = 0; r < rows; r++) p[r] = map[r];

    drawMap(rows, cols, p);
    delete[]p;

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