template<typename T>

// 派生クラス(基底クラスを継承してつくったクラス)
class Player : public Character<T> {

    // コンストラクタもpublicにしないと呼び出せない
public:
    Player() :
        Character<T>("勇者", 100, 5, 1, 2) {}

    // Playerのデストラクタ
    ~Player() override { cout << this->getName() << "[目の前が真っ暗になった。]" << endl; }

    // 関数のオーバーライド
    void putStatus() override {

        std::cout << this->getX() << " " << this->getY() << " " << std::endl;

        std::cout << "---------------" << ' ' << std::endl;

        std::cout << this->getName() << ' ' << "オーバーライド" << std::endl;

        std::cout << "HP" << ' ' << this->getHP() << std::endl;

        std::cout << "---------------" << ' ' << std::endl;

        std::cout << "LV" << ' ' << this->getLV() << std::endl;

        std::cout << "---------------" << ' ' << std::endl;
    }
};