#include <iostream>
#include "Character.h"
#include "Player.h"
#include "Monster.h"
#include "Boss.h"

int main() {

    // ポインタのポインタ
    int** p;

    // rows 行　cols 列
    int row;
    int col{};

    std::cout << "行数を入力してください";

    cin >> row;

    cout << "列数を入力してください";

    cin >> col;

    // 記憶場所を用意

    // 行を確保
    p = new int* [row];

    // 列を確保
    for (int i = 0; i < row; i++) {
        p[i] = new int[col];
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            p[i][j] = i * col + j;
        }
    }

    // 値を表示
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << p[i][j] << " ";
        }
        cout << endl;
    }

    // メモリの解放
    for (int i = 0; i < row; i++) {
        delete[] p[i];
    }
    delete[] p;

    return 0;
}