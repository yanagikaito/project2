#include <iostream>
#include "Character.h"
#include "Player.h"
#include "Monster.h"

int main() {

    // �C���X�^���X(����)������B
    // �݌v�}�����Ƃɂ��Ă���B
    // �\���̂ł�class�ł�new���Ȃ��Ă��C���X�^���X����������ăR���X�g���N�^���Ăׂ�B

    Player player;

    // class�ł�private����.�Ȃ�Ƃ��ł̌Ăяo���͂ł��Ȃ��Ȃ�
    // �����o�ϐ����O������ςȒl�����Ȃ����邽��

    player.putStatus();

    std::cout << std::endl;

    // Player�N���X�̃C���X�^���X�̃A�h���X(�h���N���X�̃A�h���X)
    // �A�h���X��Character�N���X�̃|�C���^(���N���X�̃|�C���^)
    // ���N���X�̃|�C���^�ɔh���N���X�̃C���X�^���X�̃A�h���X���������B

    Character* character{ new Player };

    character->putStatus();

    std::cout << std::endl;

    delete character;

    return 0;
}