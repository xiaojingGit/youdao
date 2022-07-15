// 259

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string a[101];
	int k = 0;
	bool flag;
	int i;
	while (cin >> a[k]) {
		flag = false;
		// 每输入一个单词，从头遍历所有单词，如果找到相同单词，则把flag置为true，k不再++，则不会添加到数组中
		for (i = 0; i < k; i++) {
			if (a[i].compare(a[k]) == 0) {
				flag = true;
				break;
			}
		}
		if (!flag) {
			k++;
		}
	}
	sort(a, a+k);
	// 会超时
	// for (i = 0; i < k; i++) {
	// 	for (int j = i + 1; j < k; j++) {
	// 		if (a[i].compare(a[j]) > 0) {
	// 			string tmp = a[i];
	// 			a[i] = a[j];
	// 			a[j] = tmp;
	// 		}
	// 	}
	// }
	for (i = 0; i < k; i++) {
		cout << a[i] << endl;
	}
	return 0;
}

int main1() {
	string str;
	string strArr[101];
	int start = 0, count=0;
	getline(cin, str);
	int len = str.size();
	// 分割字符串到数组中
	for (int i = 0; i < len; i++) {
		if (str[start] != ' ') {
			if (str[i] == ' ') {
				strArr[count++] = str.substr(start, i-start);
				start = i;
			}
			if (i == len - 1) {
				strArr[count++] = str.substr(start, len-start);
			}
		} else {
			start = i;
		}
	}
	if (count == 1) {
		cout << strArr[0];
		return 0;
	}
	sort(strArr, strArr + count);
	// 冒泡排序 (会超时)
	// 输出结果
	cout << strArr[0] << endl;
	for (int i = 1; i < count; i++) {
		if (strArr[i].compare(strArr[i-1]) != 0) {
			cout << strArr[i] << endl;
		}
	}
	return 0;
}