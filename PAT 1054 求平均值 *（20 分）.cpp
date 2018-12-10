

#include <iostream>
#include <cstdio>
#include <string.h>
using namespace std;
int main() {
    int n, cnt = 0;
    char a[50], b[50];
    double temp, sum = 0.0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        scanf("%s", a);
        sscanf(a, "%lf", &temp);//根据格式从字符串中提取数据。如从字符串中取出整数、浮点数和字符串等。
        sprintf(b, "%.2lf",temp);//将数字变量转换为字符串。
        int flag = 0;
        for(int j = 0; j < strlen(a); j++) {
            if(a[j] != b[j]) flag = 1;
        }
        if(flag || temp < -1000 || temp > 1000) {
            printf("ERROR: %s is not a legal number\n", a);
            continue;
        } else {
            sum += temp;
            cnt++;
        }
    }
    if(cnt == 1) 
        printf("The average of 1 number is %.2lf", sum);
    else if(cnt > 1) 
        printf("The average of %d numbers is %.2lf", cnt, sum / cnt);
    else 
        printf("The average of 0 numbers is Undefined");
    return 0;
}
