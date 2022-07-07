#include <cstdio>

int main() {
	int n, jin, yin, tong, sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &jin, &yin, &tong);
		sum1 += jin;
		sum2 += yin;
		sum3 += tong;
		sum4 += jin + yin + tong;
	}

	printf("%d %d %d %d", sum1, sum2, sum3, sum4);
	return 0;
}