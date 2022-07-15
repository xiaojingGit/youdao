// 1062
// 给定2到15个不同的正整数，你的任务是计算这些数里面有多少个数对满足：数对中一个数是另一个数的两倍。
// 比如给定1 4 3 2 9 7 18 22，得到的答案是3，因为2是1的两倍，4是2个两倍，18是9的两倍。

// 输入格式
// 一行，给出2到15个两两不同且小于100的正整数。最后用0表示输入结束。

// 输入样例
// 1 4 3 2 9 7 18 22 0

// 输出格式
// 一个整数，即有多少个数对满足其中一个数是另一个数的两倍。

// 输出样例
// 3

#include <iostream>
#include <algorithm>
using namespace std;

// 思路，先排序再判断
int main() {
  int arr[16], n=0, count=0, tmp;
  cin >> tmp;
  if (tmp == 0) {
    cout << 0;
    return 0;
  }
  arr[n++] = tmp;
  while (tmp != 0) {
    cin >> tmp;
    arr[n++] = tmp;
  }
  sort(arr, arr+n);
  if (arr[n-1] - arr[0] < arr[0]) {
    cout << 0;
  }
  for (int i = 0; i < n - 1; i++) {
    for (int j = n - 1; j >= 0 && j > i; j--) {
      if (arr[j] - arr[i] == arr[i]) {
        count++;
      } else if (arr[j] - arr[i] < arr[i]) {
        break;
      }
    }
  }
  cout << count;
  
  return 0;
}
// 1 2 3 4 7 9 18 22 44