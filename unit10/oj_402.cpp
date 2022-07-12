// 402
// 鸡兔同笼：一个笼子里面关了鸡和兔子（鸡有2只脚，兔子有4只脚，没有例外）。已经知道了笼子里面脚的总数a，
// 问笼子里面至少有多少只动物，至多有多少只动物。

#include <iostream>
using namespace std;
int main() {
  int a; // currSum当前脚的总数
  cin >> a;
  if (a % 4 == 0) {
    cout << a/4 << " " << a/2;
    return 0;
  }
  if (a % 2 != 0) {
    cout << 0 << " " << 0;
    return 0;
  }
  if (a % 2 == 0) {
    int tu1 = a / 4;
    int ji1 = (a - 4 * tu1) / 2;
    int ji2 = a / 2;
    int tu2 = (a - 2 * ji2) / 4;
    cout << tu1+ji1 << " " << ji2+tu2;
  }
  return 0;
}