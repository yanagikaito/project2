#include <iostream>
#include "Character.h"

int main() {

    // �\���̂���new���Ȃ��Ă��C���X�^���X����������ăR���X�g���N�^���Ă΂�Ă���
    Character player("�E��", 100, 5);
    Character monster("�X���C��", 30, 1);

    player.putStatus();
    monster.putStatus();

    return 0;
}