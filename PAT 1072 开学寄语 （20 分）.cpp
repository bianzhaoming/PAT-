



#include<iostream>
#include<string>
#include<map>
using namespace std;
int main() {
	map<string, int> map;		//用于判断是否属于查缴物品
	string str, name, th[6];        //th存放查缴物品编号
	int count;				//查缴物品计数器
	int n, m, k;
	int people = 0, sum = 0;
	cin >> n >> m;//学生人数 物品种类数
	for (int i = 0; i < m; i++) {
		cin >> str;//需要被查缴的物品编号 2333 6666
		map[str]++;
	}
	for (int i = 0; i < n; i++) {
		cin >> name >> k;//个人物品数量
		count = 0;
		for (int j = 0; j < k; j++) {
			cin >> str;
			if (map[str] > 0) {
				th[count++] = str;
				sum++;
			}
		}
		if (count) {
			cout << name << ":";
			for (int l = 0; l < count; l++)
				cout <<" "<< th[l];
			cout << endl;
			people++;
		}
	}
	cout << people << " " << sum;
	return 0;
}