//48741. 区间更新
#include <bits/stdc++.h>
using namespace std;
int n,m;
//EOF==-1 适用于"输入有多组数据，数据组数不大于5"
int main() {
    for(int i=0;i<5&&scanf("%d %d",&n,&m)!=EOF;i++){//输入有多组数据，数据组数不大于5 
        int arr[n+1],cha[n+1];
        for(int j=0;j<n;j++){//输入原数据
            cin>>arr[j];
            if(!j) cha[0]=arr[0];
            if(j)cha[j]=arr[j]-arr[j-1];
            cha[0]=arr[0];//初始化差分数组
        }
        for(int q=0;q<m;q++){//m次操作
           int x,y,z; cin>>x>>y>>z;
           //给数组中下标为x与下标为y之间的元素的值加上z
           cha[x-1]+=z;
           cha[y]-=z;//处理差分数组
        }//2 加到原数组上arr[j]+=sum[j];arr[j]+=cha[j];
        for(int j=0;j<n;j++){
            //1 对差分数组求前缀和 sum[j]=sum[j-1]+cha[j];
             if(j) cha[j]+=cha[j-1];
            cout<<cha[j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}