#include <iostream>
#include "Character.h"

int main() {

    // �C���X�^���X(����)������B
    // �݌v�}�����Ƃɂ��Ă���B
    // �\���̂ł�class�ł�new���Ȃ��Ă��C���X�^���X����������ăR���X�g���N�^���Ăׂ�B
    Character player("�E��", 100, 5);
    Character monster("�X���C��", 30, 1);

    std::cout << player.getName() << std::endl;
    std::cout << player.getHP() << std::endl;

    // class�ł�private����.�Ȃ�Ƃ��ł̌Ăяo���͂ł��Ȃ��Ȃ�
    // �����o�ϐ����O������ςȒl�����Ȃ����邽��

    player.putStatus();
    monster.putStatus();

    return 0;
}