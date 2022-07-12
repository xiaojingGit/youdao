// 286

#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  if (n == 1) {
    cout << "End";
    return 0;
  }
  while (n != 1) {
    if (n % 2 != 0) {
      cout << n << "*3+1=";
      n = n * 3 + 1;
    } else {
      cout << n << "/2=";
      n = n / 2;
    }
    cout << n << endl;
    if (n == 1) {
      cout << "End";
    }
  }
  return 0;
}