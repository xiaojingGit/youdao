// 285
// 一球从某一高度落下（整数，单位米），每次落地后反跳回原来高度的一半，再落下。
// 编程计算气球在第10次落地时，共经过多少米? 第10次反弹多高？

#include <iostream>
using namespace std;

int main() {
  int h;
  double len=0, currH;

  cin >> h;
  currH = (double)h;

  for (int i = 1; i <= 10; i++) {
    // 第i次落地
    if (i == 1) {
      len = len + currH;
    } else {
      len = len + currH * 2;
    }
    currH = currH / 2;
  }
  cout << len << endl;
  cout << currH;
  return 0;
}