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
            n[NUM_X][NUM_Y] = {
                x * EDGE,
                y * EDGE,
            };
        }
    }

    V* p;                 // 各要素を参照するためのポインタ

    printf("[サンプル]変数nのアドレス：%d\r\n", &n);

    printf("n[NUM_X]のアドレス:%d\r\n", n[NUM_X]);
    printf("n[NUM_Y]のアドレス:%d\r\n", n[NUM_Y]);

    p = &n[NUM_X][NUM_Y];   // VのポインタへV配列の先頭アドレスを渡す。

    for (int y = 0; y < NUM_Y; y++) {
        for (int x = 0; x < NUM_X; x++) {
            p->x = x;
            printf("[重要]p->xの値の結果:%d\r\n", p->x);
        }
        p->y = y;
        printf("[重要]p->yの値の結果:%d\r\n", p->y);
    }

    return 0;
}