#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  double height;  //身長
  double weight;  //体重
  double bmi;     //bmi

  //キー入力をheightに格納
  cout << "身長（m）を入力してください:";
  cin >> height;

  //キー入力をweightに格納
  cout << "体重（kg）を入力してください:";
  cin >> weight;

  //bmiを計算
  bmi = weight / height / height;

  //bmiを画面に表示
  cout << "あなたのBMIは" << fixed << setprecision(1) << bmi << "です" << endl;
  return 0;
}
