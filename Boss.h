class Boss : public Character {

public:
    Boss() :
        Character("����", 500, 100) {}

    // Boss�̃f�X�g���N�^
    ~Boss() override { cout << getName() << "[�ڂ̑O���^���ÂɂȂ����B]" << endl; }

    void putStatus() override {

        std::cout << "---------------" << ' ' << std::endl;

        std::cout << getName() << ' ' << "�I�[�o�[���C�h" << std::endl;

        std::cout << "HP" << ' ' << getHP() << std::endl;

        std::cout << "---------------" << ' ' << std::endl;

        std::cout << "LV" << ' ' << getLV() << std::endl;

        std::cout << "---------------" << ' ' << std::endl;
    }
};
