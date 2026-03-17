//L1-080 乘法口诀数列
#include <bits/stdc++.h>
using namespace std;
vector<int> f;
void chengfa(int x){
    vector<int> a;
    if(x==0) f.push_back(0);
    while(x){
        a.push_back(x%10);
        x/=10;//124  a:421 
    }for(int i=a.size()-1;i>=0;i--){
        f.push_back(a[i]);
    }return;
}
int main(){
    int a1,a2,n; cin>>a1>>a2>>n;
    int st=0;
        f.push_back(a1);
        f.push_back(a2);
    while(f.size()<=n){
        chengfa(f[st]*f[st+1]);
        st++;
    }for(int i=0;i<n;i++){ 
        if(i<n-1)cout<<f[i]<<" ";
    else cout<<f[i];
    }
    return 0;
}