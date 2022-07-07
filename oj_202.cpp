// 输出一个整数序列中与指定数字相同的数的个数。

#include <cstdio>
int main() {
	int n, arr[101], m, count=0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	scanf("%d", &m);
	for (int i = 0; i < n; i++) {
		if (m == arr[i]) {
			count++;
		}
	}
	printf("%d", count);
	return 0;
}