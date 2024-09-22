template<typename T>

// �h���N���X(���N���X���p�����Ă������N���X)
class Monster : public Character<T> {

public:
    Monster() :
        Character<T>("�X���C��", 30, 1) {}

    // Monster�̃f�X�g���N�^
    ~Monster() override { cout << this->getName() << "[�ڂ̑O���^���ÂɂȂ����B]" << endl; }

    // �֐��̃I�[�o�[���C�h
    void putStatus(const T& data, const T& data2) override {

        std::cout << data << " " << data2 << " " << std::endl;

        std::cout << "---------------" << ' ' << std::endl;

        std::cout << this->getName() << ' ' << "�I�[�o�[���C�h" << std::endl;

        std::cout << "HP" << ' ' << this->getHP() << std::endl;

        std::cout << "---------------" << ' ' << std::endl;

        std::cout << "LV" << ' ' << this->getLV() << std::endl;

        std::cout << "---------------" << ' ' << std::endl;
    }
};
