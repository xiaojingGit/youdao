// 1045
// 一个数如果从左往右读和从右往左读数字是相同的，则称这个数是回文数，如121，1221，15651都是回文数。
// 给定位数n，找出所有既是回文数又是素数的n位十进制数。（注：不考虑超过整型数范围的情况）。

#include <iostream>
#include <cmath>
using namespace std;

int isSushu(int n) {
  if (n < 2) {
    return 0;
  }
  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) {
      return 0;
    }
  }
  return 1;
}

int isHuiwen(int n) {
  if (n < 10) {
    return 1;
  }
  int res = 0;
  int m = n;
  while (n) {
    res = res * 10 + n % 10;
    n = n / 10;
  }
  if (res == m) {
    return 1;
  }
  return 0;
}

int main() {
  int n, count = 0, start, arr[1000];
  cin >> n;
  start = pow(10, n-1);
  int maxNum = pow(10, n);
  while (start < maxNum) {
    // cout << start << "," << isHuiwen(start) << endl;
    if (isSushu(start) && isHuiwen(start)) {
      arr[count++] = start;
    }
    start++;
  }
  cout << count << endl;
  for (int i = 0; i < count; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}