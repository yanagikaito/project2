class Character {
private:
    char Name;
    int Hp;
    int Lv;

public:
    std::string name;

public:
    void setName(char name);
    char getName();
    void setHp(int hp);
    int getHp();
    void setLv(int lv);
    int getLv();
};
