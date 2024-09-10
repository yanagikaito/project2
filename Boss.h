class Boss : public Character {

public:
    Boss() :
        Character("魔王", 500, 100) {}

    // Bossのデストラクタ
    ~Boss() override { cout << getName() << "[目の前が真っ暗になった。]" << endl; }

    void putStatus() override {

        std::cout << "---------------" << ' ' << std::endl;

        std::cout << getName() << ' ' << "オーバーライド" << std::endl;

        std::cout << "HP" << ' ' << getHP() << std::endl;

        std::cout << "---------------" << ' ' << std::endl;

        std::cout << "LV" << ' ' << getLV() << std::endl;

        std::cout << "---------------" << ' ' << std::endl;
    }
};
