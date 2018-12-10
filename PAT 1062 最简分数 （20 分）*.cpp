

#include <stdio.h>

int gcd(int a, int b)
{
    if(b==0) return a;
    else return gcd(b,a%b);
}
int main()
{
    int N1, N2, M1, M2, K, L, count = 0;
    scanf("%d/%d %d/%d %d", &N1, &M1, &N2, &M2, &K);
    if(N1 * M2 > N2 * M1)//比大小
    {
        L = N1, N1 = N2, N2 = L;
        L = M1, M1 = M2, M2 = L;
    }
    for(L = N1 * K / M1 + 1; N2 * K > M2 * L; L++)  
        if(gcd(L, K) == 1)
            printf("%s%d/%d", count++ ? " " : "", L, K);
    return 0;
}
//不能等于给出的两个分数，因为要求“两个数之间的”最简分数
//开始点：需要 L > K * N1 / M1 >= L - 1，由于C语言整型的“地板除”运算，一定有 K * N1 / M1 = L - 1，那么初始点就是 L = K * N1 / M1 + 1。这样不需要用循环来确定。
//结束点：要避免“地板除”带来的问题，使用 N2 * K > M2 * L 作为判断标准。
//一个坑就是给出的两个分数并没有指定谁大谁小
