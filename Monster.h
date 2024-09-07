// 派生クラス(基底クラスを継承してつくったクラス)
class Monster : public Character {

public:
    Monster() :
        Character("スライム", 30, 1) {}

    // 関数のオーバーライド
    void putStatus() {

        std::cout << "---------------" << ' ' << std::endl;

        std::cout << getName() << ' ';

        std::cout << "HP" << ' ' << getHP() << std::endl;

        std::cout << "---------------" << ' ' << std::endl;

        std::cout << "LV" << ' ' << getLV() << std::endl;

        std::cout << "---------------" << ' ' << std::endl;
    }
};
