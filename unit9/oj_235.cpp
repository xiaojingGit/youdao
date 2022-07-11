// 235

#include <iostream>
#include <cstring>
using namespace std;
int main() {
  char str[50], res[50];
  scanf("%s", str);
  int len = strlen(str);
  for (int i = 0; i < len; i++) {
    // 右移三位
    // 需要考虑最后xyz右移动三位，变成abc
    if (str[i] >= 'x') {
      str[i] = 'a' + (str[i] - 'x');
    } else if (str[i] < 'a' && str[i] >= 'X') {
      str[i] = 'A' + (str[i] - 'X');
    } else {
      str[i] = str[i] + 3;
    }
    if (str[i] >= 'a' && str[i] <= 'z') {
      res[len-i-1] = str[i] - 32;
    } else {
      res[len-i-1] = str[i] + 32;
    }
  }
  for (int i = 0; i < len; i++) {
    printf("%c", res[i]);
  }
  // 不能使用这种方式，应该是长度不对
  // printf("%s", res);
  return 0;
}