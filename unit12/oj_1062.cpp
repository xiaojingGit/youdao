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
  int arr[16], n=0, count=0;
  while (cin >> arr[n]) {
    n++;
  }
  sort(arr, arr+n);
  int p1 = 0, p2 = n-1;
  while (p1 < p2) {
    if (arr[p1] == 0) {
      p1++;
    } else {
      if (arr[p2] - arr[p1] < arr[p1]) {
        break;
      } else if (arr[p2] - arr[p1] > arr[p1]) {
        p2--;
      } else {
        count++;
        p1++;
      }
    }
  }
  return 0;
}