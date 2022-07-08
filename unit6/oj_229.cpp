// 229
// 为了获知基因序列在功能和结构上的相似性，经常需要将几条不同序列的DNA进行比对，
// 以判断该比对的DNA是否具有相关性。 现比对两条长度相同的DNA序列。
// 首先定义两条DNA序列相同位置的碱基为一个碱基对，如果一个碱基对中的两个碱基相同的话，
// 则称为相同碱基对。接着计算相同碱基对占总碱基对数量的比例，
// 如果该比例大于等于给定阈值时则判定该两条DNA序列是相关的，否则不相关。

#include <cstdio>
#include <cstring>

int main() {
	int count = 0;
	double n;
	char s1[501], s2[502];

	scanf("%lf", &n);
	scanf("%s", s1);
	scanf("%s", s2);

	int len = strlen(s1);
	for (int i = 0; i < len; i++) {
		if (s1[i] == s2[i]) {
			count++;
		}
	}

	double probability = (double)count / len;
	if (probability >= n) {
		printf("yes");
	} else {
		printf("no");
	}
	return 0;
}