//43977. 统计数字
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    int n; cin>>n;
    vector<ll>f(n);
    for(int i=0;i<n;i++) cin>>f[i];
    sort(f.begin(),f.end());
    int cnt=1;
    for(int i=0;i<n;i++){
       if(f[i]==f[i+1])
           cnt++;
        else{
            cout<<f[i]<<" "<<cnt<<endl;
            cnt=1;
        }
    }

    return 0;
}