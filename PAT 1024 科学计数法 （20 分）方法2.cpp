
#include <iostream>
#include <string>
#include<string.h>
using namespace std;
int main(){
	string a, res;
	cin >> a;
	int k = 0;
	char ch = a[0];
	int flag = 0;
	while (a[k] != 'E') {            //记录有效数字
		if (strchr("+0.-", a[k]) == NULL)
			flag = 1;
		if (isdigit(a[k]) && flag) 
			res += a[k];
		k++;
	}
	int l = a.substr(a.find('.'), a.find('E')).length() - 3;   //记录小数位数
	int c = stoi(a.substr(a.find('E') + 1, a.length()));        //记录指数
	k = c - l;
	if (k < 0) {
		while (res.length() < abs(k))     //小数位补0
			res = '0' + res;
		res.insert(res.end() + k, '.');        //插入小数点
		if (res[0] == '.')                //若是小数之前还需补0
			res = '0' + res;
	}
	else {
		while (k--)            //整数末尾补0
			res += '0';
	}
	if (ch == '-')            //如果是负数还需补负号，切记正数不用
		res = ch + res;
	cout << res;
	return 0;
}
