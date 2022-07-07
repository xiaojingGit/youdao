// 1070
// 在一个长度为n(n < 1000)的整数序列中，判断是否存在某两个元素之和为k。

#include <cstdio>

int main() {
  int n, k, arr[1000];

  scanf("%d%d", &n, &k);

  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (arr[i] + arr[j] == k) {
        printf("yes");
        return 0;
      }
    }
  }
  printf("no");
  return 0;
}