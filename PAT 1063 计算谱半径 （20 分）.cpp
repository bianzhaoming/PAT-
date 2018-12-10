


#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n;
	double max=0,a,b;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		double temp= sqrt(a*a+b*b);
		if(max<temp) max=temp;
	} 
	printf("%.2f",max);
	return 0;
}