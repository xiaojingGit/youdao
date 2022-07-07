#include <iostream>
using namespace std;

int main() {
	int k, n=2;
	double sn = 1;
	cin >> k;
	while(sn <= k) {
		sn = sn + double(1) / n;
		if (sn <= k) {
			n++;
		}
	}
	cout << n;
	return 0;
}