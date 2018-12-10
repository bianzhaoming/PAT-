



#include<iostream>
using namespace std;
int main()
{
	int a[3], b[3], c[3];
	char ch;
	cin >> a[0] >>ch>> a[1] >>ch>> a[2] >> b[0] >>ch>> b[1] >>ch>> b[2];
	int ka, kb, res;
	ka = (a[0] * 17 + a[1]) * 29 + a[2];
	kb = (b[0] * 17 + b[1]) * 29 + b[2];
	res = kb - ka;
	if (res < 0) {
		res = -res;
		ch = '-';
	}
	c[0] = res / 29 / 17;
	c[1] = res / 29 % 17;
	c[2] = res % 29;
	if (ch == '-')
		cout << ch;
	cout << c[0] << "." << c[1] << "." << c[2];
	return 0;
}