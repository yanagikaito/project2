using namespace std;
#include <string>
#include <iostream>

struct Character {

    // �����o�ϐ�
    string _name;
    int _hp;
    int _lv;

    // �����o�֐�
    // �R���X�g���N�^�֐�
    Character() { _name = "������"; _hp = 0; _lv = 0; }

    // ��������̃R���X�g���N�^�֐�
    Character(string name, int hp, int lv) { _name = name; _hp = hp; _lv = lv; }

    // �X�e�[�^�X�\������֐�
    void putStatus() {

        std::cout << "---------------" << ' ' << std::endl;

        std::cout << _name << ' ';

        std::cout << "HP" << ' ' << _hp << std::endl;

        std::cout << "---------------" << ' ' << std::endl;

        std::cout << "LV" << ' ' << _lv << std::endl;

        std::cout << "---------------" << ' ' << std::endl;
    }
};