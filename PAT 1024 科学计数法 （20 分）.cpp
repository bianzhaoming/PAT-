


#include <iostream>
#include<cstring>
#include<cstdio>
using namespace std;

int main() {
  char str[10000];
  scanf("%s",str);
  int len=strlen(str);
  if(str[0]=='-') printf("-");
  int pos=0;//存放E的 位置 
  while(str[pos]!='E') pos++;
  //指数 
  int exp=0;
  for(int i=pos+2;i<len;i++)
    exp=exp*10+(str[i]-'0');
  if(exp==0){//指数为零 
    for(int i=1;i<pos;i++) printf("%c",str[i]);
  }  
  if(str[pos+1]=='-')//指数为负 
  {
    printf("0.");
    for(int i=0;i<exp-1;i++) printf("0");
    printf("%c",str[1]);
    for(int i=3;i<pos;i++) printf("%c",str[i]);
  }
  else//指数为正 
  {
    for(int i=1;i<pos;i++){//输出移动后的数 
      if(str[i]=='.') continue;//跳过原小数点 
      printf("%c",str[i]);
      if(i==exp+2&&pos-3!=exp) printf(".");
    }
    for(int i=0;i<exp-(pos-3);i++) printf("0");//输出多余的 0
  }
	return 0;
}

