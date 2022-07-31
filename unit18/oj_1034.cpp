// 1034
// 一元 n 次多项式可用如下的表达式表示： f(x)=anx^n+an-1x^n-1+...+a1x+a0,an<>0 其中，aix^i 称为i次项，
// ai称为i次项的系数。给出一个一元多项式各项的次数和系数，请按照如下规定的格式要求输出该多项式： 多项式中自变量为x，
// 从左到右按照次数递减顺序给出多项式。 多项式中只包含系数不为0 的项。 如果多项式n 次项系数为正，则多项式开头不出现“+”号，
// 如果多项式n 次项系数为负，则多项式以“-”号开头。 对于不是最高次的项，以“+”号或者“-”号连接此项与前一项，分别表示此项系数
// 为正或者系数为负。紧跟一个正整数，表示此项系数的绝对值（如果一个高于0 次的项，其系数的绝对值为1，则无需输出1）。
// 如果x 的指数大于1，则接下来紧跟的指数部分的形式为“x^b”，其中b 为x 的指数；如果x 的指数为1，则接下来紧跟的指数部分形式
// 为“x”；如果x 的指数为0，则仅需输出系数即可。 多项式中，多项式的开头、结尾不含多余的空格。

// 输入格式
// 共有2 行。第一行 1 个整数，n，表示一元多项式的次数。第二行有 n+1 个整数，其中第i 个整数表示第n-i+1 次项的系数，每两个整数之间用空格隔开。
// 数据范围：对于100%数据， 0 ≤n≤100 , −100≤ 系数 ≤100
// 输入样例
// 输入样例1
// 5 
// 100 -1 1 -3 0 10
// 输入样例2
// 3 
// -50 0 0 1 

// 输出格式
// 共1 行，按题目所述格式输出多项式。
// 输出样例
// 输出样例 1、
// 100x^5-x^4+x^3-3x^2+10
// 输出样例 2
// -50x^3+1 

#include <cstdio>
#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int n, tmp;
  

  cin >> n;

  for (int i = n; i >= 0; i--) {
    cin >> tmp;
    // tmp 为0，系数为0，则不用加入到多项式中
    if (tmp != 0) {
      if (tmp > 0) {
         // 如果tmp 大于0，添加连接符 + 号（非首项）
        if (i < n) {
          printf("+");
        }
      } else {
        // 如果tmp小于0，添加连接符 - 号
        printf("-");
      }
      // 因为前面已经添加连接符，所以直接计算tmp的绝对值，方便拼接
      tmp = abs(tmp);
      if (tmp ==  1) {
        // 系数为1，则不用写，直接 输出x的次方，
        if (i != 0) {
          // 非最后一项，拼接系数和x的次方
          printf("x^%d", i);
        } else {
          // 当最后一项时，x的次方为0，只需要拼接系数
          printf("%d", tmp);
        }
      } else {
        if (i!=0) {
          printf("%dx^%d", tmp,  i);
        } else {
          printf("%d", tmp);
        }
      }
      
    }
  }
  return 0;
}