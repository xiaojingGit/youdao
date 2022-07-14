// 236
// 医生在书写药品名的时候经常不注意大小写，格式比较混乱。现要求你写一个程序将医生书写混乱的药品名整理成统一规范的格式，
// 即药品名的第一个字符如果是字母要大写，其他字母小写。如将ASPIRIN、aspirin整理成Aspirin。

#include <cstdio>
#include <cstring>

int main() {
  int n, len;
  char medicineName[101];
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%s", medicineName);
    len = strlen(medicineName);
    for (int j = 0; j < len; j++) {
      char c = medicineName[j];
      if (j == 0 && c >= 'a' && c <= 'z') {
        medicineName[j] = c - 32;
      } else if (j > 0 && c >= 'A' && c <= 'Z') {
        medicineName[j] = c + 32;
      }
    }
    printf("%s\n", medicineName);
  }
  return 0;
}