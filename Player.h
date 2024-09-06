
class Player : public Character {

    // コンストラクタもpublicにしないと呼び出せない
public:
    Player() :
        Character("勇者", 100, 5) {}
};
