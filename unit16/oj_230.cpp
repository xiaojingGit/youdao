// 230
// 石头剪子布，是一种猜拳游戏。起源于中国，然后传到日本、朝鲜等地，随着亚欧贸易的不断发展它传到了欧洲，到了近现代逐渐风靡世界。
// 简单明了的规则，使得石头剪子布没有任何规则漏洞可钻，单次玩法比拼运气，多回合玩法比拼心理博弈，使得石头剪子布这个古老的游戏同时
// 用于“意外”与“技术”两种特性，深受世界人民喜爱。 游戏规则：石头打剪刀，布包石头，剪刀剪布。 现在，需要你写一个程序来
// 判断石头剪子布游戏的结果。 （提示：Rock是石头，Scissors是剪刀，Paper是布。）

// 输入格式
// 输入包括N+1行：
// 第一行是一个整数N，表示一共进行了N次游戏。1 <= N <= 100。
// 接下来N行的每一行包括两个字符串，表示游戏参与者Player1，Player2的选择（石头、剪子或者是布）：
// S1 S2
// 字符串之间以空格隔开S1,S2只可能取值在{"Rock", "Scissors", "Paper"}（大小写敏感）中。
// 输入样例
// 3
// Rock Scissors
// Paper Paper
// Rock Paper

// 输出格式
// 输出包括N行，每一行对应一个胜利者（Player1或者Player2），或者游戏出现平局，则输出Tie。
// 输出样例
// Player1
// Tie
// Player2

//               Rock(石头)        Scissors(剪刀)       Paper(布)
// Rock            Tie               Paper1             Paper2
// Scissors        Paper2            Tie                Paper1
// Paper           Paper1            Paper2             Tie


#include <iostream>
#include <string>
using namespace std;
int main() {
  int n, a1, a2;
  string arr[3][3] = {
    { "Tie", "Player1", "Player2" },
    { "Player2", "Tie", "Player1" },
    { "Player1", "Player2", "Tie" }
  };
  cin >> n;
  string s1, s2;
  for (int i = 0; i < n; i++) {
    cin >> s1 >> s2;
    if (s1 == "Rock") {
      a1 = 0;
    } else if (s1 == "Scissors") {
      a1 = 1;
    } else {
      a1 = 2;
    }
    if (s2 == "Rock") {
      a2 = 0;
    } else if (s2 == "Scissors") {
      a2 = 1;
    } else {
      a2 = 2;
    }
    cout << arr[a1][a2] << endl;
  }
  return 0;
}