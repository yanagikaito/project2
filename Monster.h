// 派生クラス(基底クラスを継承してつくったクラス)
class Monster : public Character {

public:
    Monster() :
        Character("スライム", 30, 1) {}

    // Monsterのデストラクタ
    ~Monster() override { cout << getName() << "[目の前が真っ暗になった。]" << endl; }

    // 関数のオーバーライド
    void putStatus() override {

        std::cout << "---------------" << ' ' << std::endl;

        std::cout << getName() << ' ' << "オーバーライド" << std::endl;

        std::cout << "HP" << ' ' << getHP() << std::endl;

        std::cout << "---------------" << ' ' << std::endl;

        std::cout << "LV" << ' ' << getLV() << std::endl;

        std::cout << "---------------" << ' ' << std::endl;
    }
};
