


#include <iostream>
#include <cctype>//字符判别函数
using namespace std;
int main() {
  string A,B;
  getline(cin, A);  //为了防止第一行是空的，不能用cin >> ,用getline(cin, ...)
  getline(cin, B);
  int len=B.length();
  for (int i = 0; i < len; i++) {
    if (A.find(toupper(B[i])) != string::npos) continue;
    if (isupper(B[i]) && A.find('+') != string::npos) continue;
    cout << B[i];
  }
  return 0;
}
//isupper 判断C是否为大写字母 toupper 转换成大写字母

