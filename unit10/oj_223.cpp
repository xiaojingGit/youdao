// 223
// 输入两个n行m列的矩阵A和B，输出它们的和A+B。

#include <cstdio>

int main() {
  int n, m, arr[101][101], tmp;

  scanf("%d%d", &n, &m);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      scanf("%d", &arr[i][j]);
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      scanf("%d", &tmp);
      printf("%d ", arr[i][j] + tmp);
    }
    printf("\n");
  }

  return 0;
}