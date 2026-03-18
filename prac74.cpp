//暴力:40% 4层循环 o(n^4)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;//个数
ll arr[1003];
ll sum[1003];
ll minn=LLONG_MAX;
int main()
{
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>arr[i];
    if(i==0) sum[i]=arr[i];
    else sum[i]=sum[i-1]+arr[i];
  }
  for(int i=0;i<n;i++){//第一段起点
    for(int j=i;j<n-1;j++){//第一段终点
     for(int k=j+1;k<n;k++){//第二段起点为k
      for(int m=k;m<n;m++){//第二段终点为m
        ll a1=(i>0)?(sum[j]-sum[i-1]):sum[j];
        ll a2=sum[m]-sum[k-1];
        minn=min(abs(a2-a1),minn);
      }
    }
  }
  }cout<<minn;
  return 0;
}
//learn:
// “子序列” 不是 “子数组”，这是关键！
// 子数组：必须是数组里连续的一段，比如第 1-8 个数（5,6,8,6,9,1,6,1）；
// 子序列：只要求顺序和数组一致，但可以不连续！
// 比如从数组里挑第 1 个（5）、第 5 个（9）、第 10 个（4）…… 只要挑的数的下标是递增的就行。

