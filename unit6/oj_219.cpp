// 219
// 输入一个整数矩阵，计算位于矩阵边缘的元素之和。
// 所谓矩阵边缘的元素，就是第一行和最后一行的元素以及第一列和最后一列的元素。

#include <stdio.h>
int main(){
  int m,n,a[101][101],sum=0;
  scanf("%d%d",&m,&n);
	// 问题一：题目是m行n列，下面的循环输入每一个数字，
  for(int i = 0;i<m;i++){
    for(int j = 0;j<n;j++){
      scanf("%d",&a[i][j]);
    }
  }
  for(int i = 0;i<n;i++){
    sum=sum+a[0][i];
    sum=sum+a[m-1][i];
  }
  for(int i = 0;i<m;i++){
    sum=sum+a[i][0];
    sum=sum+a[i][n-1];
  }
	sum = sum - a[0][0] - a[0][n-1] - a[m-1][0] - a[m-1][n-1];
  printf("%d",sum);
	return 0;
}