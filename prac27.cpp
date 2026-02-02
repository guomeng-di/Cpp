//48862. 最小化战斗力差距
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin>>n;
    vector<long long>w(n+1,0);
    for(int i=1;i<=n;i++) cin>>w[i];
    sort(w.begin(),w.end());
    for(int i=2;i<=n;i++){
        w[i-2]=w[i]-w[i-1];
    }
    long long x=*min_element(w.begin(),w.end());
    cout<<x;
    return 0;
}
// 数组序号0 1 2 3
// 战斗力    1 2 3
// 差值    1 1