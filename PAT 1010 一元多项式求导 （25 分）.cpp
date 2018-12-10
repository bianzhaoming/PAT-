


#include <iostream>
using namespace std;
int main() {
    int k, e;
    int flag = 0;//判断条件 ——出现 0项 
    while (cin >> k >> e) {
        if (e!= 0) {
            if (flag == 1) cout << " ";//非零项 
            cout << k * e << " " << e - 1;
            flag = 1;
        }
    }
    if (flag == 0) cout << "0 0";
    return 0;
}//常数求导后是 0，即 e是 0 





