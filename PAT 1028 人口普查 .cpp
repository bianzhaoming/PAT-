


#include <iostream>
#include<algorithm>//
#include<cstdio>
using namespace std;
struct person{
  char name[10];
  int year,month,day;
}old,young,l,r,temp;//l 左端 r 右端 

bool cmp(person a,person b){//从小到大排列 
  if(a.year!=b.year) return a.year<=b.year;
  else if(a.month!=b.month) return a.month<=b.month;
  else return a.day<=b.day;
}

void inti(){//初始化 
  l.year=young.year=1814;
  r.year=old.year=2014;
  l.month=r.month=young.month=old.month=9;
  l.day=r.day=young.day=old.day=6;
}
int main() {
  inti();
  int n,num=0;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>temp.name;
    scanf("%d/%d/%d",&temp.year, &temp.month, &temp.day);
    if(cmp(l,temp)&&cmp(temp,r)){
      num++;
      if(cmp(temp,old)) old=temp;
      if(cmp(young,temp)) young=temp;
    }
    
  } 
  if(num==0) cout<<0<<endl;
    else cout<<num<<' '<<old.name<<' '<<young.name<<endl;
	return 0;
}

