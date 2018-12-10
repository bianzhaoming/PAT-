


#include<iostream>
#include<map>
#include<set>
#include<string>
using namespace std;
struct student {
	string id;		/这里的id方便在mutliset容器中输出
	int p = -1, m = -1, n = -1;
	int s = 0;    //s记录总评
};
struct cmp {     //定义结构体student的比较方式
	bool operator()(const student &a, const student &b) {
		if (a.s == b.s)
			return a.id < b.id;
		return a.s > b.s;
	}
};
int main() {
	int P, M, N;
	map<string, student> k;
	cin >> P >> M >> N;
	string id;
	int t;
	while (P--) {
		cin >> id >> t;
		k[id].p = t;
	}
	while (M--) {
		cin >> id >> t;
		k[id].m = t;
	}
	while (N--) {
		cin >> id >> t;
		k[id].n = t;
	}
	for (auto it = k.begin(); it != k.end();it++) {
		it->second.id = it->first;    //初始化id
		it->second.s = it->second.n;  //初始化总评
		if (it->second.m > it->second.n)
			it->second.s = (double)(it->second.m)*0.4 + (double)(it->second.n)*0.6 + 0.5;	//四舍五入计算总评
	}
	multiset<student, cmp> rk;    //利用mutliset自动排序
	for (auto it = k.begin(); it != k.end();it++) {
		if(it->second.s>=60&&it->second.p>=200)    //录入合格名单
			rk.insert(it->second);
	}
	for (auto it = rk.begin(); it != rk.end(); it++) {   //输出
		cout << it->id << " " << it->p << " " << it->m << " " << it->n << " " << it->s << endl;
	}
	return 0;
}

//由于录入信息要以学生id为key（关键字），避免还要写搜索算法，这里直接用map<id，结构体数据>，
//这样可以直接录入数据， 得到数据后我们需要对他进行筛选和排序，由于map不能直接以value进行排序，
//所以我们把这些结构体信息筛选进另一个容器multiset中进行排序，随后输出就行。

  //注意：1、排序以总评（s）为关键字，可能出现重复值，所以不用set而用multiset；
             //2、结构体中存放id是为了当从map到multiset中仍然保留id。
             //3、计算总评注意四舍五入。（测试点0）
             //4、排序时总评可能bing并列，要以学号递增（测试点3）
