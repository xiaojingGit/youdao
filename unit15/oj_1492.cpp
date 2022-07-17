// 1492
// 把一个十进制正整数转化成八进制。

// 输入格式
// 一行，仅含一个十进制表示的整数a(0 < a < 65536)。
// 输入样例
// 9

// 输出格式
// 一行，a的八进制表示。
// 输出样例
// 11

#include <cstdio>
#include <cmath>
int main() {
  int a, sum=0, count=0;
  scanf("%d", &a);
  while (a) {
    sum += a % 8 * pow(10, count);
    a = a/8;
    count++;
  }
  printf("%d", sum);
  return 0;
}