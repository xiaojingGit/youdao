// 371

#include <iostream>
using namespace std;
int main() {
  int a, n, m, x;
  // a: 始发站上车人数
  // n: 共n站
  // m: 最后一站下车的人数(全部下车)(n-1站开出时，车上人数)
  // x: x站开出
  // 求x站开出时车上人数多少
  // 车站号           上车人数          下车人数            净增加人数            当前总人数
  //  1                 a               0                   a                   a
  //  2                 b               b                   0                   a
  //  3                a+b              b                   a                   2a
  //  4                a+2b            a+b                  b                   2a+b
  //  5                2a+3b           a+2b                a+b                  3a+2b
  //  6                3a+5b           2a+3b               a+2b                 4a+4b
  //  7                5a+8b           3a+5b               2a+3b                6a+7b
  //  8                8a+13b          5a+8b               3a+5b                9a+12b
  //  b用来表示第二站上下车人数，从第4项开始，a,b的系数其实就是斐波那契数列，当前总人数其实就是净增加人数的累加
  int f1[16], f2[16]; // f1表示上车人数a的系数，f2表示上车b的系数
  cin >> a >> n >> m >> x;
  if (a == 0 || x == n)  {
    cout << 0;
    return 0;
  } 
  // 从表格可看出，第3站下车人数与b无关
  if (x == 3) {
    cout << 2*a;
    return 0;
  }
  f1[1] = 1; f2[1]=0;
  f1[2] = 0; f2[2]=1;
  f1[3] = 1; f2[3]=1;
  // 先求出第n-1站时，a，b的系数
  for (int i = 4; i < n; i++) {
    f1[i] = f1[i-1] + f1[i-2];
    f2[i] = f2[i-1] + f2[i-2];
  }
  // 求出每站上车的ab系数之后，可以
  // f1[n-1]*a + f2[n-1]*b = m;
  int b = (m - f1[n-1]*a) / f2[n-1];
  // 求x站开出时车上人数
  int sum=0, arr[16]; // arr表示每站开出时车上净增加人数
  arr[1] = a;
  arr[2] = 0;
  arr[3] = a;
  arr[4] = b;
  sum = arr[1] + arr[2] + arr[3] + arr[4];
  for (int i = 5; i <= x; i++) {
    arr[i] = arr[i-1]+arr[i-2];
    sum += arr[i];
  }
  cout << sum;
  return 0;
}