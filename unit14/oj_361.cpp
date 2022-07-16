// 361
// 假定多项式的形式为x^n+x^(n-1)+…+x^2+x+1，请计算给定单精度浮点数x和正整数n值的情况下这个多项式的值

// 输入格式
// 输入仅一行，包括x和n，用单个空格隔开。x在float范围内，n <= 1000000。
// 输入样例
// 2.0 4

// 输出格式
// 输出一个实数，即多项式的值，精确到小数点后两位。保证最终结果在float范围内。
// 输出样例
// 31.00

#include <cstdio>
#include <cmath>

int main() {
  float x, sum = 0;
  int n;
  scanf("%f%d", &x, &n);

  for (int i = n; i >=0; i--) {
    sum += pow(x, i);
  }
  printf("%.2f", sum);
  return 0;
}