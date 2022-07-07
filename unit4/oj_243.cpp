// 243
// 给定一个非负整数数组，统计里面每一个数的出现次数。我们只统计到数组里最大的数。 
// 假设 Fmax （Fmax < 10000）是数组里最大的数，那么我们只统计 {0,1,2.....Fmax} 里每个数出现的次数。

#include <cstdio>

int main() {
  int n, max=-1, tmp, arr[10000]={0};

  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    scanf("%d", &tmp);
    if (max < tmp) {
      max = tmp;
    }
    arr[tmp]++;
  }
  for (int i = 0; i <= max; i++) {
    printf("%d\n", arr[i]);
  }
  return 0;
}