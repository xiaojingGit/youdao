// 297
// 编写程序，输入n的值，求 1/1 - 1/2 + 1/3 - 1/4 + 1/5 - 1/6 + 1/7 - 1/8 + ... + (-1)n-1·1/n 的值。

// 输入格式
// 输入一个正整数n。1 <= n <= 1000。
// 输入样例
// 2

// 输出格式
// 输出一个实数，为表达式的值，保留到小数点后四位。
// 输出样例
// 0.5000

#include <cstdio>

int main() {
	int n;
	scanf("%d", &n);
	double res = 0;
	for (int i = 1; i <= n; i++) {
		if (i % 2 != 0) {
			res += (double)1 / i;
		} else {
			res -= (double)1 / i;
		}
	}
	printf("%.4lf", res);
	return 0;
}