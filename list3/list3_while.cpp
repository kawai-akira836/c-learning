#include <iostream>
using namespace std;

int main() {
  int money;  //残金
  int price;  //買い物した金額

  //残金の初期値を10000円にする
  money = 10000;

  //残金が有る限り繰り返す
  while (money > 0){
    //残金を表示する
    cout << "残金：" << money << "円" << endl;

    //買い物した金額を入力する
    cout << "買い物した金額：";
    cin >> price;

    //残金を更新する
    money -= price;
  }
  //買い物が終了したことを示す
  cout << "買い物終了！"  << endl;
  
  return 0;
}
