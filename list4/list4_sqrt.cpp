#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[]) {
  double data;  //平方根を求める数値
  double ans; //dataの平方根

  //数値をキー入力する
  cout << "平方根を求める数値：" ;
  cin >> data;

  //平方根を求める
  ans = sqrt(data);

  //平方根を表示する
  cout << ans << endl;


  return 0;
}
