// 1044
// 输入两个整数X和Y，输出两者之间的素数个数（包括X和Y）。

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

int main() {
  int x, y, count=0, tmp;
  scanf("%d%d", &x, &y);
  // 考虑x > y的情况
  if (x > y) {
    tmp = x;
    x = y;
    y = tmp;
  }
  for (int i = x; i <= y; i++) {
    if (isSushu(i)) {
      count++;
    }
  }
  if (x == 1) {
    count--;
  }
  printf("%d", count);
  return 0;
}