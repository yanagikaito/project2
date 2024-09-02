#include <iostream>

struct POS {
    int x, y;
};

// 参照(reference)
void setNum(POS* p) {

    // *pってやるとa == *pと同じである
    *p = { 100,200 };

    std::cout << p->x << ' ' << p->y << std::endl;
}

// 表示するだけの関数
void setNum(const POS& r) {

    std::cout << r.x << ' ' << r.y << std::endl;
}

void init(POS& r) {
    r.x = 0;
    r.y = 0;
}

int main() {

    // 実体
    POS a{ 0,0 };

    // a.x == p->x
    // a.y == p->y
    // 同じである

    a.x = 1;
    a.y = 1;

    // ポインタにアドレスを渡す。
    setNum(&a);

    init(a);

    // 中身はポインタが渡されている
    setNum(a);

    return 0;
}