
#include<cstdio>
int main()
{
  int cnt[5]={0};
  int ans[5]={0};
  int n,num;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
     scanf("%d",&num);
  //A1 
  if(num%5==0){
    if(num%2==0){
    ans[0]+=num;
    cnt[0]++;} 
  }else if(num%5==1){//A2
    if(cnt[1]%2==0)
    ans[1]+=num;
    else ans[1]-=num;
    cnt[1]++;
  }else if(num%5==2){//A3 
    //ans[2]+=num;
    cnt[2]++;
  }else if(num%5==3){//A4
    ans[3]+=num;
    cnt[3]++;
    
  }else if(num%5==4){//A5
    if(num>ans[4]) ans[4]=num;
    cnt[4]++;
  }
}
  if(cnt[0]==0) printf("N ");
  else printf("%d ",ans[0]);
  if(cnt[1]==0) printf("N ");
  else printf("%d ",ans[1]);
  if(cnt[2]==0) printf("N ");
  else printf("%d ",cnt[2]);
  if(cnt[3]==0) printf("N ");
  else printf("%.1f ",(double)ans[3]/cnt[3]);
  if(cnt[4]==0) printf("N");
  else printf("%d",ans[4]); 
  return 0;
}

