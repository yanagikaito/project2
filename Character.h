using namespace std;
#include <string>
#include <iostream>

// 基底クラス(継承もとになるクラス)
class Character {

private:

    // メンバ変数
    string _name;
    int _hp;
    int _lv;

public:

    // メンバ関数
    // コンストラクタ関数
    Character() { _name = "名無し"; _hp = 0; _lv = 0; }

    // 引数ありのコンストラクタ関数
    Character(string name, int hp, int lv) :
        _name(name), _hp(hp), _lv(lv) {}

    // デストラクタ
    ~Character() { cout << _name << "が消えました。" << endl; }

    // ステータス表示する関数
    virtual void putStatus() = 0;

    // ゲッター
    string getName() { return _name; }
    int getHP() { return _hp; }
    int getLV() { return _lv; }
};