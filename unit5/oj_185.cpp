// 185
// 利用公式x1 = (-b + sqrt(b*b-4*a*c))/(2*a), x2 = (-b - sqrt(b*b-4*a*c))/(2*a)求一元二次方程ax^2+ bx + c =0的根，
// 其中a不等于0。

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double a, b, c;

	cin >> a >> b >> c;

	double x1 = (-b + sqrt(b * b-4 * a * c))/(2 * a);
	double x2 = (-b - sqrt(b * b-4 * a * c))/(2 * a);

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << x1 << endl;
	cout << x2 << endl;

	return 0;
}