
#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
	map<string, pair<string,int>> s, res;     //s用于判断是否单身
	map<string, pair<string,int>>::iterator it;
	int n, m, count = 0;
	string r, l;
	cin >> n;
	while (n--) {
		cin >> l >> r;
		s[l].first = r;		//存入伴侣信息
		s[r].first = l;
	}
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> l;
		s[l].second++;
	}
	for (it = s.begin(); it != s.end(); it++) {
		if (it->second.second && !s[it->second.first].second) {  //逻辑判断：自己出席了会议，伴侣没有
			count++;               //记录单身狗数目
			res[it->first].second++;    //将符合条件的人存到res中
		}
	}
	cout << count << endl;
	if (count) {        //注意count为0时，就不用输出ID了，否则测试点2出现段错误、运行超时
		it = res.begin();
		cout << it++->first;
		for (; it != res.end(); it++) {
			cout << " " << it->first;//这样能输出空格
		}
	}
	return 0;
}