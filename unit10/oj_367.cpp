// 367
// 根据参数，画出矩形。

#include <iostream>
using namespace std;

int main() {
  int n, m, kongxin;
  char c;

  cin >> n >> m >> c >> kongxin;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (!kongxin && (i != 0 && i != n-1 && j != 0 && j != m-1)) {
        cout << " ";
      } else {
        cout << c;
      }
    }
    cout << endl;
  }
  return 0;
}