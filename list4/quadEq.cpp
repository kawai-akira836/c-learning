#include <iostream>
using namespace std;
#include <cmath>

bool quadEq(double a, double b, double c, double *px1, double *px2){
  double inRoot;  //公式の平方根のなかの値
  bool ans;       //解があるかどうか

  //公式の平方根のなかの値を求める
  inRoot = b * b - 4 * a * c;

  if (inRoot < 0) {
    // もしも公式の平方根の中がマイナスなら解なし
    ans = false;
  }
  else {
    // そうでなければ解あり
    ans = true;

    // 2つの解をpx1とpx2が指し示している変数に格納する
    *px1 = (-b + sqrt(inRoot)) / (2 * a);
    *px2 = (-b - sqrt(inRoot)) / (2 * a);
  }

  // 関数の戻り値で、解があるかどうかを返す
  return ans;
}
