// 228
// 给定一个只包含小写字母的字符串，请你找到第一个仅出现一次的字符。如果没有，输出no。

#include <iostream>
#include <cstring>
using namespace std;

int main() {

  // 首先遍历一遍字符串，算出每个字符的个数，存在计数数组中
  // 然后遍历第二遍字符串，如果在数组中个数是1，则直接输出
  string s;
  int idx = 0;
  int arr[123] = {0};
  cin >> s;
  int len = s.size();
  for (int i = 0; i < len; i++) {
    arr[s[i]]++;
  }
  for (int i = 0; i < len; i++) {
    if (arr[s[i]] == 1) {
      cout << s[i];
      return 0;
    }
  }
  cout << "no";
  return 0;
}