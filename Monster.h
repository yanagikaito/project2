// �h���N���X(���N���X���p�����Ă������N���X)
class Monster : public Character {

public:
    Monster() :
        Character("�X���C��", 30, 1) {}

    // �֐��̃I�[�o�[���C�h
    void putStatus() {

        std::cout << "---------------" << ' ' << std::endl;

        std::cout << getName() << ' ';

        std::cout << "HP" << ' ' << getHP() << std::endl;

        std::cout << "---------------" << ' ' << std::endl;

        std::cout << "LV" << ' ' << getLV() << std::endl;

        std::cout << "---------------" << ' ' << std::endl;
    }
};
