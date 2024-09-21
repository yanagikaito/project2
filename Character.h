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
    T _x, _y;

public:

    // メンバ関数
    // コンストラクタ関数
    Character() : _name("名無し"), _hp(0), _lv(0), _x(0), _y(0) {}

    // 引数ありのコンストラクタ関数
    Character(string name, T hp, T lv, T x, T y) :
        _name(name), _hp(hp), _lv(lv), _x(x), _y(y) {}

    // 仮想デストラクタ
    virtual ~Character() { cout << _name << "が消えました。" << endl; }

    // 純粋仮想関数
    virtual void putStatus() = 0;

    string getName() const;
    T getHP() const;
    T getLV() const;
    T getX() const;
    T getY() const;

};

template<typename T>
// ゲッター
string Character<T>::getName() const { return _name; }

template<typename T>
T Character<T>::getHP() const { return _hp; }

template<typename T>
T Character<T>::getLV() const { return _lv; }

template<typename T>
T Character<T>::getX() const { return _x; }

template<typename T>
T Character<T>::getY() const { return _y; }