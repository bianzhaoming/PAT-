


#include<cstdio>
#include <iostream>
using namespace std;

int main()
{
	int num[10];
	int i;
	for(i=0;i<10;i++)
	{
		scanf("%d",&num[i]);
    }
	for(i=1;i<10;i++)
	{
		if(num[i]>0)
		{
			printf("%d",i); 
			num[i]--;
			break;
		}
	}
	for(i=0;i<10;i++)
	{
		while(num[i]--)
		{
			printf("%d",i); 
		}
	}return 0;
}
