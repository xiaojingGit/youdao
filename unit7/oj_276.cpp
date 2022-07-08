// 276
// 两位正整数的简单算术运算（只考虑整数运算），算术运算为： +，加法运算； -，减法运算； *，乘法运算； /，整除运算； %，取余运算。 
// 算术表达式的格式为（运算符前后可能有空格）： 运算数 运算符 运算数 请输出相应的结果。

#include <iostream>
using namespace std;
int main() {
	string str, num1, num2;
	char opt = ' ';  // 运算符

	cin >> str;

	int len = str.size();

	for (int i = 0; i < len; i++) {
		if (str[i] >= '0' && str[i] <= '9') {
			if (opt == ' ') {
				num1 = num1 + str[i];
			} else {
				num2 = num2 + str[i];
			}
		} else {
			opt = str[i];
		}
	}
	int len1 = num1.size();
	int len2 = num2.size();

	int val1 = 0, val2 = 0;
	for (int i = len1 - 1; i >= 0; i--) {
		
	}
	if (opt == '+') {
		cout << num1 + num2;
	} else if (opt == '-') {

	} else if (opt == '*') {

	} else if (opt == '/') {

	} else if (opt == '%') {

	}
	return 0;
}