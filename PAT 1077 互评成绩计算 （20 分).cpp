

#include<iostream>
using namespace std;
int main() {
	int number[101];
	int count/*有效分数个数*/;
	int sum/*其他组总评分*/, mark/*最后得分*/;
	int n, m, t, max, min, teacher/*老师评分*/;
	cin >> n >> m;//分组数 满分
	for (int i = 0; i < n; i++) {
		max=sum=count = 0;
		min = m+1;
		cin >> teacher;
		for (int j = 0; j < n-1; j++) {
			cin >> t;//其他组给的评分
			if (t >= 0 && t <= m) {
				max = t > max ? t : max;		//找最高分
				min = t < min ? t : min;        //找最低分
				sum += t;				//其他组评分累加
				count++;
			}
		}
		sum -= max + min;		//去掉最高分和最低分
		count -= 2;
		mark = (((double)sum / count + teacher) / 2 + 0.5);   //小技巧：double+0.5转为int就是四舍五入
		cout << mark << endl;
	}
	return 0;
}
