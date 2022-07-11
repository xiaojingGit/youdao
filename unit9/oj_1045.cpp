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

/****** 回文数判断方法一：把数倒过来对比是否相同  *******/
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

/***** 构造回文数：例如：n等于123，返回12321这样一个回文数 ******/
int huiwen(int n) {
  int res = n;  // 123
  n = n / 10;   // 12
  while (n) {
    res = res * 10 + n % 10; // 123*10+2=1232  1232*10+1
    n = n / 10;
  }
  return res;
}

int main() {
  int n, count = 0, start, arr[1000], end, tmp;
  cin >> n;
  // 需要先加上这些判断，否则会超时
  if (n == 1) {
    cout << 4 << endl;
    cout << "2 3 5 7";
  } else if (n == 2) {
    cout << 1 << endl;
    cout << "11";
  } else if (n % 2 == 0) { // 超过2的双位数不可能有素数
    cout << 0;
  } else {
    // 方法二：截取一半来判断 如7位数1464641，只判断1464是否是
    n = (n + 1) / 2;
    start = pow(10, n-1);
    end = pow(10, n);
    while (start < end) {
      tmp = huiwen(start);
      if (isSushu(tmp)) {
        arr[count++] = tmp;
      }
      start++;
    }
    // 方法一：直接判断n是否是回文数和素数
    // start = pow(10, n-1);
    // end = pow(10, n);
    // while (start < end) {
    //   // 回文数比素数更容易判断
    //   if (isHuiwen(start) && isSushu(start)) {
    //     arr[count++] = start;
    //   }
    //   start++;
    // }

    cout << count << endl;
    for (int i = 0; i < count; i++) {
      cout << arr[i] << " ";
    }
  }
  return 0;
}