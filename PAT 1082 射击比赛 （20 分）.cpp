


#include <iostream>
#include <string>
#include<cmath>
using namespace std;
int main(){
	int n, x, y;
	double max, min, r;
	max = 0;	//max求最大距离初始化为最小距离
	min = sqrt(20000);		//min求最小距离初始化为最大距离
	string id, maxid, minid;
	cin >> n;
	while (n--) {
		cin >> id >> x >> y;
		r = sqrt(x*x + y*y);		//两点间距离公式
		if (r > max) {
			maxid = id;
			max = r;
		}
		if (r < min) {
			minid = id;
			min = r;
		}
	}
	cout << minid << " " << maxid << endl;
	return 0;
}