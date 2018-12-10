
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {//二分查找
    int n,v[100010];
    long long p;
    cin>>n>>p;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v,v+n);
    int ans=1;
    for(int i=0;i<n;i++){
      int j=upper_bound(v+i+1,v+n,v[i]*p)-v;//第一个超过  的数 first last value
      ans=max(ans,j-i);
    }
    cout<<ans;
    return 0;
}
