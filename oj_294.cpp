// 输入两个正整数 m 和 k，其中1 < m < 100000，1 < k < 5 ，判断 m 能否被19整除，且恰好含有k个3，
// 如果满足条件，则输出YES，否则，输出NO。 例如，输入： 43833 3 满足条件，输出YES。
//  如果输入： 39331 3 尽管有3个3，但不能被19整除，也不满足条件，应输出NO。

#include <cstdio>
int main() {
  int m, k, count = 0;
  scanf("%d%d", &m, &k);

  if (m % 19 == 0) {
    while(m) {
      if (m % 10 == 3) {
        count++;
      }
      m = m / 10;
    }
    if (count == k) {
      printf("YES");
    } else {
      printf("NO");
    }
  } else {
    printf("NO");
  }
  return 0;
}