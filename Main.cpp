#include <iostream>

// 関数のオーバロード(引数が違うと,同じ名前の関数を定義できる)
void setNum(int num) {

    std::cout << "int:" << num << std::endl;
}

void setNum(float num) {

    std::cout << "float:" << num << std::endl;
}

void setNum(double num) {

    std::cout << "double:" << num << std::endl;
}

int main() {

    setNum(5);

    setNum(5.0f);

    setNum(5.0);

    return 0;
}