#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <random>
#include <array>
#include "Character.h"
#include "Player.h"
#include "Monster.h"
#include "Boss.h"

// Tと書いたところが指定した型になる。
// Nが要素数
// MyArrayがテンプレート化されたということは何型の配列でも作ることができる。

// テンプレートクラス
template<typename T, int N>
struct MyArray {

    T elems[N];

    // 参照使って構造体に定義しているelems[i]そのもの(アドレス)を返す。
    T& at(int i) { return elems[i]; }
    T& operator[](int i) { return elems[i]; }
    int size() { return N; }
};

struct POS {
    int x;
    int y;
};

int main(void) {

    // コンパイルする時に生成される。
    MyArray<int, 3> arr;

    for (int i = 0; i < arr.size(); i++) {
        /*arr.at(i) = i + 1;*/
        arr[i] = i + 1;
    }

    for (int i = 0; i < arr.size(); i++) {
        /*std::cout << arr.at(i) << std::endl;*/
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;

    MyArray<POS, 3> array;

    for (int i = 0; i < arr.size(); i++) {
        array[i].x = i + 1;
        array[i].y = i + 11;
    }

    for (int i = 0; i < arr.size(); i++) {
        /*std::cout << arr.at(i) << std::endl;*/
        std::cout << array[i].x << ' ';
        std::cout << array[i].y << std::endl;
    }

    return 0;

}