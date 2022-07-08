// 205
// 将一个数组中的值按逆序重新存放。例如，原来的顺序为8,6,5,4,1。要求改为1,4,5,6,8。

#include <iostream>
using namespace std;

int main() {
	int n, arr[100];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = n - 1; i >= 0; i--) {
		cout << arr[i] << " ";
	}
	return 0;
}