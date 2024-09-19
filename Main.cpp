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

// T�Ə������Ƃ��낪�w�肵���^�ɂȂ�B
// N���v�f��
// MyArray���e���v���[�g�����ꂽ�Ƃ������Ƃ͉��^�̔z��ł���邱�Ƃ��ł���B

// �e���v���[�g�N���X
template<typename T, int N>
struct MyArray {

    T elems[N];

    // �Q�Ǝg���č\���̂ɒ�`���Ă���elems[i]���̂���(�A�h���X)��Ԃ��B
    T& at(int i) { return elems[i]; }
    T& operator[](int i) { return elems[i]; }
    int size() { return N; }
};

struct POS {
    int x;
    int y;
};

int main(void) {

    // �R���p�C�����鎞�ɐ��������B
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