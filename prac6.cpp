//48969. 棋盘
#include <bits/stdc++.h>
using namespace std;
#define N 2002 //(涉及+1,所以2001不行)
int arr[N][N];//结果+差分（C++中全局数组自动初始化为0,局部数组则不会）
//二维前缀和公式:当前值=上方值+左方值-左上角值+自身原始值
int main() {
ios::sync_with_stdio(false); cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        int x1,y1,x2,y2; cin>>x1>>y1>>x2>>y2;
        arr[x1][y1]++;
        arr[x2+1][y1]--;
        arr[x1][y2+1]--;
        arr[x2+1][y2+1]++;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){ 
         arr[i][j]+=arr[i-1][j]+arr[i][j-1]-arr[i-1][j-1];
        if(arr[i][j]%2) cout<<"1";
        else cout<<"0";
        }
        cout<<"\n";
    }
    return 0;
}