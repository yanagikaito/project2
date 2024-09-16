#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include "Character.h"
#include "Player.h"
#include "Monster.h"
#include "Boss.h"

int main() {

    std::vector<int> numbers = { 1, 3, 3, 5, 0, 4, 5, 2 };

    // �����l���A�����Ă���ŏ��̗v�f����������
    auto it = std::adjacent_find(numbers.begin(), numbers.end());

    if (it == numbers.end()) {
        std::cout << "not found" << std::endl;
    }

    else {

        std::cout << "found: index==" << std::distance(numbers.begin(), it) << std::endl;
        std::cout << "found: index==" << std::distance(numbers.begin(), it) << ", num==" << *it << ", next num==" << *(it + 1) << std::endl;
        std::cout << std::boolalpha << "*it == *(it+1): " << (*it == *(it + 1)) << std::endl;

        // std::greater�͉E�ӂ�荶�ӂ̒l���傫����true��Ԃ�
        std::cout << std::boolalpha << std::greater<int>()(3, 3) << std::endl;
        std::cout << std::boolalpha << std::greater<int>()(5, 3) << std::endl;
    }

    return 0;
}