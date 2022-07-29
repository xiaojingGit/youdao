#include <cstdio>
#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int n, tmp, flag=0; // flag 表示是否前面有输出  如 0 100 多项式为100x，而不是+100x
  cin >> n;
  for (int i = n; i >= 0; i--) {
    cin >> tmp;
    // tmp 为0，系数为0，则不用加入到多项式中
    if (tmp != 0) {
      if (tmp > 0) {
         // 如果tmp 大于0，添加连接符 + 号（非首项）
        if (i < n && flag) {
          printf("+");
        }
      } else {
        // 如果tmp小于0，添加连接符 - 号
        printf("-");
				flag = 1;
      }
			flag = 1;
      // 因为前面已经添加连接符，所以直接计算tmp的绝对值，方便拼接
      tmp = abs(tmp);
      if (tmp ==  1) {
        // 系数为1，则不用写，直接 输出x的次方，
				if (i == 1) {
					printf("x");
					continue;
				}
				if (i == 0) {
					printf("%d", tmp);
					continue;
				}
				printf("x^%d", i);
      } else {
				if (i == 1) {
					printf("%dx", tmp);
					continue;
				}
				if (i == 0) {
					printf("%d", tmp);
					continue;
				}
				printf("%dx^%d", tmp,  i);
      }
    }
  }
  return 0;
}