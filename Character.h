class Character {
protected:
    char Name;
    int Hp;
    int Lv;

public:
    std::string name;

public:
    virtual void setName(std::string name) = 0;
    virtual std::string getName() = 0;
    virtual void setHp(int hp) = 0;
    virtual int getHp() = 0;
    virtual void setLv(int lv) = 0;
    virtual int getLv() = 0;
};
