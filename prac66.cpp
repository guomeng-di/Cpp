//98942. 递归求组合数
//法一:数学公式法
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    int t; cin>>t;
    while(t--){
        int m,n; cin>>n>>m;
        if(m==0){ cout<<1<<endl;continue;}
        else{
            int small=(n-m>m)?m:(n-m);//s=1
            ll ans=1;
            for(int i=n;i>n-small;i--){
                ans*=i;//ans=3
            }for(int i=1;i<=small;i++){
                ans/=i;//ans/=2
            }cout<<ans<<endl;
        }
    }
    return 0;
}
