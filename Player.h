template<typename T>

// �h���N���X(���N���X���p�����Ă������N���X)
class Player : public Character<T> {

    // �R���X�g���N�^��public�ɂ��Ȃ��ƌĂяo���Ȃ�
public:
    Player() :
        Character<T>("�E��", 100, 5, 1, 2) {}

    // Player�̃f�X�g���N�^
    ~Player() override { cout << this->getName() << "[�ڂ̑O���^���ÂɂȂ����B]" << endl; }

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