using namespace std;
#include <string>
#include <iostream>

class Character {
private:

    // �����o�ϐ�
    string _name;
    int _hp;
    int _lv;

public:

    // �����o�֐�
    // �R���X�g���N�^�֐�
    Character() { _name = "������"; _hp = 0; _lv = 0; }

    // ��������̃R���X�g���N�^�֐�
    Character(string name, int hp, int lv) { _name = name; _hp = hp; _lv = lv; }

    // �f�X�g���N�^
    ~Character() { cout << _name << "�������܂����B" << endl; }

    // �X�e�[�^�X�\������֐�
    void putStatus() {

        std::cout << "---------------" << ' ' << std::endl;

        std::cout << _name << ' ';

        std::cout << "HP" << ' ' << _hp << std::endl;

        std::cout << "---------------" << ' ' << std::endl;

        std::cout << "LV" << ' ' << _lv << std::endl;

        std::cout << "---------------" << ' ' << std::endl;
    }

    // �Q�b�^�[
    string getName() { return _name; }
    int getHP() { return _hp; }
};