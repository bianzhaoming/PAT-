

#include <iostream>
#include <cctype>
#include <string>
using namespace std;
int main() {
    string s;
    getline(cin, s);
    int a[26] = {0};//各个小写字母出现次数
    for (int i = 0; i < s.length(); i++)
        s[i] = tolower(s[i]);//转换成小写字母
    for (int i = 0; i < s.length(); i++)
        if (islower(s[i])) a[s[i] - 'a']++;
    int t = 0;
    for (int i = 0; i < 26; i++) //记录数组中最大的元素下标
        if (a[i] > a[t]) t = i;
    
    printf("%c %d", t + 'a', a[t]);
    return 0;
}
