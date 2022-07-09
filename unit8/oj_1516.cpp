// 1516
// 给定一个由a-z这26个字符组成的字符串，统计其中哪个字符出现的次数最多。

#include <iostream>
#include <cstring>
using namespace std;

int main() {

  // 计数排序
  string s;
  int arr[123] = {0}, max=-1;
  char c;
  cin >> s;
  int len = s.size();
  for (int i = 0; i < len; i++) {
    arr[s[i]]++;
    // cout << s[i] << ":" << arr[s[i]] << endl;
    if (max < arr[s[i]]) {
      max = arr[s[i]];
      c = s[i];
    }
  }
  cout << c << " " << max;
  return 0;
}