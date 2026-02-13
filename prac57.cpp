//44711. 求和
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    int n; cin>>n;
    vector<int>a(n+1);
    vector<ll>sum(n+1,0);
    for(int i=1;i<=n;i++){
         cin>>a[i];
        sum[i]=sum[i-1]+a[i];
    }
    ll ans=0;
    for(int i=1;i<n;i++){
        ans+=a[i]*(sum[n]-sum[i]);
    }
    cout<<ans;
    return 0;
}
// 1*3+1*6+1*9->1*(1+3+6+9-1)
// +3*6+3*9->3(3+6+9-3)
// 1.求前缀和
// 2.公式:a[i]*(sum[n]-sum[i])