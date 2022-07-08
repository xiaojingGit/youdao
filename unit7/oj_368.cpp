// 368
// 已知正整数 n 是两个不同的质数的乘积，试求出较大的那个质数。

#include <cstdio>
#include <cmath>

int main() {
	int n, chushu;
	scanf("%d", &n);
	for (int i = 3; i <= sqrt(n); i++) {
		if (n % i == 0) {
			chushu = i;
			break;
		}
	}
	printf("%d", n / chushu);
	return 0;
}