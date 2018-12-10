

#include<iostream>
#include<string>
using namespace std;
int main() {
	string password,str;
	int n, count = 0;
	cin >> password >> n;
  getchar();//
	while (n--) {
		getline(cin, str);
		if (str == "#")  //接收到#，退出程序
			return 0;
		else if (str == password) {   //密码正确，退出程序
			cout << "Welcome in" << endl;
			return 0;
		}
		else
				cout << "Wrong password: " << str << endl;
	}
	cout << "Account locked" << endl;
	return 0;
}
