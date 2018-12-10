

#include <iostream>
#include <map>
using namespace std;
int main() {
    int m, n, s;//总量 中奖间隔 第一位序号
    cin>>m>>n>>s;
    string str;
    map<string, int> mp;//map用于判断改昵称是否已经获奖
    bool flag = false;
    for (int i = 1; i <= m; i++) {
        cin >> str;
        if (mp[str] == 1)//当前中奖位置的网友已经中过奖，则跳过他顺次取下一位
        s = s + 1;
        if (i == s && mp[str] == 0) {//中奖人第一次中奖,
            mp[str] = 1;
            cout << str << endl;
            flag = true;
            s = s + n;
        }
       
    }
    if (flag == false) cout << "Keep going...";
    return 0;
}

