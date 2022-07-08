// 365
// 给定一个十进制正整数n，写下从1到n的所有整数，然后数一下其中出现的数字“1”的个数。 例如当n=2时，写下1,2。
// 这样只出现了1个“1”；当n=12时，写下1，2，3，4，5，6，7，8，9，10，11，12。这样出现了5个“1”。

#include <iostream>
using namespace std;

int hasOneNum(int n) {
	int count = 0;
	while(n) {
		int yu = n % 10;
		if (yu == 1) {
			count++;
		}
		n = n / 10;
	}
	return count;
}

int main() {
	int n, count=0;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		count += hasOneNum(i);
	}
	printf("%d", count);
	return 0;
}