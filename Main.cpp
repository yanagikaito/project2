#include <iostream>
#include <vector>
#include "Character.h"
#include "Player.h"
#include "Monster.h"
#include "Boss.h"

void print_vector_info(const std::vector<int>& v) {
    std::cout << "size = " << v.size() << ", capacity = " << v.capacity() << std::endl;
}
int main() {

    std::vector<int> numbers = { 3,1,-4,1,-5,9,-2,6,5,3 };
    print_vector_info(numbers);

    /*numbers.reserve();*/
    std::cout << "------------------" << std::endl;
    print_vector_info(numbers);
    std::cout << "------------------" << std::endl;

    for (int i = 0; i < 5; i++) {
        numbers.emplace_back(i);
        print_vector_info(numbers);
        std::cout << "------------------" << std::endl;
    }
    print_vector_info(numbers);

    return 0;
}