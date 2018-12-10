


#include <iostream>
#include <string>
using namespace std;
// 流程：输入--判断回文（是则输出）---否：倒叙相加--判断回文--倒叙相加--判断回文.……
string add(string a, string b)//把两个字符串相加 
{
	int up = 0, sum;		//up储存进位
	string c;
	for (int i = a.size() - 1; i >= 0; i--) {   //从末尾开始相加
		sum = a[i] - '0' + b[i] - '0' + up;
		up = sum / 10;
		sum %= 10;
		c = (char)(sum + '0') + c;		//注意顺序有区别，如果c在前输出的是反序，需要再颠倒一次顺序
	}
	if (up > 0)
		c = (char)(up + '0') + c;
	return c;
}
int judge(string m) {   //判断回文
	for (int i = 0; i <= m.length() / 2; i++) {
		if (m[i] != m[m.length() - 1 - i])
			return 0;
	}
	return 1;//是回文
}
int main()
{
	string m;
	cin >> m;
	string a, b;
	for (int i = 0; i<10; i++) {
     //注意：1、有可能第一次输入就为回文，所以判断语句应该在前面。
		if (judge(m)) {
			cout << m << " is a palindromic number." << endl;
			return 0;
		}
		a = m;
	  b = m.assign(m.rbegin(), m.rend());//赋值 
	  //c.rbegin() 返回一个逆序迭代器，它指向容器c的最后一个元素
    //c.rend() 返回一个逆序迭代器，它指向容器c的第一个元素前面的位置
		m = add(a,b);
		cout << a << " + " << b << " = " << m << endl;
	}
	cout << "Not found in 10 iterations.";
	return 0;
}