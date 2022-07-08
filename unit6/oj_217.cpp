// 217
// 给定一个5*5的矩阵（数学上，一个r×c的矩阵是一个由r行c列元素排列成的矩形阵列），
// 将第n行和第m行交换，输出交换后的结果。

#include <iostream>
using namespace std;

int main() {
	int arr[5][5];

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> arr[i][j];
		}
	}

	int m, n;
	cin >> m >> n;

	for (int i = 0; i < 5; i++) {
		int tmp = arr[m-1][i];
		arr[m-1][i] = arr[n-1][i];
		arr[n-1][i] = tmp;
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}