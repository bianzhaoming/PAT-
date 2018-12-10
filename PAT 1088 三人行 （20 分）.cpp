


#include<iostream>
#include<string>
#include<cmath>
using namespace std;
string judge(double T,double M){
	if(T>M)   return "Cong";
	else if (T==M)   return "Ping";
	else   return "Gai";
	}
int main(){
	int M,X,Y,A,B,flag=0;
	double C;
	cin>>M>>X>>Y;
	for(A=99;A>=10;A--){
		B=A%10*10+A/10;
		C=(double)abs(A-B)/X;
		if(B==C*Y){
			flag=1;
			break;
			}
		}
	if(flag){
		cout<<A<<" "<<judge(A,M)<<" "<<judge(B,M)<<" "<<judge(C,M);
		}
	else
	    cout<<"No Solution";
	}
