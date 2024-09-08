#include <iostream>
#include <vector>

void show(std::vector<int>& data) {

    //// 全要素の表示
    // イテレータはポインタと考える

   // 1番最初の要素を指すアドレスがitに入ってくる

   // データがなかったらループする

   // it != data.end();
   // 最後のところまで処理していなかったらループしなさい

   // 全てのデータ構造で使用できる書き方
   // auto(std::vector<int>::iterator)

    for (auto it = data.begin(); it != data.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

int main() {

    // 要素数を変更できる配列

    // int型の配列のクラス
    std::vector<int> data;

    // おしりに要素を追加
    // 配列の最後の要素に付け加える。
    for (int i = 0; i < 6; i++) {
        data.push_back(i + 1);
    }
    show(data);

    // おしりの要素を削除
    // 1番最後の要素が削除される。
   /* for (int i = 0; i < 6; i++) {
        data.pop_back();
        show(data);
    }*/

    // 途中の要素を削除
    for (auto it = data.begin(); it != data.end();) {
        if (*it % 2 == 1) {

            // data.erase(it);だけだと
            // イレーズしたイテレータが無効になる。
            // イテレータそのものが無効になる。
            // 無効になっているにもかかわらず,it++されるのでエラーになってしまう。
            // it = data.erase(it);ってやると,その場所を消してくれて,次のところを指します。
            // そういうイテレータを返してくれる。

            it = data.erase(it);
        }
        else {
            it++;
        }
    }
    show(data);

    // 途中に要素を挿入
    for (auto it = data.begin(); it != data.end();) {
        if (*it % 2 == 0) {
            // インサートするときもイテレータが無効になってしまう。
            // itは1を指している。
            it = data.insert(it, *it - 1);
            // ずれた2を指す
            it++;
        }
        // 次を指す
        // ４を指す
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