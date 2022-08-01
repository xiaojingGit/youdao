// 249
// 笨小猴的词汇量很小，所以每次做英语选择题的时候都很头疼。但是他找到了一种方法，经试验证明，用这种方法去选择选项的时候选对的几率非常大！
// 这种方法的具体描述如下：假设maxn是单词中出现次数最多的字母的出现次数，minn是单词中出现次数最少的字母的出现次数，
// 如果maxn-minn是一个质数，那么笨小猴就认为这是个Lucky Word，这样的单词很可能就是正确的答案。
// （提示： 单词error中出现最多的字母r出现了3次，出现次数最少的字母出现了1次，3-1=2，2是质数。 
// 单词olympic中出现最多的字母i出现了2次，出现次数最少的字母出现了1次，2-1=1，1不是质数。）

// 输入格式
// 只有一行，是一个单词，其中只可能出现小写字母，并且长度小于100。
// 输入样例
// 样例 #1：
// error
// 样例 #2：
// olympic

// 输出格式
// 共两行，第一行是一个字符串，假设输入的的单词是Lucky Word，那么输出“Lucky Word”，否则输出“No Answer”；
// 第二行是一个整数，如果输入单词是Lucky Word，输出maxn-minn的值，否则输出0。
// 输出样例
// 样例 #1：
// Lucky Word
// 2
// 样例 #2：
// No Answer
// 0

#include <cstring>
#include <cmath>
#include <iostream>
using namespace std;
int arr[100] = {0};
int isZhishu(int n) {
	// n == 0 是一个测试点
	if (n == 1 || n == 0) {
		return 0;
	}
	if (arr[n] == -1) { // 不是质数
		return 0;
	}
	if (arr[n] == 1) { // 是质数
		return 1;
	}
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			arr[n] = -1;
			return 0;
		}
	}
	arr[n] = 1;
	return 1;
}
int main() {
	int maxn = 0, minn = 100, maxc, minc, arr[27] = {0};
	string str;
	cin >> str;
	int len = str.size();
	if( len == 1) {
		cout << "No Answer" << endl;;
		cout << 0;
		return 0;
	}
	for (int i = 0; i < len; i++) {
		int k = str[i] - 'a';
		arr[k]++;
		if (maxn < arr[k]) {
			maxc = k;
			maxn = arr[k];
		}
		if (minc != k && minn > arr[k]) {
			minc = k;
			minn = arr[k];
		}
	}
	if (maxn == len) {
		minn = 0;
	}
	cout << maxn << " " << minn << endl;
	int cha = maxn - minn;
	if (isZhishu(cha)) {
		cout << "Lucky Word" << endl;
		cout << cha;
	} else {
		cout << "No Answer" << endl;;
		cout << 0;
	}
	return 0;
}