



#include <iostream>
#include<cstring>
#include<cstdio>
using namespace std;

int main() {
  char s1[70],s2[70],s3[70],s4[70];
  char week[7][4]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
  cin>>s1>>s2>>s3>>s4;
  int i,len1,len2,len3,len4;
  len1=strlen(s1);
  len2=strlen(s2);
  len3=strlen(s3);
  len4=strlen(s4);
  // 📅 
  
  for(i=0;i<len1&&i<len2;i++){
    if(s1[i]==s2[i]&&s1[i]>='A'&&s1[i]<='G'){
    printf("%s ",week[s1[i]-'A']);
    break;
    }
  }//小时 
  for(i=i+1;i<len1&&i<len2;i++){
    if(s1[i]==s2[i]){
      if(s1[i]>='0'&&s1[i]<='9'){
        printf("%02d:",s1[i]-'0');
        break;
      }else if(s1[i]>='A'&&s1[i]<='N'){
        printf("%02d:",s1[i]-'A'+10);
        break;
      }
    }
  }//分钟 
  for(i=0;i<len3&&i<len4;i++){
    if(s3[i]==s4[i]){
      if((s3[i]>='A'&&s3[i]<='Z')||(s3[i]>='a'&&s3[i]<='z')) 
      {
        printf("%02d",i);
        break;
      }
    }
  }
	return 0;
}