//44618. 最少操作数(BFS)
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,k; cin>>n>>k;
    if (n>=k){
        //只能一直-1
        cout<<n-k;
        return 0;
    }
    queue<int>q;//操作
     const int MAX=200010;//*2可能超出范围
    vector<int>f(MAX,-1);
    //f[i]表示计算得i最少操作次数
    //等于-1表示没被经历过
    f[n]=0;
    q.push(n);
    while(!q.empty()){
        int curr=q.front();
        int a1=curr+1;
        int a2=curr-1;
        int a3=curr*2;
        q.pop();
        if(f[a1]==-1&&a1<=MAX){
            f[a1]=f[curr]+1;
            q.push(a1);
            if(a1==k){
                cout<<f[a1];
                return 0;
            }
        }
        if(f[a2]==-1&&a2<=MAX&&a2>=0){
            f[a2]=f[curr]+1;
            q.push(a2);
            if(a2==k){
                cout<<f[a2];
                return 0;
            }
        }
         if(f[a3]==-1&&a3<=MAX){
            f[a3]=f[curr]+1;
            q.push(a3);
            if(a3==k){
                cout<<f[a3];
                return 0;
            }
        }
    }
    return 0;
}