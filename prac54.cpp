//44892. 分巧克力(二分)
#include <bits/stdc++.h>
using namespace std;
bool check(vector<pair<int,int>>&f,int m,int K){
    int cnt=0;
    for(int i=0;i<f.size();i++){
        cnt+=(f[i].first/m)*(f[i].second/m);
    }
    return cnt>=K;
}
int main() {
    int N,K; cin>>N>>K;
    vector<pair<int,int>>f(N);
    for(int i=0;i<N;i++) cin>>f[i].first>>f[i].second;
    int l=1,r=1e5;
    while(l<r){
        int mid=(l+r+1)/2;
        if(check(f,mid,K)) l=mid;
        else r=mid-1;
    }
    cout<<r;
    return 0;
}