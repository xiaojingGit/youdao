// 196

#include <cstdio>

int main() {
  int r, m, y;
  // r: 复合年利率 // m: 现有总值  y: 投资年数
  scanf("%d%d%d", &r, &m, &y);
  double per = (100+r)/100.0;
  // 注意这里sum=m必须写在输入之后，否则会是一串随机数
  double sum=m;
  for (int i = 1; i <= y; i++) {
    sum = per * sum;
  }
  int res = sum;
  printf("%d", res);
  return 0;
}