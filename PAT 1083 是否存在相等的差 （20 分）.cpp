


#include <iostream>
#include<map>
using namespace std;
int main(){
	map<int, int, greater<int>> map;//第三个参数compare（默认为less<int>），此时我们需要降序
	int n, t;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> t;
		map[abs(t - i)]++;		//取绝对值加到map中
	}
	for (auto it = map.begin(); it != map.end(); it++)
		if(it->second>1)		//注意要重复次数大于1才输出
			cout << it->first << " " << it->second << endl;
	return 0;
}

