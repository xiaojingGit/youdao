// 225
// 输入一个n行m列的黑白图像，将它顺时针旋转90度后输出。

#include <iostream>
using namespace std;

int main() {
  int n, m, arr[100][100];

  cin >> n >> m;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> arr[i][j];
    }
  }

  // 旋转90度，就是把行变成列，列变成行
  // 10 11 12 13 14
  // 15 16 17 18 19
  // 20 21 22 23 24
  // 20 15 10 
  // 21 16 11 
  // 22 17 12 
  // 23 18 13 
  // 24 19 14 
  for(int i = 0; i < m; i++) { //输出旋转后的矩阵
  // 变为m行n列
    for(int j = n - 1; j >= 0; j--) {
      cout << arr[j][i] << " ";
    }
		cout << endl;
  }
  return 0;
}