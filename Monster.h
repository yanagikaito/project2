template<typename T>

// �h���N���X(���N���X���p�����Ă������N���X)
class Monster : public Character<T> {

public:
    Monster() :
        Character<T>("�X���C��", 30, 1, 3, 4) {}

    // Monster�̃f�X�g���N�^
    ~Monster() override { cout << this->getName() << "[�ڂ̑O���^���ÂɂȂ����B]" << endl; }

    // �֐��̃I�[�o�[���C�h
    void putStatus() override {

        std::cout << this->getX() << " " << this->getY() << " " << std::endl;

        std::cout << "---------------" << ' ' << std::endl;

        std::cout << this->getName() << ' ' << "�I�[�o�[���C�h" << std::endl;

        std::cout << "HP" << ' ' << this->getHP() << std::endl;

        std::cout << "---------------" << ' ' << std::endl;

        std::cout << "LV" << ' ' << this->getLV() << std::endl;

        std::cout << "---------------" << ' ' << std::endl;
    }
};
