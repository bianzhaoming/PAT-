


#include<iostream>
#include<string>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	string str = to_string(a*b);
	cout << stoi(string(str.rbegin(), str.rend()));  //数字倒叙输出
	return 0;
}//最后输出的是数字，需要去除字符前的0