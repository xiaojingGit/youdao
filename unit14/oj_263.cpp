// 263
// 在一个非降序列中，查找与给定值最接近的元素。

// 输入格式
// 第一行包含一个整数n，为非降序列长度。1 <= n <= 100000。
// 第二行包含n个整数，为非降序列各元素。所有元素的大小均在0-1,000,000,000之间。
// 第三行包含一个整数m，为要询问的给定值个数。1 <= m <= 10000。
// 接下来m行，每行一个整数，为要询问最接近元素的给定值。所有给定值的大小均在0-1,000,000,000之间。
// 输入样例
// 3
// 2 5 8
// 2
// 10
// 5

// 输出格式
// m行，每行一个整数，为最接近相应给定值的元素值，保持输入顺序。若有多个值满足条件，输出最小的一个。
// 输出样例
// 8
// 5

// 0 1 2 3 4 5 6 7 8
#include <iostream>
#include <cmath>
using namespace std;

int arr[100001];

int queryNum(int n, int len) {
  int l = 1, r = len;
  while (l <= r) {
    int mid = (l + r) / 2;
    if (arr[mid] == n) {
      return arr[mid];
    } else if (arr[mid] > n) {
      // 如果已经到相邻两个数，还是未找到，则最接近的数必然在这俩之间，取绝对值小的，如果绝对值相等，取更小的数
      if (mid - l  == 1) {
        return abs(arr[mid] - n) >= abs(arr[l] - n) ? arr[l] : arr[mid];
      }
      r = mid;
    } else {
      if (r - mid  == 1) {
        return abs(arr[mid] - n) > abs(arr[r] - n) ? arr[r] : arr[mid];
      }
      l = mid;
    }
  }
  return 0;
}

int main() {
  int n, m, tmp;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> arr[i];
  }
  cin >> m;
  // 升序序列，使用二分查找
  for (int i = 1; i <= m; i++) {
    cin >> tmp;
    int a = queryNum(tmp, n);
    cout << a << endl;
  }
  return 0;
}