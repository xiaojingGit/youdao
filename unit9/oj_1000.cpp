// 1000
// 用栈的方法实现十进制数转化为其他进制的数

#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, d;
  vector <char> arr;

  cin >> n >> d;

  if (d == 10) {
    cout << n;
    return 0;
  }

  while(n) {
    int yu = n % d;
    char yu1;
    if (yu >= 10) {
      switch(yu) {
        case 10: yu1 = 'A'; break;
        case 11: yu1 = 'B'; break;
        case 12: yu1 = 'C'; break;
        case 13: yu1 = 'D'; break;
        case 14: yu1 = 'E'; break;
        case 15: yu1 = 'F'; break;
      }
      arr.push_back(yu1);
    } else {
      arr.push_back(yu + '0');
    }
    n = n / d;
  }

  int len = arr.size();

  for (int i = len - 1; i >= 0; i--) {
    cout << arr[i];
  }

  return 0;
}