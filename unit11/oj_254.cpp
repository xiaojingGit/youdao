// 254

#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

struct Student {
  int k;
  int s;
};

int cmp(Student stu1, Student stu2) {
  if (stu1.s == stu2.s) {
    return stu1.k < stu2.k;
  }
  return stu1.s > stu2.s;
}

int main() {
  int n, m, count = 0, idx=0;
  Student stus[5001];

  cin >> n >> m;

  m = floor(m * 1.5); // 保证至少这么多人进入面试

  for (int i = 0; i < n; i++) {
    cin >> stus[i].k >> stus[i].s;
  }

  sort(stus, stus + n, cmp);

  // 分数线
  int scoreline = stus[m-1].s;

  int interviewNum = m; // 面试人数
  for (int i = m; i < n; i++) {
    if (stus[i].s == scoreline) {
      interviewNum++;
    } else {
      break;
    }
  }

  cout << scoreline << " " << interviewNum << endl;;

  for (int i = 0; i < interviewNum; i++) {
    cout << stus[i].k << " " << stus[i].s << endl;
  }

  return 0;
}