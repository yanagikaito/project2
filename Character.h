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

public:

    // �����o�֐�
    // �R���X�g���N�^�֐�
    Character() : _name("������"), _hp(0), _lv(0) {}

    // ��������̃R���X�g���N�^�֐�
    Character(string name, T hp, T lv) :
        _name(name), _hp(hp), _lv(lv) {}

    // ���z�f�X�g���N�^
    virtual ~Character() { cout << _name << "�������܂����B" << endl; }

    // �������z�֐�
    virtual void putStatus(const T& data, const T& data2) = 0;

    string getName() const;
    T getHP() const;
    T getLV() const;

};

template<typename T>
// �Q�b�^�[
string Character<T>::getName() const { return _name; }

template<typename T>
T Character<T>::getHP() const { return _hp; }

template<typename T>
T Character<T>::getLV() const { return _lv; }