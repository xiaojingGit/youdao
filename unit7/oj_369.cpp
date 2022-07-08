// 369
// 输入一个正整数n，求第n小的质数。

#include <iostream>
#include <cmath>
using namespace std;

int isZhishu(int n) {
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}

int main() {
	int n, res=2, count=1;
	cin >> n;
	while(count < n) {
		res++;
		if (isZhishu(res)) {
			count++;
		}
	}
	cout << res;
	return 0;
}