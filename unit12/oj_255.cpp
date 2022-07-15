// 255
// 给定10个整数的序列，要求对其重新排序。排序要求: 1.奇数在前，偶数在后； 2.奇数按从大到小排序； 3.偶数按从小到大排序。

// 输入格式
// 输入一行，包含10个整数，彼此以一个空格分开，每个整数的范围是大于等于0，小于等于100。
// 输入样例
// 4 7 3 13 11 12 0 47 34 98

// 输出格式
// 按照要求排序后输出一行，包含排序后的10个整数，数与数之间以一个空格分开。
// 输出样例
// 47 13 11 7 3 0 4 12 34 98

#include <iostream>
#include <algorithm>
using namespace std;

int down(int num1, int num2) {
	return num1 > num2;
}
int up(int num1, int num2) {
	return num1 < num2;
}

int main() {
	int ji[10], ou[10], tmp, n1=0, n2=0;
	for (int i = 0; i < 10; i++) {
		cin >> tmp;
		if (tmp % 2 == 0) {
			ou[n2++] = tmp;
		} else {
			ji[n1++] = tmp;
		}
	}
	sort(ji, ji+n1, down);
	sort(ou, ou+n2, up);
	for (int i = 0; i < n1; i++) {
		cout << ji[i] << " ";
	}
	for (int i = 0; i < n2; i++) {
		cout << ou[i] << " ";
	}
	return 0;
}