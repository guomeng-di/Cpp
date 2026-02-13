//44891. k倍区间
//优化:
//结论:如果两个数除以K的余数相同，那它们的差一定是K的倍数
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int N,K; cin>>N>>K;
    vector<int>Y(K,0);//余数 0~K-1
    Y[0]=1;
//sum[0]=0(前0个元素的和)
//区间[l, r]是 K 倍区间 
//↔ sum[r] % K == sum[l-1] % K
// 对于l=1的区间,对应的l-1=0
//所以需要满足：sum[r] % K == sum[0] % K → sum[r] % K == 0 % K → sum[r] % K == 0。
// 也就是说：只要某个 sum [r] 的余数是 0，那么区间 [1, r] 就是一个 K 倍区间
    vector<ll>sum(N+1,0);
    for(int i=1;i<=N;i++){
        int a; cin>>a;
        sum[i]=sum[i-1]+a;
        Y[sum[i]%K]++;
    } ll cnt=0;
    for(int i=0;i<K;i++){
        //假设有3个,C3 2 
        cnt+=(ll)Y[i]*(Y[i]-1)/2;
    }
    cout<<cnt;

    return 0;
}
//暴力:
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int N,K; cin>>N>>K;
    vector<int>A(N+1);
    vector<ll>sum(N+1,0);
    for(int i=1;i<=N;i++){
        cin>>A[i];
        sum[i]=sum[i-1]+A[i];
    } int cnt=0;
    for(int i=1;i<=N;i++){
        for(int j=i;j<=N;j++){
            if((sum[j]-sum[i-1])%K==0) cnt++;
        }
    }
    cout<<cnt;

    return 0;
}