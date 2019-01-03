#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  const int DATA_NUM = 10; //配列の要素数

  //10人の学生のテストの得点を格納した配列
  int point[DATA_NUM] = {85, 72, 63, 45, 100, 98, 52, 88, 74, 65};
  int data;          //見つける得点
  int pos = -1;    //見つかった位置
  int i;            //配列の要素番号(ループカウンタ)

  //見つける得点をキー入力する
  cout << "見つける得点：";
  cin >> data;

  //指定した得点を見つける
  for (i = 0; i < DATA_NUM; i++) {
    //要素をチェックする
    if (point[i] == data){
      //見つかった位置をposに格納
      pos = i;

      //繰りかえしを抜ける
      break;
    }
  }

  //結果を表示する
  if (pos != -1){
    //見つかったら表示
    cout << pos+1 << "番目に見つかりました。" << endl;
  }
  else{
    cout << "見つかりませんでした。" << endl;
  }

  return 0;
}
