
#include<iostream>
using namespace std;
int main() {
	int m, n;
	cin >> n >> m;
	m %= n;   //这里取余后只要移动一个周期
	int *a = new int[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	int t = n - m;
	for (int i = 0; i < n; i++) {
		cout << a[t++%n];
		if (i != n - 1)
			cout << " ";
	}
	return 0;
}

