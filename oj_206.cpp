// 某医院想统计一下某项疾病的获得与否与年龄是否有关，需要对以前的诊断记录进行整理，
// 按照0-18、19-35、36-60、61以上（含61）四个年龄段统计的患病人数占总患病人数的比例。

#include <cstdio>

int main() {
	int n, age, count1 = 0, count2 = 0, count3 = 0, count4 = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &age);
		if (age > 0 && age <= 18) {
			count1++;
		}
		if (age > 18 && age <= 35) {
			count2++;
		}
		if (age > 35 && age <= 60) {
			count3++;
		}
		if (age > 60) {
			count4++;
		}
	}
	printf("%.2lf\n", (double)count1);
	printf("%.2lf\n", (double)count2);
	printf("%.2lf\n", (double)count3);
	printf("%.2lf\n", (double)count4);
	return 0;
}