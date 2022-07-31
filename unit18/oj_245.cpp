// 245
// 给定一个字符串，在字符串中找到第一个连续出现至少k次的字符。

// 输入格式
// 第一行包含一个正整数k，表示至少需要连续出现的次数。1 <= k <= 1000。
// 第二行包含需要查找的字符串。字符串长度在1到1000之间，且不包含任何空白符。
// 输入样例
// 3
// abcccaaab

// 输出格式
// 若存在连续出现至少k次的字符，输出该字符；否则输出No。
// 输出样例
// c

#include <string>
#include <iostream>
using namespace std;

int main() {
  int k;
  string str;
  cin >> k;
  cin >> str;
  int len = str.size();
  if (k == 1) {
    cout << str[0];
    return 0;
  }

  int p1=0, p2=1, count=1;
  while(p2 < len) {
    if(str[p1] == str[p2]) {
      count++;
    } else {
      count=1;
      p1=p2;
    }
    p2++;
    if (count == k) {
      cout << str[p1];
      return 0;
    }
  }
  cout << "No";
  return 0;
}