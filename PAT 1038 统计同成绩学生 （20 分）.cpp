

#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, k, temp;
    scanf("%d", &n);
    vector<int> b(101);
    for (int i = 0; i < n; i++) {
        scanf("%d", &temp);
        b[temp]++;//输入的数作为数组的下表。百分制成绩
    }
    scanf("%d", &k);
    for (int i = 0; i < k; i++) {
        scanf("%d", &temp);
        if (i != 0) printf(" ");
        printf("%d", b[temp]);
    }
    return 0;
}
