template<typename T>

class Boss : public Character<T> {

public:
    Boss() :
        Character<T>("魔王", 500, 100) {}

    // Bossのデストラクタ
    ~Boss() override { cout << this->getName() << "[目の前が真っ暗になった。]" << endl; }

    void putStatus() override {

        std::cout << "---------------" << ' ' << std::endl;

        std::cout << this->getName() << ' ' << "オーバーライド" << std::endl;

        std::cout << "HP" << ' ' << this->getHP() << std::endl;

        std::cout << "---------------" << ' ' << std::endl;

        std::cout << "LV" << ' ' << this->getLV() << std::endl;

        std::cout << "---------------" << ' ' << std::endl;
    }
};
