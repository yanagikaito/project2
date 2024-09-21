using namespace std;
#include <string>
#include <iostream>

template<typename T>

// ���N���X(�p�����ƂɂȂ�N���X)
class Character {

private:

    // �����o�ϐ�
    string _name;
    T _hp;
    T _lv;
    T _x, _y;

public:

    // �����o�֐�
    // �R���X�g���N�^�֐�
    Character() : _name("������"), _hp(0), _lv(0), _x(0), _y(0) {}

    // ��������̃R���X�g���N�^�֐�
    Character(string name, T hp, T lv, T x, T y) :
        _name(name), _hp(hp), _lv(lv), _x(x), _y(y) {}

    // ���z�f�X�g���N�^
    virtual ~Character() { cout << _name << "�������܂����B" << endl; }

    // �������z�֐�
    virtual void putStatus() = 0;

    string getName() const;
    T getHP() const;
    T getLV() const;
    T getX() const;
    T getY() const;

};

template<typename T>
// �Q�b�^�[
string Character<T>::getName() const { return _name; }

template<typename T>
T Character<T>::getHP() const { return _hp; }

template<typename T>
T Character<T>::getLV() const { return _lv; }

template<typename T>
T Character<T>::getX() const { return _x; }

template<typename T>
T Character<T>::getY() const { return _y; }