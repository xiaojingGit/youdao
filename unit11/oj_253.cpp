// 253 奖学金

#include <iostream>
using namespace std;

struct Student {
  int zh;
  int sx;
  int en;
};
int main() {
  int n, sums[301], count = 0;
  Student stus[301];

  cin >> n;

  for (int i = 1; i <= n; i++) {
    cin >> stus[i].zh >> stus[i].sx >> stus[i].en;
    sums[i] = stus[i].zh + stus[i].sx + stus[i].en;
  }

  sort(sums, sums + n); // 将数组a的第0位到第n-1位排序

  for (int i = n; i > 0; i--) {
    if (i == n) {
      cout << i << " " << sums[i];
      count++;
    } else {
      if (sums[i] == sums[i + 1]) {
        cout << i << " " << sums[i];
      } else {
        cout << endl;
        cout << i << " " << sums[i];
        count++;
      }
    }
    if (count == 5) {
      break;
    }
  }
  return 0;
}
