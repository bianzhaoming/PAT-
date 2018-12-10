


#include <iostream>
using namespace std;
int main() {
    int m, n, a, b, replace, temp;
    scanf("%d%d%d%d%d", &m, &n, &a, &b, &replace);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &temp);
            if (temp >= a && temp <= b)
                temp = replace;
            if (j != 0) printf(" ");
            printf("%03d", temp);//0md,不足m位，前面用0补齐
        }
        printf("\n");
    }
    return 0;
}
