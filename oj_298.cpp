// 298
// 给定正整数n，求不大于n的正整数的阶乘的和（即求1!+2!+3!+...+n!）

#include <iostream>
using namespace std;

int main() {
	int n, arr[12], sum=0;
	scanf("%d", &n);
	arr[1] = 1;
	for (int i = 2; i <= n; i++) {
		arr[i] = arr[i-1] * i;
	}
	for (int i = 1; i <= n; i++) {
		sum += arr[i];
	}
	printf("%d", sum);
	return 0;
}