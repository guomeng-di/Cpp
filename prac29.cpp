//45155. 排个序
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,m; cin>>n>>m;
    vector<int>a(n+1);for(int i=1;i<=n;i++) cin>>a[i];
    vector<int>p(m+1);for(int i=1;i<=m;i++) cin>>p[i];
    sort(p.begin()+1,p.end());
    for(int i=1;i<m;i++){
            if(a[p[i]]<a[p[i+1]]) swap(a[p[i]],a[p[i+1]]);
    }
    for(int i=1;i<n;i++){
        if(a[i]<a[i+1]){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}