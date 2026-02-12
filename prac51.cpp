//49213. 对称排序
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check(ll a,ll b,ll c,ll d){
    if((a==c&&b==d)||(a==d&&b==c)) return 1;
    return 0;
}
int main() {
    int N; cin>>N;
    vector<ll>a(N+1),b(N+1);
    for(int i=1;i<=N;i++){
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b.begin()+1,b.end());
    for(int i=1;i<=N/2;i++){
        if(!check(a[i],a[N+1-i],b[i],b[N+1-i])){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}