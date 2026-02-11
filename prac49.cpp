//49118. 聪明的小羊肖恩 (二分)
#include <bits/stdc++.h>
using namespace std;
//如果ai+aj<=R的下标对数量为y,ai+aj<=L-1为x,则[L,R]有y-x个
typedef long long ll;
ll check(vector<ll>&a,ll n,ll R){
        ll left=0,right=n-1;
        ll ans=0;
    while(left<right){
        if(a[left]+a[right]>R) right--;
        else {
            ans+=right-left;
//左指针和右指针之间的所有元素都能和left组成有效对
            left++;
        }
    }
    return ans;
}
int main() {
// 输入加速：应对n=2e5的大数据，避免IO超时（关键！）
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n,L,R; cin>>n>>L>>R;
    vector<ll>a(n);
    for(ll i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    cout<<check(a,n,R)-check(a,n,L-1);
    return 0;
}