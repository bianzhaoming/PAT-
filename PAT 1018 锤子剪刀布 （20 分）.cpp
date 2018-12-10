


#include <iostream>
#include <string>
#include<string.h>
#include<algorithm>
using namespace std;
int pd(string m) {
	if (m == "C J" || m == "J B" || m == "B C")
		return 1;
	return 0;
}
int main()
{
	char k[3] = { 'B','C','J' };
	//freopen("in.txt", "r", stdin);
	int n;
	int result[3] = { 0 };        //3个元素记录甲的胜、平、负
	cin >> n;
	string m;
	int A[3] = { 0 }, B[3] = { 0 };
	getchar();    //清除缓存
	while (n--) {
		getline(cin, m);
		if (m[0] == m[2]) //平局
			result[1]++;
		else {
			if (pd(m)) {    
				result[0]++;
				A[strchr(k, m[0])-k]++;        //在k中搜索得到地址减去首地址用作下标
			}
			else {
				result[2]++;
				B[strchr(k, m[2]) - k]++;
			}
		}
	}
	cout << result[0] << " " << result[1] << " " << result[2] << endl;
	cout << result[2] << " " << result[1] << " " << result[0] << endl;
	cout << k[max_element(A, A + 3)-A] << " " << k[max_element(B, B + 3)-B];
 
	return 0;
}
--------------------- 
作者：Italink 
来源：CSDN 
原文：https://blog.csdn.net/qq_40946921/article/details/81120810 
版权声明：本文为博主原创文章，转载请附上博文链接！