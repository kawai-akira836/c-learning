#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  const int DATA_NUM = 10; //配列の要素数

  //10人の学生のテストの得点を格納した配列
  int point[DATA_NUM] = {85, 72, 63, 45, 100, 98, 52, 88, 74, 65};
  char grade;          //成績の評価
  int i;            //配列の要素番号(ループカウンタ)

  //配列の要素を一つずつ取り出す繰り返し
  for (i = 0; i < DATA_NUM; i++) {
    // 60点未満は無視する
    if (point[i] < 60) continue;

    // 得点に応じた評価を設定する
    if (point[i] >= 80) grade = 'A';
    else if (point[i] >= 70) grade = 'B';
    else grade = 'C';

    cout << point[i] << " = " << grade << endl;
  }
  
  return 0;
}
