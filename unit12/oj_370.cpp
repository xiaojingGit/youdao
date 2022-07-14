// 370

#include <cstdio>

int main() {
  int n, sum = 0, currDayNum = 1, lianxuDay = 1; 
  // 当天收到金币数量1/2/3，lianxuDay：连续了几天
  scanf("%d", &n);

  while(n > 0) {
    // 当连续天数大于当前金币数量时，金币数量+1，连续天数重置为1
    if (lianxuDay > currDayNum) {
      currDayNum++;
      lianxuDay = 1;
    }
    sum += currDayNum;
    lianxuDay++;
    n--;
  }
  printf("%d", sum);
  return 0;
}