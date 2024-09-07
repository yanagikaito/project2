// 派生クラス(基底クラスを継承してつくったクラス)
class Player : public Character {

    // コンストラクタもpublicにしないと呼び出せない
public:
    Player() :
        Character("勇者", 100, 5) {}

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
