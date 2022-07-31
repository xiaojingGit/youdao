// 291
// 给定若干个四位数，求出其中满足以下条件的数的个数： 个位数上的数字减去千位数上的数字，再减去百位数上的数字， 
// 再减去十位数上的数字的结果大于零。

// 输入格式
// 输入为两行，第一行为四位数的个数n，第二行为n个的四位数，数与数之间以一个空格分开。(n <= 100)
// 输入样例
// 5
// 1234 1349 6119 2123 5017

// 输出格式
// 输出为一行，包含一个整数，表示满足条件的四位数的个数。
// 输出样例
// 3

#include <iostream>
using namespace std;

int main() {
  int n, count=0;
  char num[4];
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> num;
    int ge = num[3] - '0';
    int shi = num[2] - '0';
    int bai = num[1] - '0';
    int qian = num[0] - '0';
    if (ge - shi - bai - qian > 0) {
      count = count + 1;
    }
  }
  cout << count;
  return 0;
}