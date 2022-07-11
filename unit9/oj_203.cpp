// 203

#include <cstdio>

int main() {
  int arr[10], count=0, h;

  for (int i = 0; i < 10; i++) {
    scanf("%d", &arr[i]);
  }

  scanf("%d", &h);

  for (int i = 0; i < 10; i++) {
    if (h + 30 >= arr[i]) {
      count++;
    }
  }
  printf("%d", count);
  return 0;
}