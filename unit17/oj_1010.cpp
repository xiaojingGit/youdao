// 1010
// Pell数列a1, a2, a3, ...的定义是这样的，a1 = 1, a2 = 2, ... , an = 2 * an − 1 + an - 2 (n > 2)。
// 给出一个正整数k，要求Pell数列的第k项模上32767是多少。

// 输入格式
// 第1行是测试数据的组数n，后面跟着n行输入。每组测试数据占1行，包括一个正整数k (1 ≤ k < 1000000)。
// 输入样例
// 2
// 1
// 8

// 输出格式
// n行，每行输出对应一个输入。输出应是一个非负整数。
// 输出样例
// 1
// 408

#include <iostream>
using namespace std;

int arr[1000001] = {0, 1, 2}; // 全局声明，未初始化项为0

int main() {
  int n, k;
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> k;
    for (int j = 1; j <= k; j++) {
      if (arr[j] != 0) {
        continue;
      }
      // 不能在循环结束取模，不知道为什么
      // arr[j] = 2 * arr[j-1] + arr[j-2];
      arr[j] = (2 * arr[j-1] + arr[j-2]) % 32767;
    }
    // cout << arr[k] % 32767;
    cout << arr[k] << endl;
  }

  return 0;
}