//45499. 蓝桥勇士 (LIS最长递增子序列)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    int N; cin>>N;
    vector<ll>a(N+1);
    for(int i=1;i<=N;i++) cin>>a[i];
    vector<ll>f(N+1,1);
    for(int i=1;i<=N;i++){
        for(int j=1;j<i;j++){
            if(a[i]>a[j]) f[i]=max(f[j]+1,f[i]);
//因为一个i对应多个j，要选最好的j， 所以每次和当前的f[i]比，留大的
        }
    }
//对有效区间[1,N]的元素找最大值
    ll ans=*max_element(f.begin()+1,f.end());
    cout<<ans<<endl;
    return 0;
}
// LIS问题(最长递增子序列)：
// 核心状态方程：f[i]=max(f[j]+1,f[i])，有j<i且a[j]<a[i]
// 理解:令f[i]=以ai结尾的最长子序列的长度
// eg： 1 4 3 2 5 6
// f[i] 1 2 2 2 3 
// f[6]=max(f[1],f[2]..f[5])+1
// f[1]=1