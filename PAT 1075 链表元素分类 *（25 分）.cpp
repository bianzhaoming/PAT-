


#include <bits/stdc++.h>
using namespace std;

const int maxn = 100000;
int first, N, K;
struct Node{
    int address;
    int date;
    int next;
};
Node n;
vector<Node> l;
vector<Node> ans;
Node add[maxn];
int main() {
    scanf("%d%d%d", &first, &N, &K);
    for(int i = 0; i < N; i ++) {
        scanf("%d%d%d", &n.address, &n.date, &n.next);
        add[n.address] = n;
    }
    while(first != -1) {
        l.push_back(add[first]);
        first = add[first].next;
    }
    int sz = l.size();
    for(int i = 0; i < sz; i ++) {
        if(l[i].date < 0)
            ans.push_back(l[i]);
    }
    for(int i = 0; i < sz; i ++) {
        if(l[i].date >= 0 && l[i].date <= K)
            ans.push_back(l[i]);
    }
    for(int i = 0; i < sz; i ++) {
        if(l[i].date > K)
            ans.push_back(l[i]);
    }
    for(int i = 0; i < sz; i ++) {
        ans[i].next = ans[i + 1].address;
        if(i != sz - 1)
            printf("%05d %d %05d\n", ans[i].address, ans[i].date, ans[i].next);
        else
            printf("%05d %d -1\n", ans[i].address, ans[i].date);
    }
    return 0;
}