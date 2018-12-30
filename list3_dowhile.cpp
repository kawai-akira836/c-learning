#include <iostream>
using namespace std;
int main() {
  const char RIGHT_ANS = 'c'; //正解
  char ans;

  //問題が不正解である限り繰り返す
  do {
    //問題を表示する
    cout << "【問題】日本で一番長い川は？" << endl;
    cout << "a. 利根川   b. 石狩川    c. 信濃川" << endl;

    //解答を入力する
    cout << "解答:";
    cin >> ans;
  } while (ans != RIGHT_ANS);

  //正解した事を示す
  cout << "正解！" << endl;
  return 0;
}
