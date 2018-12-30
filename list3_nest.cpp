#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int step; //段(外側のループカウンタ)
  int num;  //かける数(内側のループカウンタ)

  //外側のfor文
  for (step = 1; step <= 9; step++) {
    //nの段と表示
    cout << step << "の段：\t";

    //内側のfor文
    for (num = 1; num <= 9; num++) {
      cout << (step * num) << '\t';
    }

    //行の後ろで改行
    cout << endl;
  }

  return 0;
}
