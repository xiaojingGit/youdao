// 1038
// 输入4行全部由大写字母组成的文本，输出一个垂直直方图，给出每个字符出现的次数。
// 注意：只用输出字符的出现次数，不用输出空白字符，数字或者标点符号的输出次数。

#include <iostream>
#include <string>
using namespace std;
int main() {
	int arr[91] = {0}, max=-1; // max表示最多字符数量
	string s1, s2, s3, s4;

	getline(cin, s1);
	getline(cin, s2);
	getline(cin, s3);
	getline(cin, s4);
	for (int i = 0, len = s1.size(); i < len; i++) {
		if (s1[i] >= 'A' && s1[i] <= 'Z') {
			int num = s1[i];
			arr[num]++;
			if (max < arr[num]) {
				max = arr[num];
			}
		}
	}
	for (int i = 0, len = s2.size(); i < len; i++) {
		if (s2[i] >= 'A' && s2[i] <= 'Z') {
			int num = s2[i];
			arr[num]++;
			if (max < arr[num]) {
				max = arr[num];
			}
		}
	}
	for (int i = 0, len = s3.size(); i < len; i++) {
		if (s3[i] >= 'A' && s3[i] <= 'Z') {
			int num = s3[i];
			arr[num]++;
			if (max < arr[num]) {
				max = arr[num];
			}
		}
	}
	for (int i = 0, len = s4.size(); i < len; i++) {
		if (s4[i] >= 'A' && s4[i] <= 'Z') {
			int num = s4[i];
			arr[num]++;
			if (max < arr[num]) {
				max = arr[num];
			}
		}
	}
	for (int i = 0; i < max; i++) {
		for (int j = 65; j < 91; j++) {
			if (arr[j] >= max - i) {
				cout << "* ";
			} else {
				cout << "  ";
			}
		}
		cout << endl;
	}
	for (int i = 65; i < 91; i++) {
		char c = i;
		cout << c << " ";
	}

	return 0;
}