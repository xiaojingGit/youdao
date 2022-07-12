// 224
// 输入一个n行m列的矩阵A，输出它的转置AT。

#include <iostream>
using namespace std;

int main() {
  int n, m, arr[101][101];

  cin >> n >> m;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> arr[i][j];
    }
  }
  // 00 10 20
  // 01 11 21
  // 02 12 22
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cout << arr[j][i] << " ";
    }
    cout << endl;
  }
  return 0;
}