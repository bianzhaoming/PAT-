


#include<cstdio>
int main()
{
  int T,t=1;
  scanf("%d",&T);
  //执行T次 循环 --T是T-1次循环
  while(T--)
  {
    long long a,b,c;//长长整型数 
    scanf("%lld%lld%lld",&a,&b,&c);
    if(a+b>c)
    printf("Case #%d: true\n",t++);
    else
    printf("Case #%d: false\n",t++);
  }
  return 0;
}