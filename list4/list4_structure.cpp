#include <iostream>
#include <string>
using namespace std;
#include "chapter4.h"

int main(int argc, char const *argv[]) {
  const int DATA_NUM = 3; // 配列の要素数
  // HealthCheck構造体をデータ型とした配列
  HealthCheck people[DATA_NUM] = {
    {"山田一郎", 170, 67.5, 0}, //山田さんの情報
    {"佐藤花子", 160, 54.5, 0}, //佐藤さんの情報
    {"鈴木次郎", 180, 85.5, 0}  //鈴木さんの情報
  };
  double mHeight;         //m単位の身長
  int i;                  //ループカウンタ

  //配列の要素を順番に処理する
  for (i = 0; i < DATA_NUM; i++) {
    //BMIを求める
    people[i].bmi = getBmi(&people[i]);

  //BMIを表示する
  cout << people[i].name << "さんのBMIは、" << people[i].bmi << "です。" <<endl;
  }
  return 0;
}
