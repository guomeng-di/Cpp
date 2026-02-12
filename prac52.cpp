//49099. 小蓝吃糖果(线性筛 贪心 排序 前缀和 二分)
//优化:
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    int n,q; cin>>n>>q;
    vector<int>a(n);
    vector<ll>sum(n);
    for(int i=0;i<n;i++) cin>>a[i];
   sort(a.rbegin(),a.rend());//从大到小排序
   sum[0]=a[0];
   for(int i=1;i<n;i++)  sum[i]=sum[i-1]+a[i];
   while(q--){
       ll x; cin>>x;
       if(x>sum[n-1]) cout<<-1<<endl;
       else{
           int l=0,r=n-1,ans=0;
           while(l<=r){
               int mid=(l+r)/2;
               if(sum[mid]>x){ ans=mid;r=mid-1;}
               else if(sum[mid]<x) l=mid+1;
               else {ans=mid;break;}
           }
           cout<<ans+1<<endl;
       }
   }
    return 0;
}  
// 4 7 9 10
//暴力:
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// int main() {
//     int n,q; cin>>n>>q;
//     vector<int>a(n);
//     for(int i=0;i<n;i++) cin>>a[i];
//     sort(a.begin(),a.end());
//     while(q--){
//         ll x; cin>>x;
//         int ans=0,r=n-1;
//         while(x>0&&r>=0){
//             ans++;
//             x-=a[r];
//             r--;
//         }
//     if(x>0) cout<<-1<<endl;
//     else cout<<ans<<endl;
//     }
//     return 0;
// }