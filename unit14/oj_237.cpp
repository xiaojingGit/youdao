// 237
// 在一个序列（下标从1开始）中查找一个给定的值，输出第一次出现的位置。

// 输入格式
// 第一行包含一个正整数n，表示序列中元素个数。1 <= n <= 10000。
// 第二行包含n个整数，依次给出序列的每个元素，相邻两个整数之间用单个空格隔开。元素的绝对值不超过10000。
// 第三行包含一个整数x，为需要查找的特定值。x的绝对值不超过10000。
// 输入样例
// 5
// 2 3 6 7 3
// 3

// 输出格式
// 若序列中存在x，输出x第一次出现的下标；否则输出-1。
// 输出样例
// 2

#include <cstdio>
int main() {
	int n, arr[10001], x;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	scanf("%d", &x);
	for (int i = 0; i < n; i++) {
		if (arr[i] == x) {
			printf("%d", i + 1);
			return 0;
		}
	}
	printf("-1");
	return 0;
}