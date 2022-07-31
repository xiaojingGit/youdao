// 280
// 给定m行n列的图像各像素点灰度值，对其依次进行一系列操作后，求最终图像。 其中，可能的操作及对应字符有如下四种： 
// A：顺时针旋转90度； B：逆时针旋转90度； C：左右翻转； D：上下翻转。

// 输入格式
// 第一行包含两个正整数m和n，表示图像的行数和列数，中间用单个空格隔开。1 <= m <= 100, 1 <= n <= 100。
// 接下来m行，每行n个整数，表示图像中每个像素点的灰度值，相邻两个数之间用单个空格隔开。灰度值范围在0到255之间。
// 接下来一行，包含由A、B、C、D组成的字符串s，表示需要按顺序执行的操作序列。s的长度在1到100之间。
// 输入样例
// 2 3
// 10 0 10
// 100 100 10
// AC

// 输出格式
// m'行，每行包含n'个整数，为最终图像各像素点的灰度值。其中m'为最终图像的行数，n'为最终图像的列数。相邻两个整数之间用单个空格隔开。
// 输出样例
// 10 100
// 0 100
// 10 10

#include <cstdio>
#include <cstring>

int main() {
	int m, n, arr[101][101];
	scanf("%d%d", &m, &n);
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	char str[101];
	scanf("%s", str);
	int len = strlen(str);
	for (int i = 0; i < len; i++) {
		int c = str[i];
		if (c == 'A' || c == 'B') {
			int resArr[101][101];
			for (int i = 0; i < n; i++) {
				for (int  j = 0; j < m; j++) {
					if (c == 'A') {
						resArr[i][j] = arr[m-j-1][i];
					} else {
						resArr[i][j] = arr[j][n-i-1];
					}
				}
			}
			int tmp = n;
			n = m;
			m = tmp;
			for (int i = 0; i < m; i++) {
				for (int j = 0; j < n; j++) {
					arr[i][j] = resArr[i][j];
				}
			}
		} else if (c == 'C') {
			int p1 = 0, p2 = n - 1, tmp;
			while (p1 < p2) {
				for (int i = 0; i < m; i++) {
					tmp = arr[i][p2];
					arr[i][p2] = arr[i][p1];
					arr[i][p1] = tmp;
				}
				p1++;
				p2--;
			}
		} else if (c == 'D') {
			int row1 = 0, row2 = m - 1, tmp;
			while(row1 < row2) {
				for (int j = 0; j < n; j++) {
					tmp = arr[row1][j];
					arr[row1][j] = arr[row2][j];
					arr[row2][j] = tmp;
				}
				row1++;
				row2--;
			}
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}