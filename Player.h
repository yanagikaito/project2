template<typename T>

// �h���N���X(���N���X���p�����Ă������N���X)
class Player : public Character<T> {

    // �R���X�g���N�^��public�ɂ��Ȃ��ƌĂяo���Ȃ�
public:
    Player() :
        Character<T>("�E��", 100, 5) {}

    // Player�̃f�X�g���N�^
    ~Player() override { cout << this->getName() << "[�ڂ̑O���^���ÂɂȂ����B]" << endl; }

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