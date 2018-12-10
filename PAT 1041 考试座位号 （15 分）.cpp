

#include<iostream>
#include<string>
using namespace std;
#define max 1001
struct num {
	string k;
	int s;
}num[max];
int main() {
	int a, b;
	string str;
	int n, m;
	cin >> n;
	while (n--) {
		cin >> str >> a >> b;
		num[a].k = str;
		num[a].s = b;
	}
	cin >> m;
	while (m--) {
		cin >> a;
		cout << num[a].k << " " << num[a].s << endl;
	}
	return 0;
}