//CF1682C LIS or Reverse LIS? (LIS)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<ll>a(n+1);vector<ll>b(n+1);
        for(int i=1;i<=n;i++) {cin>>a[i];b[n-i+1]=a[i];}//数组a的元素
        //1.定义f[i]表示以ai结尾的最长子序列
        vector<int>f(n+1,1);
        //2.写状态方程
        for(int i=1;i<=n;i++){
            for(int j=1;j<i;j++){
                if(a[i]>a[j])
                    f[i]=max(f[j]+1,f[i]);
            }
        }
        //3.求最大值
        int ans1=*max_element(f.begin()+1,f.end());
        vector<int>f1(n+1,1);
                for(int i=1;i<=n;i++){
            for(int j=0;j<i;j++){
                if(b[i]>b[j])
                    f1[i]=max(f1[j]+1,f1[i]);
            }
        }
        int ans2=*max_element(f1.begin()+1,f1.end());
        int ans=(ans1>ans2?ans2:ans1);
        cout<<ans<<endl;
    }
    return 0;
}