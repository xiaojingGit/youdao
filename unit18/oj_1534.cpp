// 1534
// 涛涛立志要做新好青年，他最近在学做菜。由于技术还很生疏，他只会用鸡蛋，西红柿，鸡 丁，辣酱这四种原料来做菜，
// 我们给这四种原料标上字母 A,B,C,D。 涛涛现在会做的菜有五种： 1、 西红柿炒鸡蛋 原料：AABDD 2、 酸辣鸡丁 原料：ABCD 
// 3、 宫保鸡丁 原料：CCD 4、 水煮西红柿 原料：BBB 5、 怪味蛋 原料：AD 这天早上，开开去早市给涛涛买了一些原料回来。
// 由于事先没有什么计划，涛涛决定， 对于现存的原料，每次尽量做菜单上靠前（即编号小）的菜。 现在请你写一个程序，
// 判断一下开开和涛涛中午能吃到哪些菜。

// 输入格式
// 共 4 个整数 a,b,c,d。分别表示开开买的 A,B,C,D 这 4 种原料的数量。每种原料不会超过 30
// 份。
// 输入样例
// 3
// 1
// 2
// 4

// 输出格式
// 输出 5 行。其中第 i 行表示涛涛做的第 i 种菜的数目。
// 输出样例
// 1
// 0
// 1
// 0
// 1

#include <cstdio>
#include <string>
using namespace std;

int getNum(int aa[4], int arr[4]) {
	int num = 1000;
	for (int i = 0; i < 4; i++) {
		if (arr[i] == 0) {
			continue;
		}
		int chu = aa[i] / arr[i];
		if (chu == 0) {
			return 0;
		}
		if (num > chu) {
			num = chu;
		}
	}
	return num;
}

int main() {
	int aa[4] = {0};
	string cookies[5] = {"AABDD", "ABCD", "CCD", "BBB", "AD"};
	scanf("%d%d%d%d", &aa[0], &aa[1], &aa[2], &aa[3]);

	for (int i = 0; i < 5; i++) {
		string cookie = cookies[i];
		int len = cookie.size();
		int p = 1, count=1;
		int arr[4] = {0}; // 存储每种食材需要数量
		while(p < len) {
			if (cookie[p] == cookie[p-1]) {
				count++;
				arr[cookie[p] - 65] = count;
			} else {
				arr[cookie[p-1] - 65] = count;
				count = 1;
				if (p == len - 1) {
					arr[cookie[p] - 65] = count;
				}
			}
			p++;
		}
		int num = getNum(aa, arr);
		aa[0] = aa[0] - num * arr[0];
		aa[1] = aa[1] - num * arr[1];
		aa[2] = aa[2] - num * arr[2];
		aa[3] = aa[3] - num * arr[3];
		printf("%d\n", num);
	}

	return 0;
}