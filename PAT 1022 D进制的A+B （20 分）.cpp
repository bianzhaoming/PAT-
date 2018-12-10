


#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
  int a,b,d;
  cin>>a>>b>>d;
  int sum=a+b;
  int ans[31],num=0;//ans 存放D进制的每一位 。num是位数 
  
  do{ //进制转换 除基取余 
    ans[num++]=sum%d;
    sum/=d;
  }while(sum!=0);
  for(int i=num-1;i>=0;i--) cout<<ans[i];
  return 0;
}