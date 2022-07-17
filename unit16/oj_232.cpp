// 232
// 给定一个不包含空白符的字符串，请判断是否是C语言合法的标识符号（注：题目保证这些字符串一定不是C语言的保留字）。
//  C语言标识符要求： 1. 非保留字； 2. 只包含字母、数字及下划线（“_”）。 3. 不以数字开头。

// 输入格式
// 一行，包含一个字符串，字符串中不包含任何空白字符，且长度不大于20。
// 输入样例
// RKPEGX9R;TWyYcp

// 输出格式
// 一行，如果它是C语言的合法标识符，则输出yes，否则输出no。
// 输出样例
// no

#include <cstring>
#include <iostream>
using namespace std;
int main() {
  string s;
  cin >> s;
  int len = s.size(), flag=1;
  // 第一个字母不能为数字
  if (s[0] >= '0' && s[0] <= '9') {
    cout << "no";
    return 0;
  }
  for (int i = 1; i < len; i++) {
    if (!((s[i] >= '0' && s[i] <= '9') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || s[i] == '_')) {
      flag = 0;
      break;
    }
  }
  if (flag) {
    cout << "yes";
  } else {
    cout << "no";
  }
  return 0;
}