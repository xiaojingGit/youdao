// 222
// 给出两幅相同大小的黑白图像（用0-1矩阵）表示，求它们的相似度。 说明：若两幅图像在相同位置上的像素点颜色相同，
// 则称它们在该位置具有相同的像素点。两幅图像的相似度定义为相同像素点数占总像素点数的百分比。

#include <cstdio>

int main() {
  int m, n, arrM[101][101], tmp, count=0;
  scanf("%d%d", &m, &n);
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%d", &arrM[i][j]);
    }
  }
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%d", &tmp);
      if (tmp == arrM[i][j]) {
        count++;
      }
    }
  }
  printf("%.2lf", (double)count/(m*n) * 100);
  return 0;
}