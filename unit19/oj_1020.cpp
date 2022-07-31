// 1020
// 某次科研调查时得到了n个自然数，每个数均不超过1500000000（1.5*10^9）。已知不相同的数不超过10000个，
// 现在需要统计这些自然数各自出现的次数，并按照自然数从小到大的顺序输出统计结果。

// 输入格式
// 包含n+1行:第一行是整数n，表示自然数的个数；第2~n+1每行一个自然数。40%的数据满足：1<=n<=1000；80%的数据满足：1<=n<=50000；100%的数据满足：1<=n<=200000，每个数均不超过1500 000 000（1.5*10^9）。
// 输入样例
// 8
// 2
// 4
// 2
// 4
// 5
// 100
// 2
// 100

// 输出格式
// 包含m行（m为n个自然数中不相同数的个数），按照自然数从小到大的顺序输出。每行输出两个整数，分别是自然数和该数出现的次数，其间用一个空格隔开。
// 输出样例
// 2 3
// 4 2
// 5 1
// 100 2

#include<iostream>
#include<map>
using namespace std;
 
int main()
{
	long n;
	cin >> n;
	long m;
	map<long, long> number_count;
	while (n--&&cin >> m)
	{
		++number_count[m];//对map类型进行下标操作时，如果m还未在map中，下标运算符会创建一个新元素，其关键字为m，值为0，再执行其他操作（如这里的++运算）
	}
	for (auto map_it = number_count.begin(); map_it != number_count.end(); ++map_it)//当使用一个迭代器遍历一个map等关联容器时，迭代器按关键字升序遍历元素
	{
		cout << map_it->first << ' ' << map_it->second << endl;
	}
	return 0;
}

// #include<iostream>
// #include<map>
// #include<algorithm>
// using namespace std;

// map<long long,int> mp; //用一个map数组记录，且不用将mp初始化为0，因为系统自动初始化为0；注意要头文件map
// map<long long,int> vis; //用来记录
// int n ;
// long long int a[200005];
// int main1() {
//   cin >> n; 
//   for(int i = 1 ; i <= n ;i++) {
//     cin >> a[i];
//     mp[a[i]]++; //将重复的数字记录下来，计算一下相同的a[i]有几个；
//   }
//   if (n == 1) {
//     cout << a[1] << " " << 1;
//     return 0;
//   }
//   sort(a,a+n);  //排序，注意要头文件  algorithm
//   for(int i = 1;i <= n;i++) {
//     if(mp[a[i]] !=0 && vis[a[i]] == 0) {   //如果mp[a[i]]！=0，且a[i]不相同，没被访问过
//       cout << a[i] << " " << mp[a[i]] << endl;
//       vis[a[i]] = 1;  //将输出的a[i]记录下来，记录它已访问过了；
//     }
//   }
//   return 0; 
// }