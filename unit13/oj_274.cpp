// 274
// 某程序员开始工作，年薪N万，他希望在中关村公馆买一套60平米的房子，现在价格是200万，假设房子价格以每年百分之K增长，
// 并且该程序员未来年薪不变，且不吃不喝，不用交税，每年所得N万全都积攒起来，问第几年能够买下这套房子？（第一年年薪N万，房价200万）

// 输入格式
// 一行，包含两个正整数N（10 <= N <= 50）, K（1 <= K <= 20），中间用单个空格隔开。
// 输入样例
// 50 10

// 输出格式
// 如果在第20年或者之前就能买下这套房子，则输出一个整数M，表示最早需要在第M年能买下，否则输出Impossible。
// 输出样例
// 8

#include <cstdio>

int main() {
	int n, k, year=1, deposit = 0;
	double housePrice = 200; // 存款
	scanf("%d%d", &n, &k);
	double per = (double)(100 + k) / 100;
	// 当存款小于200万并且年数不超过20年时，可以一直存款
	while(deposit < housePrice && year <= 20) {
		year++;
		deposit = year * n;
		housePrice = housePrice * per;
	}
	if (year > 20) {
		printf("Impossible");
	} else {
		printf("%d", year);
	}
	return 0;
}