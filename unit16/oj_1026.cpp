// 1026
// 平面上有一个大矩形，其左下角坐标（0，0），右上角坐标（R,R)。 大矩形内部包含一些小矩形，小矩形都平行于坐标轴且互不重叠。
// 所有矩形的顶点都是整数。要求画一根平行于y轴的直线x=k（k是整数) ， 使得这些小矩形落在直线左边的面积必须大于等于落在右边的面积，
// 且两边面积之差最小。并且，要使得大矩形在直线左边的的面积尽可能大。 注意：若直线穿过一个小矩形，将会把它切成两个部分，分属左右两侧。

// 输入格式
// 第一行是整数R，表示大矩形的右上角坐标是(R,R) (1 <= R <= 100,000)。
// 接下来的一行是整数N,表示一共有N个小矩形(0 < N <= 10000)。
// 再接下来有N 行。每行有4个整数，L,T, W 和 H, 表示有一个小矩形的左上角坐标是(L,T),宽度是W，高度是H (0<=L,T <= R, 0 < W,H <= R). 小矩形不会有位于大矩形之外的部分。
// 输入样例
// 1000
// 2
// 1 1 2 1
// 5 1 2 1

// 输出格式
// 输出整数n，表示答案应该是直线 x=n。 如果必要的话，x=R也可以是答案。
// 输出样例
// 5

// 思路：
// 1. 可以把小矩形面积都计算出来，存到一维数组中，则变成了求数组怎么分割可以让两边的和差最小，如果和之差最小有多处位置，则应该取后边分割的点，才能保证大矩形左边最大
// 缺失：题目说直线还可能穿过小矩形
// 以下面这种思路来
// 2. 算出每一列小矩形的面积，存储到数组中，如arr[0]表示0到1小矩形面积， 然后用二分法求解

#include <iostream>
using namespace std;

// x（L）轴代表列，y（T）轴代表行
int main() {
	int R, N, arr[100001]={0}, maxR=-1, minL=100001; // arr用来存取每列小矩形的面积, 小矩形右边最大坐标
	cin >> R >> N;
	int L, T, W, H;
	for (int i = 0; i < N; i++) {
		cin >> L >> T >> W >> H;
		if(maxR < L + W) {
			maxR = L + W;
		}
		if (minL > L) {
			minL = L;
		}
		for (int j = L; j < L + W; j++) {
			arr[j] += H;
		}
	}

	long long sumL=0, sumR=0; // sumL左边面积，sumR右边面积
	int l=minL, r=maxR, mid;
	// 必须是l <= r （例子 1 1 1 1）
	while (l <= r) {
		mid = (l + r) / 2;
		for (int i = 0; i < mid; i++) {
			sumL += arr[i];
		}
		for (int j = mid; j <= maxR; j++) {
			sumR += arr[j];
		}
		if (sumL < sumR) {
			l += 1;  // 加1 mid求值不会改变，直接+2，可保证mid往后挪一个坐标
		} else {
			break;  // 当左边面积之和第一次超出右边时，则跳出循环
		}
		sumL = 0;
		sumR = 0;
	}

	// 保证大矩形在左边面积最大
	while(mid < R) {
		if (arr[mid] == 0) {
			mid++;
		} else {
			break;
		}
	}
	cout << mid;	
	return 0;
}