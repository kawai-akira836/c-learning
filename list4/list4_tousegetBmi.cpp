#include <iostream>
using namespace std;

double getBmi(double height, double weight);

int main(int argc, char const *argv[]) {
  double height;
  double weight;
  double bmi;

  // キー入力をheightに格納する
  cout << "身長を入力してください：";
  cin >> height;

  // キー入力をweightに格納する
  cout << "体重を入力してください：";
  cin >> weight;

  //身長と体重からbmiを計算する
  bmi = getBmi(height, weight);

  //BMIを画面に表示する
  cout << "あなたのBMIは" << bmi << "です。" << endl;


  return 0;
}
