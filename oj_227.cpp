// 227
// 输入一行字符，统计出其中数字字符的个数。

#include <iostream>
#include <cstring>
using namespace std;

int main() {
  int count = 0;

  string str;
  char str1[256];

  getline(cin, str);
  cin.getline(str1, 255);

  cout << strlen(str1) << endl;

  int len = str.size();
  for (int i = 0; i < len; i++) {
    if (str[i] >= '0' && str[i] <= '9') {
      count++;
    }
  }

  cout << count;
  return 0;
}

int main1() {
  int count = 0, num = 0;
  char c, m;
  bool isBool = true;

  while(isBool) {
    scanf("%c", &c);
    if (c >= '0' && c <= '9') {
      count++;
    }
    num++;
    if (c == '.' || num >= 255) {
      isBool = false;
    }
  }
  
  cout << count;
  return 0;
}