



#include <iostream>
#include <algorithm>
#include <vector>
int a[100000], b[100000], v[100000];
using namespace std;
int main() {
    int n, max = 0, cnt = 0;
    cin>>n;
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        b[i] = a[i];
    }
    sort(a, a + n);//排序
    for (int i = 0; i < n; i++) {//     a[i] 1 2 3 4 5
        if(a[i] == b[i] && b[i] > max)//b[i] 1 3 2 4 5 原序列
            v[cnt++] = b[i];
        else if (b[i] > max)
            max = b[i];
    }
    printf("%d\n", cnt);
    for(int i = 0; i < cnt; i++) {
        if (i != 0) printf(" ");
        printf("%d", v[i]);
    }
    printf("\n");//不加这句会有一个测试点没法通过。.
    return 0;
}