// 1482
// 古罗马帝国有一个拥有各种部门的强大政府组织。其中一个部门就是保密服务部门。为了保险起见，在省与省之间传递的重要文件中的大写字母
// 是加密的。当时最流行的加密方法是替换和重新排列。 替换方法是将所有出现的字符替换成其它的字符。有些字符会替换成它自己。
// 例如：替换规则可以是将'A' 到 'Y'替换成它的下一个字符，将'Z'替换成 'A'，如果原词是 "VICTORIOUS" 则它变成 "WJDUPSJPVT"。 
// 排列方法改变原来单词中字母的顺序。例如：将顺序 < 2 1 5 4 3 7 6 10 9 8 > 应用到 "VICTORIOUS" 上，
// 则得到"IVOTCIRSUO"。 人们很快意识到单独应用替换方法或排列方法加密，都是很不保险的。但是如果结合这两种方法，
// 在当时就可以得到非常可靠的加密方法。所以，很多重要信息先使用替换方法加密，再将加密的结果用排列的方法加密。
// 用两种方法结合就可以将"VICTORIOUS" 加密成"JWPUDJSTVP"。 考古学家最近在一个石台上发现了一些信息。初看起来它们毫无意义，
// 所以有人设想它们可能是用替换和排列的方法被加密了。人们试着解读了石台上的密码，现在他们想检查解读的是否正确。
// 他们需要一个计算机程序来验证，你的任务就是写这个验证程序。

// 输入格式
// 输入有两行。第一行是石台上的文字。文字中没有空格，并且只有大写英文字母。第二行是被解读出来的加密前的文字。第二行也是由大写英文字母构成的。
// 两行字符数目的长度都不超过100。
// 输入样例
// JWPUDJSTVP
// VICTORIOUS

// 输出格式
// 如果第二行经过某种加密方法后可以产生第一行的信息，输出 "YES"，否则输出"NO"。
// 输出样例
// YES

// 题目经过某种加密信息，则可能是替换、排序或者替换+排序

#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
  string s1, s2; // s1: 加密后  s2: 加密前
  cin >> s1 >> s2;
  // 题目经过某种加密信息，则可能是替换、排序或者替换+排序
  int len1 = s1.size();
  int len2 = s2.size();
  // 长度不相等，则直接输出NO
  if (len1 != len2) {
    cout << "NO";
    return 0;
  }
  // 如果两个字符串相等，则一定输出YES
  if (s1 == s2 || len1 == 1) {
    cout << "YES";
    return 0;
  }
  int arr1[26]={0}, arr2[26]={0}; // 记录密文s1, 明文s2，各字符数量
  for (int i = 0; i < len2; i++) {
    arr1[s1[i]-'A']++;
    arr2[s2[i]-'A']++;
  }

  // 测试点，直接排序，则相当于得到了下面的p1和p2
  sort(arr1, arr1+26);
  sort(arr2, arr2+26);
  int flag = 1;
  for (int i = 0; i < 26; i++) {
    if (arr1[i] != arr2[i]) {
      flag = 0;
      break;
    }
  }
  if (flag) {
    cout << "YES";
  } else {
    cout << "NO";
  }

  // 假设s1 = ABC, s2 = ADF
  // 则arr1 = {1, 1, 1, ....}  arr2 = {1, 0, 0, 1, 0, 1, .....}
  // 替换规则也是不固定的，所以替换后字符数量对应即可比如 ABC 替换 ADF， A B C D F都仅出现一次
  // 需要两个个新的桶来分别存储arr1, arr2 的不同字符数
  // int p1[26]={0}, p2[26]={0}, c1=0, c2=0;
  // for (int i = 0; i < 26; i++) {
  //   if (arr1[i] != 0) {
  //     p1[c1++] = arr1[i];
  //   }
  //   if (arr2[i] != 0) {
  //     p2[c2++] = arr2[i];
  //   }
  // }
  // 比较字符数是否相同，相同则代表可以转换
  // int flag = 1;
  // for (int i = 0; i < c1; i++) {
  //   if (p1[i] != p2[i]) {
  //     flag = 0;
  //     break;
  //   }
  // }
  // if (flag) {
  //   cout << "YES";
  // } else {
  //   cout << "NO";
  // }
  return 0;
}




int main1() {
  string s1, s2; // s1: 加密后  s2: 加密前
  cin >> s1 >> s2;
  // 计算s2经过加密后是否和s1相等，或者s1经过解密后是否和s2相等，相等则输出YES，否则输出NO
  int len1 = s1.size();
  int len2 = s2.size();
  // 长度不相等，则直接输出NO
  if (len1 != len2) {
    cout << "NO";
    return 0;
  }
  int t1[26], t2[26];
  // 统计明文和密文各字符顺序
  for (int i = 0; i < len1; i++) {
    t1[s1[i] - 'A']++;
    t2[s2[i] - 'A']++;
  }
  // 对字符顺序进行排序
  sort(t1, t1+26);
  sort(t2, t2+26);
  bool flag = true;
  for (int i = 0; i < 26; i++) {
    if (t1[i] != t2[i]) {
      flag = false;
      break;
    }
  }
  if (flag) {
    cout << "YES";
  } else {
    cout << "NO";
  }

  return 0;
}
