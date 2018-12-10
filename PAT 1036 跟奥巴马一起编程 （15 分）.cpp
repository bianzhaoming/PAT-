



#include<iostream>
using namespace std;
int main()
{
  int n;
  char c;
  cin>>n>>c;
  //行 四舍五入法 
  int row=n/2+n%2;
  //输出第一行 
  for(int i=0;i<n;i++)
    cout<<c;
  cout<<endl;
  //输出 2——row-1行
  for(int i=2;i<row;i++){
    cout<<c;//第一个字符 
    for(int j=0;j<n-2;j++)
    cout<<" ";//中间的空格 
    cout<<c<<endl;//最后一个字符及空格 
  }
  //row hang 
  for(int i=0;i<n;i++)
    cout<<c;
  return 0;
}