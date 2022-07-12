// 401

#include <cstdio>

int main() {
  int n, max=-1;
  scanf("%d", &n);

  for (int i = 0; i <= n; i++) {
    for (int j = 0; j <= n; j++) {
      for (int k = 0; k <= n; k++) {
        if ((i+j) % 2 == 0 && (j+k) % 3 == 0 && (i+j+k) % 5 == 0) {
          if (max < i+j+k) {
            max = i+j+k;
          }
        }
      }
    }
  }
  printf("%d", max);
  return 0;
}