#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <random>
#include "Character.h"
#include "Player.h"
#include "Monster.h"
#include "Boss.h"

//template < typename Engine, typename Distribution>
//void f(Engine& e)
//{
//    // 最小値
//    auto a = e.min(e);
//    // 最大値
//    auto b = e.max(e);
//    // 乱数
//    auto r1 = e(e);
//    // 次の乱数
//    auto r2 = e(e);
//}

int main() {

    // ランダムデバイスを使ってシード値を生成
    std::random_device rd;

    // シード値を使って乱数生成器を初期化
    std::mt19937 engine(rd());

    // 1から6の範囲の乱数を生成する分布を作成
    std::uniform_int_distribution<int> dist(1, 6);

    // 乱数を生成して表示
    std::cout << "ランダム値: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << dist(engine) << " ";
    }
    std::cout << std::endl;

    // シード値のベクターを作成
    std::vector<std::uint32_t> v = { 1,2,3,4,5 };

    // シード列オブジェクトを作成
    std::seed_seq s2(std::begin(v), std::end(v));

    // シード列オブジェクトを使って乱数生成器を初期化
    std::mt19937 engine2(s2);

    std::cout << "固定値: ";

    // 乱数を生成して表示
    for (int i = 0; i < 5; ++i) {
        std::cout << dist(engine2) << " ";
    }
    std::cout << std::endl;


    // メルセンヌツイスターというアルゴリズムを実装した乱数エンジン
    std::seed_seq s{ 124 };
    std::mt19937 e(s);

    // 乱数を生成
   // 内部状態が変わる
    auto r1 = e();

    // シード値を設定
    e.seed(s);

    // 乱数を生成
    auto r2 = e();

    std::cout << r1 << std::endl;
    std::cout << r2 << std::endl;

    // std::mt19937のオブジェクトサイズは5000バイト
    std::cout << sizeof(std::mt19937);

    // 同じシード値による乱数は同じ値になる
    // r1 == r2
    // 乱数分布
    // 生の乱数を望みの範囲の乱数に加工するためのライブラリ
    //std::uniform_int_distribution<int>d(1, 6);

    //auto a = d(e); // 1回目
    //auto b = d(e); // 2回目

    //auto result = a - b; // 結果

    //std::cout << a;
    //std::cout << b;
    //std::cout << result;

    //for (int i = 0; i != 10; ++i)
    //{
    //    // 乱数を出力
    //    std::cout << d(e) << std::endl;
    //}

    return 0;
}