// 242
// 医院采样了某临床病例治疗期间的白细胞数量样本n份，用于分析某种新抗生素对该病例的治疗效果。
// 为了降低分析误差，要先从这n份样本中去除一个数值最大的 样本和一个数值最小的样本，
// 然后将剩余n-2个有效样本的平均值作为分析指标。同时，为了观察该抗生素的疗效是否稳定，还要给出该平均值的误差，
// 即所有有 效样本（即不包括已扣除的两个样本）与该平均值之差的绝对值的最大值。 
// 现在请你编写程序，根据提供的n个样本值，计算出该病例的平均白细胞数量和对应的误差。 
//（提示：为避免浮点精度误差过大，请使用double类型。）

#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main() {
	int n, hasMaxAbs = 0;
	double avarage, arr[301], sum=0, max = -1, min = pow(10, 9) + 1, maxAbs;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (max < arr[i]) {
			max = arr[i];
		}
		if (min > arr[i]) {
			min = arr[i];
		}
		sum += arr[i];
	}
	avarage = (sum - max - min) / (n - 2);
	for (int i = 0; i < n; i++) {
		if (!hasMaxAbs) {
			maxAbs = abs(arr[i] - avarage);
		} else {
			double jdz = abs(arr[i] - avarage);
			if (maxAbs < jdz) {
				maxAbs = jdz;
			}
		}
		hasMaxAbs = 1;
	}
	printf("%.2lf %.2lf", avarage, maxAbs);
	return 0;
}