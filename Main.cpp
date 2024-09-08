#include <iostream>
#include <vector>

void show(std::vector<int>& data) {

    //// �S�v�f�̕\��
    // �C�e���[�^�̓|�C���^�ƍl����

   // 1�ԍŏ��̗v�f���w���A�h���X��it�ɓ����Ă���

   // �f�[�^���Ȃ������烋�[�v����

   // it != data.end();
   // �Ō�̂Ƃ���܂ŏ������Ă��Ȃ������烋�[�v���Ȃ���

   // �S�Ẵf�[�^�\���Ŏg�p�ł��鏑����
   // auto(std::vector<int>::iterator)

    for (auto it = data.begin(); it != data.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

int main() {

    // �v�f����ύX�ł���z��

    // int�^�̔z��̃N���X
    std::vector<int> data;

    // ������ɗv�f��ǉ�
    // �z��̍Ō�̗v�f�ɕt��������B
    for (int i = 0; i < 6; i++) {
        data.push_back(i + 1);
    }
    show(data);

    // ������̗v�f���폜
    // 1�ԍŌ�̗v�f���폜�����B
   /* for (int i = 0; i < 6; i++) {
        data.pop_back();
        show(data);
    }*/

    // �r���̗v�f���폜
    for (auto it = data.begin(); it != data.end();) {
        if (*it % 2 == 1) {

            // data.erase(it);��������
            // �C���[�Y�����C�e���[�^�������ɂȂ�B
            // �C�e���[�^���̂��̂������ɂȂ�B
            // �����ɂȂ��Ă���ɂ�������炸,it++�����̂ŃG���[�ɂȂ��Ă��܂��B
            // it = data.erase(it);���Ă���,���̏ꏊ�������Ă����,���̂Ƃ�����w���܂��B
            // ���������C�e���[�^��Ԃ��Ă����B

            it = data.erase(it);
        }
        else {
            it++;
        }
    }
    show(data);

    // �r���ɗv�f��}��
    for (auto it = data.begin(); it != data.end();) {
        if (*it % 2 == 0) {
            // �C���T�[�g����Ƃ����C�e���[�^�������ɂȂ��Ă��܂��B
            // it��1���w���Ă���B
            it = data.insert(it, *it - 1);
            // ���ꂽ2���w��
            it++;
        }
        // �����w��
        // �S���w��
        it++;
    }
    show(data);

    //for (int i = 0; i < data.size(); i++)
    //    std::cout << data[i] << " ";
    //std::cout << std::endl;

    //for (auto d : data) {
    //    std::cout << d << " ";
    //}
    //std::cout << std::endl;

    return 0;
}