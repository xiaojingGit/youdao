// 1530
// 任意一个四位数，只要它们各个位上的数字是不全相同的，就有这样的规律： 
// 1)将组成该四位数的四个数字由大到小排列，形成由这四个数字构成的最大的四位数；
// 2)将组成该四位数的四个数字由小到大排列，形成由这四个数字构成的最小的四位数(如果 四个数中含有 0，则得到的数不足四位)；
// 3)求两个数的差，得到一个新的四位数(高位零保留)。 
// 重复以上过程，最后一定会得到的结果是 6174。 比如：4312 3087 8352 6174，经过三次变换，得到 6174。

// 输入格式
// 一个四位整数，输入保证四位数字不全相同 。
// 输入样例
// 4312

// 输出格式
// 一个整数，表示这个数字经过多少次变换能得到 6174。
// 输出样例
// 3

#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int main() {
	char nums[4];
	int val=0, count=0;
	for (int i = 0; i < 4; i++) {
		cin >> nums[i];
	}
	sort(nums, nums+4);
	while (val != 6174) {
		int n1=0, n2=0; // n1代表从小到大最小值 // n2代表从大到小最大值
		for (int i = 0; i < 4; i++) {
			n1 = n1 * 10 + (nums[i] - '0');
		}
		for (int i = 3; i >= 0; i--) {
			n2 = n2 * 10 + (nums[i] - '0');
		}
		val = n2-n1;
		count++;
		if (val == 6174) {
			cout << count;
			return 0;
		}
		// 更新num值并排序
		int newVal = val, p = 3;
		while(newVal) {
			nums[p--] = newVal % 10 + '0';
			newVal /= 10;
		}
		while(p > 0) {
			nums[p--] = 0;
		}
		sort(nums, nums+4);
	}
	return 0;
}