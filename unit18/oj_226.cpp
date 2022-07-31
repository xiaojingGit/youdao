// 226
// 在边长为9的正方形培养皿中，正中心位置有m个细菌。假设细菌的寿命仅一天，但每天可繁殖10个后代，而且这10个后代，
// 有两个分布在原来的单元格中，其余的均匀分布在其四周相邻的八个单元格中。求经过n(1≤n≤4)天后，细菌在培养皿中的分布情况。

// 输入格式
// 输入为两个整数，第一个整数m表示中心位置细菌的个数（2 ≤ m ≤ 30），第二个整数n表示经过的天数（1 ≤ n ≤ 4）。
// 输入样例
// 2 1

// 输出格式
// 输出九行九列整数矩阵，每行的整数之间用空格分隔。整个矩阵代表n天后细菌在培养皿上的分布情况。
// 输出样例
// 0 0 0 0 0 0 0 0 0
// 0 0 0 0 0 0 0 0 0
// 0 0 0 0 0 0 0 0 0
// 0 0 0 2 2 2 0 0 0
// 0 0 0 2 4 2 0 0 0
// 0 0 0 2 2 2 0 0 0
// 0 0 0 0 0 0 0 0 0
// 0 0 0 0 0 0 0 0 0
// 0 0 0 0 0 0 0 0 0

#include <iostream>
using namespace std;

int arr[9][9] = {0};
int main() {
	int m, n;
	cin >> m >> n;

	int minRow = 4, minCol = 4, maxRow = 4, maxCol = 4; // 代表扩散最大边界
	arr[4][4] = m; // 正中心位置m个细菌

	int k = n;
	while(n) {
		for (int i = minRow; i <= maxRow; i++) {
			for (int j = minCol; j <= maxCol; j++) {
				cout << minRow << " " << maxRow << " " << minCol << " " << maxCol << endl;
				arr[i-1][j] += arr[i][j];
				arr[i-1][j+1] += arr[i][j];
				arr[i-1][j-1] += arr[i][j];
				arr[i][j-1] += arr[i][j];
				arr[i][j+1] += arr[i][j];
				arr[i+1][j] += arr[i][j];
				arr[i+1][j+1] += arr[i][j];
				arr[i+1][j-1] += arr[i][j];
				arr[i][j] = 2 * arr[i][j];
			}
			cout << endl;
		}
		minRow--;
		maxRow++;
		minCol--;
		maxCol++;
		n--;
	}
	
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}

// 0 0 0 0 0 0 0 0 0
// 0 0 0 0 0 0 0 0 0
// 0 0 2 2 2 0 0 0 0
// 0 0 2 2 4 2 0 0 0
// 0 0 2 4 6 2 0 0 0
// 0 0 0 2 2 2 0 0 0
// 0 0 0 0 0 0 0 0 0
// 0 0 0 0 0 0 0 0 0
// 0 0 0 0 0 0 0 0 0