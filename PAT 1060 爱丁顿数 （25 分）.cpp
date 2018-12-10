


#include<iostream>
#include<set>
using namespace std;
int main() {
	multiset<int, greater<int>> s;   //降序排列
	int n, t;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> t;
		s.insert(t);//插入 排序
	}
	int max = 0,count = 1;    //记录天数
	for (auto it = s.begin(); it != s.end(); count++, it++) {
		if (*it > count)
			max = count > max ? count : max;  //找最大E
	}
	cout << max;
	return 0;
}
//将得到的天数输入进multiset容器中降序排列，只需比较天数与汽车距离（骑车距离>天数：说明是一个爱丁顿数），
//然后输出最大E即可。
   //注意：1、当出现非爱丁顿数时，并不意味着后面的数不是爱丁顿数。
        // 2、尽量降低时间复杂度。（测试点3）
