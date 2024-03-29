// 1532
// 编程找出所有的三位数到七位数中的阿姆斯特朗数。阿姆斯特朗数也叫水仙花数，它的定义如下：
// 若一个 n 位自然数的各位数字的 n 次方之和等于它本身，则称这个自然数为阿姆斯特朗数。 
// 例如，153（153=1×1×1+3×3×3 +5×5×5）是一个三位的阿姆斯特朗数，8208 则是一个四位的阿姆斯特朗数。

// 输入格式
// 无
// 输入样例
// 无

// 输出格式
// 逐个列举答案，列举格式见输出样例。
// 注意符号均为英文，且冒号后有空格。
// 输出样例
// Ans.1: 153
// Ans.2: 370
// Ans.3: 371
// Ans.4: 407
// Ans.5: 1634
// Ans.6: 8208
// Ans.7: 9474
// Ans.8: 54748
// Ans.9: 92727
// Ans.10: 93084
// Ans.11: 548834
// Ans.12: 1741725
// Ans.13: 4210818
// Ans.14: 9800817
// Ans.15: 9926315

#include <cstdio>
#include <cmath>

int arr[9][8] = {0};
int isShuixianhua(int num, int n) {
	int sum = 0;
	int num2 = num;
	while (num2) {
		int yu = num2 % 10;
		// 测试点，存储0-9的 3-7次方，如果有直接取
		if (!arr[yu][n]) {
			arr[yu][n] = pow(yu, n);
		}
		sum += arr[yu][n];
		num2 = num2 / 10;
		if (sum > num) {
			return 0;
		}
	}
	if (sum == num) {
		return 1;
	}
	return 0;
}
int main() {
	int count = 0;
	for (int i = 100; i <= 9999999; i++) {
		int flag = 0;
		if (i >= 100 && i <= 999) {
			flag = isShuixianhua(i, 3);
		} else if (i >= 1000 && i <= 9999) {
			flag = isShuixianhua(i, 4);
		} else if (i >= 10000 && i <= 99999) {
			flag = isShuixianhua(i, 5);
		} else if (i >= 100000 && i <= 999999) {
			flag = isShuixianhua(i, 6);
		} else {
			flag = isShuixianhua(i, 7);
		}
		if (flag) {
			printf("Ans.%d: %d\n", ++count, i);
		}
	}
	return 0;
}