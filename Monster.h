template<typename T>

// 派生クラス(基底クラスを継承してつくったクラス)
class Monster : public Character<T> {

public:
    Monster() :
        Character<T>("スライム", 30, 1, 3, 4) {}

    // Monsterのデストラクタ
    ~Monster() override { cout << this->getName() << "[目の前が真っ暗になった。]" << endl; }

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
