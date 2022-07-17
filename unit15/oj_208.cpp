// 208
// 一个长度为n（n>0）的序列中存在“有趣的跳跃”当且仅当相邻元素的差的绝对值经过排序后正好是从1到(n-1)。
// 例如，1 4 2 3存在“有趣的跳跃”，因为差的绝对值分别为3,2,1。当然，任何只包含单个元素的序列一定存在“有趣的跳跃”。
// 你需要写一个程序判定给定序列是否存在“有趣的跳跃”。

// 输入格式
// 一行，第一个数是n（0 < n < 3000），为序列长度，接下来有n个整数，依次为序列中各元素，各元素的绝对值均不超过1,000,000,000。
// 输入样例
// 4 1 4 2 3

// 输出格式
// 一行，若该序列存在“有趣的跳跃”，输出"Jolly"，否则输出"Not jolly"。
// 输出样例
// Jolly

// 解题思路：
// • 准备1~n-1共n-1桶
// • 对于某个”相邻元素的差的绝对值”
// • 如果大于等于n超出范围，结束
// • 如果已经标记过，结束
// • 否则标记之
// • 若成功标记n-1桶，完成

#include <cmath>
#include <iostream>
#include <algorithm>
using namespace std;

// int main() {
//   int n;
//   cin>>n;
//   int a[3005];
//   for(int i=1;i<=n;i++) {
//     cin>>a[i];
//   }
//   //标记数组book，一开始设置为0，book[i]=0代表绝对值i没出现过
//   int book[3005]={0};
//   for(int i=1;i<=n-1;i++){
//     int num=a[i]-a[i+1];
//     if(num<0) {
//       num=-num;
//     }
//     if(num>n-1 || num==0){
//       cout<<"Not jolly";//绝对值超出范围
//       return 0;
//     } else {
//       if(book[num]==1){
//         cout<<"Not jolly";//绝对值只能出现一次
//         return 0;
//       } else {
//         book[num]=1;
//       }
//     }
//   }
//   cout<<"Jolly";
//   return 0;
// }

int main() {
  int n, arr[3001], absVals[3001] = {0};
  cin >> n;

  for (int i = 1; i <= n; i++) {
    cin >> arr[i];
  }
  // 开始标记1 到 n-1的桶
  // 这里可以不用担心某个桶没被标记过，比如 输入6 4 5 8 12 17 26，2桶未被标记，但是最后会出现差的绝对值等于n即6，也会输出Not jolly
  for (int i = 1; i < n; i++) {
    int num = abs(arr[i] - arr[i+1]);
    if (num > n - 1 || num == 0) {
      cout << "Not jolly";
      return 0;
    } else {
      if (absVals[num] == 1) {
        // 已经标记过（出现过这个绝对值）  注意单词的 大小写！！！！！！！！！！！！！！！
        cout << "Not jolly";
        return 0;
      } else {
        absVals[num] = 1;
      }
    }
  }
  cout << "Jolly";
  return 0;
}

int main1() {
  int n, arr[3001], absVals[3001], count=0, cha; // absVals绝对值数组，count：绝对值个数
  cin >> n;
  if (n == 1) {
    cout << "Jolly";
    return 0;
  }
  // 录入数据顺便计算相邻数据差的绝对值
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    if (i != 0) {
      cha = abs(arr[i] - arr[i-1]);
      // 测试点
      if (cha > n - 1 || cha == 0) {
        cout << "Not jolly";
        return 0;
      }
      absVals[count++] = cha;
    }
  }
  // 对差的绝对值进行排序
  sort(absVals, absVals+count);
  // 如果第一个数就大于1，则直接不满足
  if (absVals[0] > 1) {
    cout << "Not jolly";
    return 0;
  }
  int flag = 0;
  for (int i = 1; i < count; i++) {
    cha = absVals[i] - absVals[i-1];
    if (cha > 1) {
      flag = 1;
      break;
    }
  }
  if (!flag) {
    cout << "Jolly";
  } else {
    cout << "Not jolly";
  }
  return 0;
}