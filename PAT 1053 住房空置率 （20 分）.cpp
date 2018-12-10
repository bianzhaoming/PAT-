

#include <stdio.h>
int main()
{
    int N, D, K;
    int empty = 0, pempty = 0, lower;
    float e, E;
    scanf("%d %f %d", &N, &e, &D);
    for(int i = 0; i < N; i++)
    {
        lower = 0;
        scanf("%d", &K);//观察天数
        for(int j = 0; j < K; j++)
        {
            scanf("%f", &E);//每天用电量
            if(E < e)   lower++;
        }
        if(lower > K / 2 && K > D)  empty++;
        else if(lower > K / 2)      pempty++;   
    }
    printf("%.1f%% %.1f%%", 100.0 * pempty / N, 100.0 * empty / N);
    return 0;
}

//注意使用的数据类型，保证计算过程不会出错，注意百分号，并且可能可能空置不包含空置，两者互斥。
 // 输出用printf要对%进行转义(%%)