// �h���N���X(���N���X���p�����Ă������N���X)
class Player : public Character {

    // �R���X�g���N�^��public�ɂ��Ȃ��ƌĂяo���Ȃ�
public:
    Player() :
        Character("�E��", 100, 5) {}

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
