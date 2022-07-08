// 273
// 我国现有x亿人口，按照每年0.1%的增长速度，n年后将有多少人？

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int x, n;

	cin >> x >> n;

	double sum = x;

	for (int i = 1; i <= n; i++) {
		sum = sum + sum * 0.001;
	}

	printf("%.4lf", sum);
	return 0;
}