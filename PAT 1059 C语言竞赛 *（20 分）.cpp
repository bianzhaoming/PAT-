


#include<iostream>
#include<string>
#include<cmath>
#include<map>
using namespace std;
struct m {
	string prize;		//存放奖品
	int key = 0;	//ID是否存在
};
map<string, m> ranking;
int isprime(int a) {
	for (int i = 2; i <= sqrt(a); i++)
		if (a%i == 0)
			return 0;
	return 1;
}
int main() {
	int n, flag;
	string str_id,str;
	cin >> n;//人数
	for (int i = 1; i <= n; i++) {
		cin >> str_id;
		ranking[str_id].key = 1;		//ID存在
		if (i == 1)
			ranking[str_id].prize = "Mystery Award";//第一名
		else if (isprime(i))
			ranking[str_id].prize = "Minion";//排名是素数
		else
			ranking[str_id].prize = "Chocolate";
	}
	cin >> n;//查询
	for (int i = 1; i <= n; i++) {
		cin >> str;
		if (ranking[str].key) {
			cout << str << ": " << ranking[str].prize << endl;
			ranking[str].prize = "Checked";
		}
		else
			cout << str << ": Are you kidding?" << endl;
	}
	return 0;
}