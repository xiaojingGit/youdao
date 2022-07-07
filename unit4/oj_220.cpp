// 220
// 给定n*n由0和1组成的矩阵，如果矩阵的每一行和每一列的1的数量都是偶数，则认为符合条件。 
// 你的任务就是检测矩阵是否符合条件，或者在仅改变一个矩阵元素的情况下能否符合条件。
//  "改变矩阵元素"的操作定义为0变成1或者1变成0。

#include <cstdio>
int main() {
  int n, arr[100][100], row[100]={0}, col[100]={0};
  
  scanf("%d", &n);
  
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%d", &arr[i][j]);
      if (arr[i][j] == 1) {
        row[i]++;
        col[j]++;
      }
    }
  }
  
  int rowCount = 0, colCount = 0, m1, n1;
  for (int i = 0; i < n; i++) {
    if (row[i] % 2 != 0) {
      rowCount++;
      m1 = i;
    }
    if (col[i] %2 != 0) {
      colCount++;
      n1 = i;
    }
  }
  if (rowCount > 1 || colCount > 1) {
    printf("Corrupt");
    return 0;
  }
  if (rowCount == 0 && colCount == 0) {
    printf("OK");
    return 0;
  }
  printf("%d %d", m1+1, n1+1);
  return 0;
}