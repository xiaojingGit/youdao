// 1490
// 把一个八进制正整数转化成十进制。

#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int a, sum=0, count=0;
  cin >> a;

  while(a > 0) {
    sum += a % 10 * pow(8, count); 
    a = a / 10;
    count++;
  }
  cout << sum;
  return 0;
}