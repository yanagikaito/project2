#include <iostream>
#include "Character.h"
#include "Player.h"
#include "Monster.h"
#include "Boss.h"

int main() {

    // �|�C���^�̃|�C���^
    int** p;

    // rows �s�@cols ��
    int row;
    int col{};

    std::cout << "�s������͂��Ă�������";

    cin >> row;

    cout << "�񐔂���͂��Ă�������";

    cin >> col;

    // �L���ꏊ��p��

    // �s���m��
    p = new int* [row];

    // ����m��
    for (int i = 0; i < row; i++) {
        p[i] = new int[col];
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            p[i][j] = i * col + j;
        }
    }

    // �l��\��
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << p[i][j] << " ";
        }
        cout << endl;
    }

    // �������̉��
    for (int i = 0; i < row; i++) {
        delete[] p[i];
    }
    delete[] p;

    return 0;
}