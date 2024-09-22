template<typename T>

// 派生クラス(基底クラスを継承してつくったクラス)
class Monster : public Character<T> {

public:
    Monster() :
        Character<T>("スライム", 30, 1) {}

    // Monsterのデストラクタ
    ~Monster() override { cout << this->getName() << "[目の前が真っ暗になった。]" << endl; }

    // 関数のオーバーライド
    void putStatus(const T& data, const T& data2) override {

        std::cout << data << " " << data2 << " " << std::endl;

        std::cout << "---------------" << ' ' << std::endl;

        std::cout << this->getName() << ' ' << "オーバーライド" << std::endl;

        std::cout << "HP" << ' ' << this->getHP() << std::endl;

        std::cout << "---------------" << ' ' << std::endl;

        std::cout << "LV" << ' ' << this->getLV() << std::endl;

        std::cout << "---------------" << ' ' << std::endl;
    }
};
