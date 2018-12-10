
#include <iostream>
#include <string>
#include<algorithm>
using namespace std;
int main()
{
	int m;
	string n;
	int k = 0,count = 0;
	while (cin >> m) {
		while (m--) 
			n +=k+'0';//整数0代表字符'\0'
		  k++;
	}
	sort(n.begin(), n.end());
	while (n[0] == '0') 
		swap(n[0], n[count++]);
	cout << n;
	return 0;
}
//将数字从小到大排序后，利用交换法，把第一个非0数换到首位，这样就能得到最小数字。
方法3
#include <iostream>
using namespace std;
int main() {
    int a[10], t;
    for (int i = 0; i < 10; i++)
        cin >> a[i];
    for (int i = 1; i < 10; i++) {
        if (a[i]>0) {
            cout << i;
            t = i;
            break;//找到一个就break
        }
    }
    for (int i = 0; i < a[0]; i++) cout << 0;
    for (int i = 0; i < a[t] - 1; i++) cout << t;
    for (int i = t + 1; i < 10; i++)
        for (int k = 0; k < a[i]; k++)
            cout << i;
    return 0;
}
