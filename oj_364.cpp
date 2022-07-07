// 364
// 一个正整数,如果它能被7整除,或者它的十进制表示法中某一位上的数字为7,则称其为与7相关的数.
// 现求所有小于等于n(n < 100)的与7无关的正整数的平方和.

#include <iostream>
#include <cmath>
using namespace std;

int isRealated(int n) {
  if (n % 7 == 0) {
    return 1;
  }
  while(n) {
    if (n % 10 == 7) {
      return 1;
    }
    n = n / 10;
  }
  return 0;
}

int main() {
  int n, sum = 0;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    if (!isRealated(i)) {
      sum += pow(i, 2);
    }
  }
  cout << sum;
  return 0;
}