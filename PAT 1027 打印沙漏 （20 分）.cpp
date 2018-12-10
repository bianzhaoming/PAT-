

#include <stdio.h>
#include<math.h>
int main()
{
    char c;
    int N, M;
    scanf("%d %c", &N, &c);
    for(M = 1; 2 * M * M - 1 <= N; M++) ;//空语句
    M--;   /* determine the size */
    /* draw the sandglass */
    for(int i = 0; i < 2 * M - 1; i ++){
        for(int j = 0; j < M - 1 - abs(M - 1 - i); j++) putchar(' ');
        for(int j = 0; j < 2 * abs(M - 1 - i) + 1; j++) putchar(c);
        putchar('\n');
    }
    printf("%d", N - 2 * M * M + 1);
    
    return 0;
}
