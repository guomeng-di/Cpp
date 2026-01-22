//49116. 肖恩的投球游戏（差分+前缀和）
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false); // 加速输入输出
    cin.tie(nullptr);

    int n,q,l,r,c;
    cin>>n>>q;
    int* sum=(int*)malloc(sizeof(int)*n);//前缀和
    int* p=(int*)malloc(sizeof(int)*n);//差分
    for(int i=1;i<=n;i++){
        cin>>sum[i];//暂存ori数组
    p[i]=sum[i]-sum[i-1];//!初始化
    }
    sum[0]=0;
    for(int i=1;i<=q;i++){
        cin>>l>>r>>c;
        p[l]+=c;
        p[r+1]-=c;
    }
    for(int i=1;i<=n;i++){
        sum[i]=sum[i-1]+p[i];
        cout<<sum[i]<<" ";
    }
    return 0;
}