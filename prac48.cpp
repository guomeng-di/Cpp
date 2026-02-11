//49320. 泡澡(差分)
#include <bits/stdc++.h>
using namespace std;
const int m=2*1e5+2;
typedef long long ll;
//A~B区间内均加减相同数,用差分法
int main() {
    int N,W; cin>>N>>W;
    vector<ll>f(m,0);
    for(int i=0;i<N;i++){
        int s,t,p; cin>>s>>t>>p;
        f[s]+=p;
        f[t]-=p;
    }
    if(f[0]>W) {
    cout<<"No";
    return 0;    
    }
    for(int i=1;i<m;i++){
        f[i]+=f[i-1];
        if(f[i]>W){
            cout<<"No";
            return 0;
        }
    }
    cout<<"Yes";
    return 0;
}