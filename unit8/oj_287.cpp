// 287

#include <iostream>
using namespace std;

int main() {
  int deposit = 0, budget, surplus = 0, overMonth = 0;
  // deposit: 存款
  // budget: 预算
  // surplus：每月剩余
  for (int i = 1; i <= 12; i++) {
    cin >> budget;
    surplus = 300 + surplus - budget;
    if (surplus < 0 && overMonth == 0) {
      overMonth = i;
    }
    if (surplus > 100) {
      deposit = deposit + surplus / 100 * 100;
      surplus = surplus - surplus / 100 * 100;
    }
  }
  if (overMonth != 0) {
    cout << -overMonth;
  } else {
    cout << deposit * 1.2 + surplus;
  }
  return 0;
}