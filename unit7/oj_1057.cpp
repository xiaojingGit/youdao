// 1057
// 找出正整数 M 和 N 之间（N 不小于 M）的所有真素数。 
// 真素数的定义：如果一个正整数 P 为素数，且其反序也为素数，那么 P 就为真素数。 
// 例如，11，13 均为真素数，因为11的反序还是为11，13 的反序为 31 也为素数。

#include <cstdio>
#include <cmath>

int isSushu(int n) {
  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) {
      return 0;
    }
  }
  return 1;
}

int reverseNum(int n) {
  int res = 0;
  while(n) {
    int yu = n % 10;
    res = res * 10 + yu;
    n = n / 10;
  }
  return res;
}

int main() {
  int m, n, rNum, has=0;
  scanf("%d%d", &m, &n);

  for (int i = m; i <= n; i++) {
    rNum = reverseNum(i);
    if (isSushu(i) && isSushu(rNum)) {
      if (has) {
        printf(",");
      }
      has = 1;
      printf("%d", i);
    }
  }
  if (!has) {
    printf("No");
  }
  return 0;
}