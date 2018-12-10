


#include<iostream>
#include<cmath>
using namespace std;
#define min 0.01
int main(){
	double A = 0, B = 0;
	double R1, P1, R2, P2;
	double a, ai, b, bi;
	cin >> R1 >> P1 >> R2 >> P2;
	a = R1 * cos(P1);
	ai = R1 * sin(P1);
	b = R2 * cos(P2);
	bi = R2 * sin(P2);
	A = a * b - ai * bi;
	B = a * bi + ai * b;
	if (abs(A) < min) A = 0;
	if (abs(B) < min) B = 0;
	printf("%0.2lf", A);
	if (B >= 0) printf("+%0.2lfi", B);
	else
		printf("%0.2lfi", B);
	return 0;
}
//进行浮点运算，最后小于0.01是全dang当为0（测试点2 、3）。