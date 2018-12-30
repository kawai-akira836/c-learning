#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int month;  //月（ループカウンタ）

  //1月〜12月と表示する
  for (month = 1; month <= 12; month++){
    cout << month << "月\t";
  }
  cout << endl;

  return 0;
}
