


#include <iostream>
#include <vector>
using namespace std;
bool isprime(int a) {//判断素数
    for (int i = 2; i * i <= a; i++)
        if(a % i == 0) return false;
    return true;
}
int main() {
    int M, N, num = 2, cnt = 0;
    cin >> M >> N;//5 27
    vector<int> v;
    while (cnt < N) {//cnt 从0开始，最多为26
        if (isprime(num)) {
            cnt++;//先把cnt值作为表达式的值，然后将cnt的值+1
            if (cnt >= M) 
            v.push_back(num);//容器尾部插入元素num
        }
        num++;
    }
    cnt = 0;
    for (int i = 0; i < v.size(); i++) {
        cnt++;
        if (cnt % 10 != 1) printf(" ");
        printf("%d", v[i]);
        if (cnt % 10 == 0) printf("\n");
    }
    return 0;
}
