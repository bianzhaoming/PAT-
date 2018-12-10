

#include<cstdio>
#include<iostream>
using namespace std;
const int maxn=100010;
int sum[maxn]={0};//初始化 记录每个 学校总分 
int main()
{
  int n,id,score;
  cin>>n;
  for(int i=0;i<n;i++)
  {
  cin>>id>>score;
  sum[id]+=score;
  }
  int max=sum[1],t=1;//假设编号是 一 的学校总分最高 
  for(int i=2;i<=n;i++)
  {
    if(max<sum[i]){
      max=sum[i];
      t=i;
    }
  }
  cout<<t<<" "<<max<<endl;
  return 0;
  
}
