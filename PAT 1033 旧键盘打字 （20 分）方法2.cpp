

#include<iostream>
#include<string>
using namespace std;
int main() {
	char ch;
	string s1, s2;
	getline(cin, s1); //为了防止第一行是空的，不能用cin >> ,用getline(cin, ...)
	while ((ch = getchar()) != '\n')
		if (s1.find(toupper(ch)) == string::npos && (s1.find('+') == string::npos|| !isupper(ch)))
			cout << ch;
	return 0;
}

//isupper 判断C是否为大写字母 toupper 转换成大写字母