

#include<cstdio>
#include <iostream>
using namespace std;

int main() {
  int c1,c2;
	cin>>c1>>c2;
	int T=(c2-c1+50)/100;
	// int 取整 为 向下 (整数的 四舍五入法   )
	printf("%02d:%02d:%02d", T/3600, T%3600/60, T%60);
	return 0;
}