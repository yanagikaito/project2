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

template < typename Engine >
bool open_chest(Engine& e)
{
    std::bernoulli_distribution d(37.0 / 100.0);

    return d(e);
}

int main() {

    // 試行回数
    const int trial_count = 1000;

    std::mt19937 e;

    // ベルヌーイ分布
    std::bernoulli_distribution d(37.0 / 100.0);

    std::array<int, 2> result{};

    for (int i = 0; i != trial_count; ++i)

        ++result[d(e)];

    std::cout << "false: " << double(result[0]) / double(trial_count) * 100.0 << std::endl;
    std::cout << "true : " << double(result[1]) / double(trial_count) * 100.0 << std::endl;

    return 0;
}