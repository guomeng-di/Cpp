//49406. 妮妮的月饼工厂(二分)
#include <bits/stdc++.h>
using namespace std;
bool check(int mid,int K,vector<int>&f){
    int cnt=0;
    for(int i=0;i<f.size();i++){
        cnt+=f[i]/mid;
    }
    return cnt>=K;
}
//最高高度在1~1e9之间
int main() {
    int N,K; cin>>N>>K;
    vector<int>f(N);
    for(int i=0;i<N;i++) cin>>f[i];
    sort(f.begin(),f.end());
    int left=1,right=1e9,ans=-1;
    while(left<right){
        int mid=(left+right+1)/2;
        if(check(mid,K,f)){ 
            ans=mid;
            left=mid;
            
        }
        else right=mid-1;
    }
cout<<ans;
    return 0;
}