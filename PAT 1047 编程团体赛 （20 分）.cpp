


#include <iostream>
using namespace std;
int main() {
    int n, t, num, score;
    cin >> n;
    int team[1001] = {0};//散列
    for (int i = 1; i <= n; i++) {
        scanf("%d-%d %d", &t, &num, &score);//队伍编号 队员编号 得分
        team[t] += score;
    }
    int max = 0;
    for (int i = 0; i < 1001; i++) {//最大下标
        if (team[max] < team[i])
            max = i;
    }
    cout << max << " " << team[max];
    return 0;
}
