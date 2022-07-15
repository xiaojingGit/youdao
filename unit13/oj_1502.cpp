// 1502
// 给定一个字符串，请将其中的所有数字串提取，并将每个数字串作为整数看待（假设可以用int 表示），按从小到大顺序输出结果，
// 输出的整数之间以逗号间隔。如果没有数字，则输出0；例如：*1234.345#6781ad9jk81-11101?aght88ir09kp，
// 其中的整数包括：1234，345，6781，9，81，11101，88，9，从小到大排序后，应该输出： 9，9，81，88，345，1234，6781，11101

// 输入格式
// 在一行内输入一串符号，长度不大于300。输入数据保证提取的整数不超过10^9。
// 输入样例
// *1234.345#6781ad9jk81-11101?aght88ir09kp

// 输出格式
// 从小到大排序的整数序列，如果没有数字，则输出0；
// 输出样例
// 9,9,81,88,345,1234,6781,11101

// #include <iostream>
// #include <cstring>
// #include <algorithm>
// using namespace std;
// char s[350]; //字符串
// int temp[10]; //临时分解数字
// int ans[300]; //答案
// int toInt(int n) { //转换为整数
// 	int num = 0;
// 	for (int i = 0; i < n; ++i) {
// 		num = num * 10 + temp[i];
// 	}
// 	return num;
// }
// int main() {
// 	cin>>s;
// 	int len=strlen(s);
// 	int have=0;
// 	for (int i = 0; i < len; ++i) {
// 		int j = 0;
// 		while(s[i] >= '0' && s[i] <= '9'){//分割
// 			temp[j++] = s[i] - '0';
// 			i++;
// 		}
// 		if(j > 0){
// 			ans[have++] = toInt(j);//转换
// 		}
// 	}
// 	sort(ans, ans+have);//排序
// 	for (int i = 0; i < have; ++i) {
// 		if(i) {
// 			cout << ',';
// 		}
// 		cout << ans[i];
// 	}
// 	if(have == 0) {
// 		cout << 0;//不含有数字情况
// 	}
// }


#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int arr[30]={0}, n=0;
	string s;
	cin >> s;
	int len = s.size();
	int p=0; // p: 指针
	while (p < len) {
		// 如果是数字，直接更新数组的第n项
		if (s[p] >= '0' && s[p] <= '9') {
			arr[n] = arr[n] * 10 + (s[p] - '0');
			// 测试点：如果最后一项是数字，n++
			if (p == len - 1) {
				n++;
			}
		} else {
			if (arr[n] > 0) {
				n++;
			}
		}
		p++;
	}
	if (n == 0) {
		cout << 0;
		return 0;
	}
	sort(arr, arr+n);
	for (int i = 0; i < n-1; i++) {
		cout << arr[i] << ",";
	}
	cout << arr[n-1];
	return 0;
}