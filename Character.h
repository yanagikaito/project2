using namespace std;
#include <string>
#include <iostream>

template<typename T>

// 基底クラス(継承もとになるクラス)
class Character {

private:

    // メンバ変数
    string _name;
    T _hp;
    T _lv;

public:

    // メンバ関数
    // コンストラクタ関数
    Character() : _name("名無し"), _hp(0), _lv(0) {}

    // 引数ありのコンストラクタ関数
    Character(string name, T hp, T lv) :
        _name(name), _hp(hp), _lv(lv) {}

    // 仮想デストラクタ
    virtual ~Character() { cout << _name << "が消えました。" << endl; }

    // 純粋仮想関数
    virtual void putStatus(const T& data, const T& data2) = 0;

    string getName() const;
    T getHP() const;
    T getLV() const;

};

template<typename T>
// ゲッター
string Character<T>::getName() const { return _name; }

template<typename T>
T Character<T>::getHP() const { return _hp; }

template<typename T>
T Character<T>::getLV() const { return _lv; }