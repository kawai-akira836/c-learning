#include <iostream>
#include <string>
using namespace std;

int main() {
  int channel;
  string stationName;

  //キー入力をchannelに格納する
  cout << "チャンネル番号を入力してください：";
  cin >> channel;
  // テレビ局名をstationNameに格納する
  switch (channel){
    case 1:
      stationName = "NHK総合";
      break;

    case 3:
      stationName = "NHK教育";
      break;

    case 4:
      stationName = "日本テレビ";
      break;

    case 6:
      stationName = "TBS";
      break;

    case 8:
      stationName = "フジ";
      break;

    case 10:
      stationName = "テレビ朝日";
      break;

    case 12:
      stationName = "テレビ東京";
      break;

    default:
      stationName = "割り当てなし";
      break;


  };
  cout << stationName << endl;

  return 0;
}
