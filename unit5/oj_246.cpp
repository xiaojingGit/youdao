// 246
// 已知一个已经从小到大排序的数组，这个数组的一个平台（Plateau）就是连续的一串值相同的元素，
// 并且这一串元素不能再延伸。例如，在 1，2，2，3，3，3，4，5，5，6中1，2-2，3-3-3，4，5-5，6都是平台。
// 试编写一个程序，接收一个数组，把这个数组最长的平台找出 来。在上面的例子中3-3-3就是最长的平台。

#include <cstdio>

int main() {
	int n, last, curr, len1=1, len2=0;
	// len1：当前平台长度
	// len2：最长平台长度

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &curr);
		if (i != 0) {
			if (last == curr) {
				len1++;
			} else {
				if (len2 < len1) {
					len2 = len1;
				}
				len1 = 1;
			}
		}
		last = curr;
	}
	printf("%d", len2);
	return 0;
}