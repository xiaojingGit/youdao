// 1035
// 求任意两个不同进制非负整数的转换（2进制～36进制），所给整数在long所能表达的范围之内。 
// 不同进制的表示符号为（0，1，...，9，a，b，...，z）或者（0，1，...，9，A，B，...，Z）。

#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

vector <char> toDArr;
void toN(int n, int d) {
  char arr[26];
  for (int i = 0; i < 26; i++) {
    arr[i] = 'A' + i;
  }
  while(n) {
    int yu = n % d;
    char yu1;
    if (yu >= 10) {
      yu1 = arr[yu - 10];
      toDArr.push_back(yu1);
    } else {
      toDArr.push_back(yu + '0');
    }
    n = n / d;
  }
}

int main() {
  int a, b, tenRes = 0, arr[123];
  string n;
  cin >> a >> n >> b;
  // 先初始化a-z/A-Z为 10、11、12...36
  for (int i = 97; i < 123; i++) {
    arr[i] = 10 + i - 97;
    arr[i-32] = 10 + i - 97;
  }
  // 先将n转换成十进制
  int len = n.size();
  for (int i = len - 1; i >= 0; i--) {
    int num = n[i];
    if (num - '0' < 10 || a == 10) {
      tenRes += (num - '0') * pow(a, len - 1 - i);
    } else {
      tenRes += arr[num] * pow(a, len - 1 - i);
    }
  }
  // 再将10进制转换成n进制
  if (b == 10) {
    cout << tenRes;
  } else {
    toN(tenRes, b);
    int len2 = toDArr.size();
    for (int i = len2 - 1; i >= 0; i--) {
      cout << toDArr[i];
    }
  }
  return 0;
}