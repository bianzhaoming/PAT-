

#include <iostream>
using namespace std;
int main() {
    string s;
    while (cin >> s) 
        if(s.size() == 3 && s[2] == 'T') cout << s[0]-'A'+1;
    return 0;
}
//不需要按按题分开来做，比如样例有8个题，即32个选项，只需要输出正确选项的序号就可以了 