// 278
// 目前正是甲流盛行时期，为了更好地进行分流治疗，医院在挂号时要求对病人的体温和咳嗽情况进行检查，
// 对于体温超过37.5度（含等于37.5度）并且咳嗽的病人初步判定为甲流病人（初筛）。
// 现需要统计某天前来挂号就诊的病人中有多少人被初筛为甲流病人。

#include <iostream>
using namespace std;

int main() {
	int n, count = 0, kesou;
	double tiwen;
	char name[9];
	string names[200];


	cin >> n;

	for (int i = 0; i < n; i++) {
		scanf("%s %lf %d", name, &tiwen, &kesou);
		if (tiwen >= 37.5 && kesou) {
			names[count++] = name;
		}
	}

	for (int i = 0; i < count; i++) {
		cout << names[i] << endl;
	}
	cout << count;
	return 0;
}