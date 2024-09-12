#include <iostream>
#include <vector>
#include "Character.h"
#include "Player.h"
#include "Monster.h"
#include "Boss.h"

struct POS {
    int x, y;
    POS() :x(0), y(0)
    {
        std::cout << "initialized(" << x << "," << y << ")\n";
    }
    // �ϊ��R���X�g���N�^
    POS(int x, int y) :x(x), y(y)
    {
        std::cout << "converted(" << x << "," << y << ")\n";
    }

    // �R�s�[�R���X�g���N�^
    POS(const POS& pos) :x(pos.x), y(pos.y)
    {
        std::cout << "copied(" << x << "," << y << ")\n";
    }
};

// �N���X�ɑ΂���operator<<���I�[�o�[���[�h���Ă��܂��B
ostream& operator << (ostream& os, const POS& pos) {
    return os << pos.x << "," << pos.y;
}

int main() {

    //POS pos1;

    //// int�^��POS�^�ɕϊ������
    //POS pos2{ 1,1 };

    //POS pos3 = pos2;

    // �v�f����ύX�ł���z��

    std::vector<POS> data;

    // ���U�[�u ��������ɍŏ�����3���p�ӂ���B
    data.reserve(3);

    //������ɗv�f��ǉ�
    for (int i = 1; i <= 3; i++) {
        std::cout << "-----------------" << std::endl;
        std::cout << "push_back" << " " << i << "��� ";
        data.push_back({ i,i * 10 });

        // data.capacity() ���ۂɕ\������Ă��鐔
        std::cout << "-----------------" << std::endl;
        /*  std::cout << "push_back" << " " << i << "��� " << " " << data.size() << " ";

          std::cout << data.capacity() << std::endl;
          */
    }
    std::cout << "-----------------" << std::endl;

    for (auto it = data.begin(); it != data.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}