#include <stdio.h>
#include <iostream>
#define NUM_X (10)
#define NUM_Y (20)
#define EDGE  (32)

struct V {
    int x;
    int y;
};

int main(void) {

    V n[NUM_X][NUM_Y];    // 要素は10,20 (各要素については初期化していないため適当な値が入っている）

    for (int y = 0; y < NUM_Y; y++) {
        for (int x = 0; x < NUM_X; x++) {
            n[x][y] = {
                x * EDGE,
                y * EDGE,
            };
        }
    }

    V* p;                 // 各要素を参照するためのポインタ

    printf("[サンプル]変数nのアドレス：%d\r\n", &n);

    printf("n[0][0]のアドレス:%d\r\n", n[0][0]);

    printf("n[NUM_X - 1],n[NUM_Y - 1]のアドレス:%d,%d\r\n", n[NUM_X - 1], n[NUM_Y - 1]);

    p = &n[NUM_X - 1][NUM_Y - 1];   // VのポインタへV配列の先頭アドレスを渡す。

    int sum;

    for (int y = 0; y < NUM_Y; y++) {
        for (int x = 0; x < NUM_X; x++) {
            p->x = x;
            printf("[重要]p->xの値の結果:%d\r\n", p->x);
        }
        p->y = y;
        printf("[重要]p->yの値の結果:%d\r\n", p->y);
    }
    sum = p->x + p->y;
    printf("sumの値の結果:%d\r\n", sum);
    return 0;
}