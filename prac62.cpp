//43991. 扫雷(思维 贪心 省赛 BFS)
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,m; cin>>n>>m;
    vector<int>f(n*m);
    for(int i=0;i<n*m;i++) cin>>f[i];
    vector<int>ans(n*m,0);
    for(int i=0;i<n*m;i++){
        if(f[i]) ans[i]=9;
        else{
            if((i+1)%m&&i<n*m-1)ans[i]+=f[i+1];//右
            if(i>0) ans[i]+=f[i-1];//左
            if(i+m<n*m)ans[i]+=f[i+m];//下
            if(i%m&&i+m-1<n*m)ans[i]+=f[i+m-1];//下左
            if((i+1)%m&&i+m+1<n*m)ans[i]+=f[i+m+1];//下右
            if(i-m>=0)ans[i]+=f[i-m];//上
            if(i%m&&i-m-1>0)ans[i]+=f[i-m-1];//上左
            if((i+1)%m&&i-m+1>0)ans[i]+=f[i-m+1];//上右
        }
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        cout<<ans[cnt++]<<" ";
        cout<<endl;
    }
    return 0;
}