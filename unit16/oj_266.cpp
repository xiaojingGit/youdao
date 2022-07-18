// 266
// 给出若干个整数，询问其中是否有一对数的和等于给定的数。

// 输入格式
// 共三行：
// 第一行是整数n(0 < n <= 100,000)，表示有n个整数。
// 第二行是n个整数。整数的范围是在0到10^8之间。
// 第三行是一个整数m（0 <= m <= 2^30)，表示需要得到的和。
// 输入样例
// 4
// 2 5 1 4
// 6

// 输出格式
// 若存在和为m的数对，输出两个整数，小的在前，大的在后，中间用单个空格隔开。若有多个数对满足条件，选择数对中较小的数更小的。若找不到符合要求的数对，输出一行No。
// 输出样例
// 1 5

#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
	int n, arr[100001], m;
	scanf("%d", &n);
	if (n < 2) {
		printf("No");
		return 0;
	}
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	scanf("%d", &m);

	// 对输入的数组进行排序
	sort(arr, arr+n);

	int p1 = 0, p2 = n - 1;
	while (p1 < p2) {
		if (arr[p1] + arr[p2] == m) {
			printf("%d %d", arr[p1], arr[p2]);
			return 0;
		} else if (arr[p1] + arr[p2] < m) {
			p1++;
		} else {
			p2--;
		}
	}
	printf("No");
	return 0;
}