// 234
// 把一个字符串中特定的字符全部用给定的字符替换，得到一个新的字符串。

#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main() {
	char s[31], needRepeat, repeat;

	scanf("%s %c %c", s, &needRepeat, &repeat);

	int len = strlen(s);

	for(int i = 0; i < len; i++) {
		if (s[i] == needRepeat) {
			s[i] = repeat;
		}
	}
	printf("%s", s);
	return 0;
}