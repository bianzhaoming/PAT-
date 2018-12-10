



#include<iostream>
#include<vector>
using namespace std;
int judge(vector<int> key, vector<int> wolf, int length) {
	int error_count = 0;     //假话数
	int wolf_count = 0;      //说假话的狼人数
	for (int i = 0; i < length; i++) {
		if (wolf[abs(key[i]) - 1] * key[i] < 0) {   //异号为负，说明说谎
			if (wolf[i] == -1)
				wolf_count++;
			error_count++;
		}
	}
	if (error_count == 2 && wolf_count == 1)   //2个人说谎，且其中有一个是狼人
		return 1;
	return 0;
}
int main() {
	vector<int> key;
	int n, t;
	cin >> n;
	key.resize(n);
	for (int i = 0; i < n; i++)
		cin >> key[i];
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			vector<int> wolf(n, 1);
			wolf[i] = wolf[j] = -1;
			if (judge(key, wolf, n)) {
				cout << i + 1 << " " << j + 1 << endl;  //找到狼人，输出，结束程序
				return 0;
			}
		}
	}
 	cout << "No Solution";
	return 0;
}