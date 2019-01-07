#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
  //string object
  string s1, s2, s3;

  // store strings into string objects
  s1 = "apple";
  s2 = "banana";

  //compare strings
  if (s1 > s2) {
    cout << "bigger."  << endl;
  }
  else if (s1 < s2) {
    cout << "smaller." << endl;
  }
  else {
    cout << "equal." << endl;
  }

  // join strings
  s3 = s1 + s2;
  cout << s3 << endl;

  //get the length
  cout << s3.length() <<endl;

  //get a 3 character substring from the 5th letter
  cout << s3.substr(5,3) << endl;

  //get a 5th letter
  cout << s3[5] << endl;

  //find "na"
  cout << s3.find("na") << endl;

  //clear the string
  s3.clear();

  //comfirm if s3 is clear
  if (s3.empty()) {
    cout << "empty." << endl;
  }
  else{
    cout << "not empty." << endl;
  }


  return 0;
}
