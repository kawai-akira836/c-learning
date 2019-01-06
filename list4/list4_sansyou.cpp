#include <iostream>
using namespace std;

// 引数を参照渡しで受け取る関数
void sub(int &ref) {
  ref = 456;
  return;
}

//main関数
int main(int argc, char const *argv[]) {
  int val = 123;
  cout << "subを呼び出す前のvalの値" << val << endl;
  sub(val);
  cout << "subを呼び出した後のvalの値" << val << endl;
  
  return 0;
}
