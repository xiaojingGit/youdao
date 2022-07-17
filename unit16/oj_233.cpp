// 233
// 脱氧核糖核酸（DNA）由两条互补的碱基链以双螺旋的方式结合而成。而构成DNA的碱基共有4种，分别为腺瞟呤（A）、鸟嘌呤（G）、
// 胸腺嘧啶（T）和胞嘧啶（C）。我们知道，在两条互补碱基链的对应位置上，腺瞟呤总是和胸腺嘧啶配对，鸟嘌呤总是和胞嘧啶配对。
// 你的任务就是根据一条单链上的碱基序列，给出对应的互补链上的碱基序列。

// 输入格式
// 一个字符串，表示一条碱基链。这个字符串只含有大写字母A、T、G、C，分别表示腺瞟呤、胸腺嘧啶、鸟嘌呤和胞嘧啶。字符串长度不超过255。
// 输入样例
// ATATGGATGGTGTTTGGCTCTG

// 输出格式
// 一个只含有大写字母A、T、G、C的字符串，为与输入的碱基链互补的碱基链。
// 输出样例
// TATACCTACCACAAACCGAGAC

#include <cstdio>
#include <cstring>

int main() {
  char c1[256], c2[256];
  scanf("%s", c1);
  int len = strlen(c1);
  for (int i = 0; i < len; i++) {
    if (c1[i] == 'A') {
      c2[i] = 'T';
    } else if (c1[i] == 'T') {
      c2[i] = 'A';
    } else if (c1[i] == 'G') {
      c2[i] = 'C';
    } else {
      c2[i] = 'G';
    }
  }
  printf("%s", c2);
  return 0;
}