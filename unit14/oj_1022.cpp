// 1022
// 有函数：f(x) = x^5 - 15 * x^4+ 85 * x^3- 225 * x^2+ 274 * x - 121已知 f(1.5) > 0 , f(2.4) < 0 
// 且方程 f(x) = 0 在区间 [1.5,2.4] 有且只有一个根，请用二分法求出该根。

// 输入格式
// 无。
// 输入样例
// 无

// 输出格式
// 该方程在区间[1.5,2.4]中的根。要求四舍五入到小数点后6位。
// 输出样例
// 不提供

#include <cstdio>
#include <cmath>

double f(double x) {
  return pow(x, 5) - 15 * pow(x, 4)+ 85 * pow(x, 3)- 225 * pow(x, 2) + 274 * x - 121;
}

int main() {
  int flag = 0;
  double l = 1.5, r = 2.4, mid;
  while (r - l >= 0.000001) {
    mid = (l + r) / 2;
    if (f(mid) == 0) {
      printf("%.6lf", mid);
      flag = 1;
      break;
    }
    // 如果<0, 则说明f(mid) > 0;
    if (f(mid) * f(l) < 0) {
      r = mid;
    } else {
      l = mid;
    }
  }
  if (!flag) {
    printf("%.6lf", r);
  }
  return 0;
}