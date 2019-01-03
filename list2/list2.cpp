#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  const int STD_BMI = 22; //標準BMI
  double height;  //身長
  double weight;  //体重
  double bmi;     //bmi
  double stdweight; //標準体重

  //キー入力をheightに格納
  cout << "身長（cm）を入力してください:";
  cin >> height;

  //身長の単位をm単位に変更
  height /= 100;

  //キー入力をweightに格納
  cout << "体重（kg）を入力してください:";
  cin >> weight;

  //bmiを計算
  bmi = weight / height / height;

  //標準体重を計算
  stdweight = STD_BMI * height * height;


  //bmiを画面に表示
  cout << "あなたのBMIは" << fixed << setprecision(1) << bmi << "です" << endl;


  //標準体重を画面に表示
  cout << "あなたの標準体重は" << fixed << setprecision(1)
  << stdweight << "です" << endl;

  return 0;
}
