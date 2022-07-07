// 284
// 救生船从大本营出发，营救若干屋顶上的人回到大本营，屋顶数目以及每个屋顶的坐标 和人数都将由输入决定，
// 求出所有人都到达大本营并登陆所用的时间。 在直角坐标系的原点是大本营，救生船每次从大本营出发，救了人之后将人送回大本营。
// 坐标系中的点代表屋顶，每个屋顶由其位置坐标和其上的人数表 示。救生船每次从大本营出发，以速度50 米/分钟驶向下一个屋顶，
// 达到一个屋顶后，救下其上的所有人，每人上船1 分钟，船原路返回，达到大本营，每人下船0.5 分钟。
// 假设原点与任意一个屋顶的连线不穿过其它屋顶。

#include <cstdio>
#include <cmath>

int main() {
  int n, a, b, m;
  double timeSum = 0;

  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    scanf("%d%d%d", &a, &b, &m);
    double distance = sqrt(pow(a,2) + pow(b,2));
    timeSum += distance / 50 * 2 + 1.5 * m;
  }

  printf("%.0lf", ceil(timeSum));
  return 0;
}