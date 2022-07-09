// 1039
// 求11到n之间（包括n），既是素数又是回文数的整数有多少个

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

int huiwen(int n) {
  int res = 0;

  while(n) {
    int yu = n % 10;
    res = res * 10 + yu;
    n = n / 10;
  }

  return res;
}

int main() {
  int n, count=0;
  scanf("%d", &n);
  for (int i = 11; i <= n; i++) {
    if (isSushu(i) && huiwen(i) == i) {
      count++;
    }
  }
  printf("%d", count);
  return 0;
}