// 299
// 利用公式e = 1 + 1/1! + 1/2! + 1/3! + ... + 1/n! 求e 。 
// (提示: 1、e以及n!用double表示 2、要输出浮点数、双精度数小数点后10位数字，可以用下面这种形式：
//  printf("%.10f", num);)

#include <cstdio>

int main() {
  int n;
  double e = 2, arr[16];
  scanf("%d", &n);
  arr[1] = 1;
  for (int i = 2; i <= n; i++) {
    arr[i] = i * arr[i-1];
    e += 1/arr[i];
  }
  printf("%.10lf", e);
  return 0;
}