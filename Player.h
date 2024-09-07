// 派生クラス(基底クラスを継承してつくったクラス)
class Player : public Character {

    // コンストラクタもpublicにしないと呼び出せない
public:
    Player() :
        Character("勇者", 100, 5) {}

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
