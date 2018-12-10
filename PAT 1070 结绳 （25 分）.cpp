


#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int list[10000];
	int n;
	cin >> n;
	for (int i = 0; i<n; i++) 
		cin >> list[i];//绳子长度
	sort(list, list + n);
	double sum = list[0];
	for (int i=1; i<n; i++) 
		sum = (sum + list[i]) / 2;
	cout << (int)sum;
	return 0;
}
//每次取最短的两根数字对折 ，就能够得到绳子的最大长度，我们首先对绳子的长度进行排序，
//取最短的两根绳子，对折，对折后的长度一定不会超过这两根绳子的最大长度，所有不需要担心打乱顺序。
//只需要一次排序就行。

//如果两个绳子合为一条绳子后，那么下一次是利用该条串连好的绳子（作为整体）与新一条绳子继续串连，而不是由初始的两条绳子的左右两端同时向外串连。
//这样的话，计算起来很简单，每次把需要串连的绳子长度和之前的绳长加一起再除以2即可。
//为了保证最大长度，需要从小加到大，因为先加的绳长被除以2的次数更多，所以需要把输入的数组从小到大排序。


