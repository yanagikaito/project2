#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <random>
#include "Character.h"
#include "Player.h"
#include "Monster.h"
#include "Boss.h"

//template < typename Engine, typename Distribution>
//void f(Engine& e)
//{
//    // �ŏ��l
//    auto a = e.min(e);
//    // �ő�l
//    auto b = e.max(e);
//    // ����
//    auto r1 = e(e);
//    // ���̗���
//    auto r2 = e(e);
//}

int main() {

    // �����_���f�o�C�X���g���ăV�[�h�l�𐶐�
    std::random_device rd;

    // �V�[�h�l���g���ė����������������
    std::mt19937 engine(rd());

    // 1����6�͈̗̔͂����𐶐����镪�z���쐬
    std::uniform_int_distribution<int> dist(1, 6);

    // �����𐶐����ĕ\��
    std::cout << "�����_���l: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << dist(engine) << " ";
    }
    std::cout << std::endl;

    // �V�[�h�l�̃x�N�^�[���쐬
    std::vector<std::uint32_t> v = { 1,2,3,4,5 };

    // �V�[�h��I�u�W�F�N�g���쐬
    std::seed_seq s2(std::begin(v), std::end(v));

    // �V�[�h��I�u�W�F�N�g���g���ė����������������
    std::mt19937 engine2(s2);

    std::cout << "�Œ�l: ";

    // �����𐶐����ĕ\��
    for (int i = 0; i < 5; ++i) {
        std::cout << dist(engine2) << " ";
    }
    std::cout << std::endl;


    // �����Z���k�c�C�X�^�[�Ƃ����A���S���Y�����������������G���W��
    std::seed_seq s{ 124 };
    std::mt19937 e(s);

    // �����𐶐�
   // ������Ԃ��ς��
    auto r1 = e();

    // �V�[�h�l��ݒ�
    e.seed(s);

    // �����𐶐�
    auto r2 = e();

    std::cout << r1 << std::endl;
    std::cout << r2 << std::endl;

    // std::mt19937�̃I�u�W�F�N�g�T�C�Y��5000�o�C�g
    std::cout << sizeof(std::mt19937);

    // �����V�[�h�l�ɂ�闐���͓����l�ɂȂ�
    // r1 == r2
    // �������z
    // ���̗�����]�݂͈̗̔͂����ɉ��H���邽�߂̃��C�u����
    //std::uniform_int_distribution<int>d(1, 6);

    //auto a = d(e); // 1���
    //auto b = d(e); // 2���

    //auto result = a - b; // ����

    //std::cout << a;
    //std::cout << b;
    //std::cout << result;

    //for (int i = 0; i != 10; ++i)
    //{
    //    // �������o��
    //    std::cout << d(e) << std::endl;
    //}

    return 0;
}