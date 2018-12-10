
#include <iostream>
using namespace std;
int main() {
    int n, i = 0;
    cin >>n;
    int b[3] = {0};
    while (n!= 0) {
      b[i++] = n%10;//分离位数
      n = n/ 10;
      // b[0]=n%10; 个
      // b[1]=n/10%10; 十
      // b[2]=n/100;  百
    }
    for (int k = 0; k < b[2]; k++)
        cout << "B";
    for (int k = 0; k < b[1]; k++)
        cout << "S";
    for (int k = 0; k < b[0]; k++)
        cout << k + 1;
    return 0;
}