


#include <iostream>
#include<cstring>
#include <algorithm>
using namespace std;
bool cmp(char a, char b) {return a > b;}
int main() {
    string s;
    cin >> s;
    s.insert(0, 4 - s.length(), '0');//用来给不足4位的时候前面补0
    do {
        string a = s, b = s;
        sort(a.begin(), a.end(), cmp);//递减
        sort(b.begin(), b.end());//递增
        int result = stoi(a) - stoi(b);//stoi（字符串，起始位置，2~32进制），将n进制的字符串转化为十进制。
        s = to_string(result);
        s.insert(0, 4 - s.length(), '0');
        cout << a << " - " << b << " = " << s << endl;
    } while (s != "6174" && s != "0000");
    return 0;
}
