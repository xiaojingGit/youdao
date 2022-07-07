// 210
// 在线性代数、计算几何中，向量点积是一种十分重要的运算。 给定两个n维向量a=(a1,a2,...,an)和b=(b1,b2,...,bn)，
// 求点积a·b=a1b1+a2b2+...+anbn。

#include <iostream>
using namespace std;

int main() {
  int n, tmp, arrA[1001], sum=0;

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> arrA[i];
  }

  for (int i = 0; i < n; i++) {
    cin >> tmp;
    sum += arrA[i]*tmp;
  }

  cout << sum;

  return 0;
}