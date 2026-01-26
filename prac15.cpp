//49359. 小蓝的神秘行囊
#include <bits/stdc++.h>
using namespace std;
int v[1001],m[1001],w[1001],f[1001][101][101];
int main() {
    int N,V,M; cin>>N>>V>>M;
    for(int i=1;i<=N;i++) cin>>v[i]>>m[i]>>w[i];
    for(int i=1;i<=N;i++){
        for(int j=1;j<=V;j++){
            for(int k=1;k<=M;k++){
                if(v[i]>j||m[i]>k)//j,k是背包还有多大多重
                f[i][j][k]=f[i-1][j][k];
                else f[i][j][k]=max(f[i-1][j][k],f[i-1][j-v[i]][k-m[i]]+w[i]);
            }
        }
    }
    cout<<f[N][V][M]<<endl;
    return 0;
}