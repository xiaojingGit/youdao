// 296
// 有一个分数序列 q1/p1,q2/p2,q3/p3,q4/p4,q5/p5,.... ,其中qi+1= qi+ pi, pi+1=qi, p1= 1, q1= 2。
// 比如这个序列前6项分别是2/1,3/2,5/3,8/5,13/8,21/13。求这个分数序列的前n项之和。

// 输入格式
// 输入有一行，包含一个正整数n(n <= 30)。
// 输入样例
// 2

// 输出格式
// 输出有一行，包含一个浮点数，表示分数序列前n项的和，精确到小数点后4位。
// 输出样例
// 3.5000

#include <cstdio>

int main() {
  int n;
  double sum = 0;
  scanf("%d", &n);

  double q = 2, p = 1;

  while(n > 0) {
    sum += q/p;
    double tmp = p;
    p = q;
    q = tmp + q;
    n--;
  }
  
  printf("%.4lf", sum);
  return 0;
}