


#include<iostream>
#include<string>
using namespace std;
int main() {
	string str;
	int sum = 0, t;
	int a = 0, b = 0;
	getline(cin, str);
	for (int i = 0; i < str.length(); i++) {
		if (isalpha(str[i])) {
			sum += toupper(str[i]) - 'A' + 1;
		}
	}
	while (sum) {
		t = sum % 2;
		if (t)	a++;
		else 	b++;
		sum /= 2;
	}
	cout << b << " " << a;
	return 0;
}
//判断字母->进行累加->转化二进制并计数

//  注意：题目说以回车键结尾，所以用getline也可以用gets或者getchar间接实现。