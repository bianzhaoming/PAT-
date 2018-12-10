


#include <iostream>
using namespace std;
int main() {
    string select, want;
    cin >> select >> want;
    for (int i = 0; i < want.length(); i++) {
        for (int j = 0; j < select.length(); j++) {
            if (select[j] == want[i]) {
                want[i] = '#';
                select[j] = '#';
            }
        }
    }
    int cnt1 = 0, cnt2 = 0;//缺少 多余
    for (int i = 0; i < want.length(); i++)
        if (want[i] != '#') cnt1++;
    for (int i = 0; i < select.length(); i++)
        if (select[i] != '#') cnt2++;
    if (cnt1 != 0)
        cout << "No " << cnt1;//输出空格
    else
        cout << "Yes " << cnt2;
    return 0;
}
