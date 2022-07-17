// 1514
// 给定一个十进制非负整数N，求其对应2进制数中1的个数。

// 输入格式
// 输入包含一行，包含一个非负整数N。(N < 109)
// 输入样例
// 100

// 输出格式
// 输出一行，包含一个整数，表示N的2进制表示中1的个数。
// 输出样例
// 3

#include <cstdio>
int main() {
  int a, count=0; // sum表示二进制结果，count表示1的个数，cifang表示转换过程中位数
  scanf("%d", &a);
  while(a) {
    int yushu = a % 2;
    if (yushu == 1) {
      count++;
    }
    a = a / 2;
  }
  printf("%d", count);
  return 0;
}