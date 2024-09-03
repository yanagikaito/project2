class Player {
private:
    char Name;
    int Hp;
    int Lv;
public:
    void setName(char name);
    char getName();
    void setHp(int hp);
    int getHp();
    void setLv(int lv);
    int getLv();
};


void Player::setName(char name) {
    Name = name;
}

char Player::getName() {
    return Name;
}

void Player::setHp(int hp) {
    Hp = hp;
}

int Player::getHp() {
    return Hp;
}

void Player::setLv(int lv) {
    Lv = lv;
}

int Player::getLv() {
    return Lv;
}


