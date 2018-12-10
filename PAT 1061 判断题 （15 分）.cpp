

#include<iostream>
using namespace std;
int pd[100];   
int kd[100];   
int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++)
		cin >> kd[i];//存储分数
	for (int i = 0; i < m; i++)
		cin >> pd[i];//存储正确答案
	int t;
	while (n--) {
		int mark = 0;
		for (int i = 0; i < m; i++) {
			cin >> t;    
			if (t == pd[i])
				mark += kd[i];
		}
		cout << mark << endl;
	}
	return 0;
}