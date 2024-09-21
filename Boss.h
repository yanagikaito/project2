template<typename T>

class Boss : public Character<T> {

public:
    Boss() :
        Character<T>("����", 500, 100) {}

    // Boss�̃f�X�g���N�^
    ~Boss() override { cout << this->getName() << "[�ڂ̑O���^���ÂɂȂ����B]" << endl; }

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
