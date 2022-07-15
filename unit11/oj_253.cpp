// 253 奖学金

#include <iostream>
#include <algorithm>
using namespace std;

struct Student {
  int zh;
  int sx;
  int en;
  int sum;
  int code;
};
int cmp(Student stu1, Student stu2) {
  // 测试点，总分相同，按语文成绩排序
  if (stu1.sum == stu2.sum) {
    return stu1.zh > stu2.zh;
  }
  return stu1.sum > stu2.sum; // 降序
}
int main() {
  int n;
  Student stus[301];
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> stus[i].zh >> stus[i].sx >> stus[i].en;
    stus[i].sum = stus[i].zh + stus[i].sx + stus[i].en;
    stus[i].code = i;
  }
  sort(stus+1, stus + n + 1, cmp); // 将数组a的第0位到第n-1位排序

  for (int i = 1; i <= 5; i++) {
    cout << stus[i].code << " " << stus[i].sum << endl;
  }
  return 0;
}
