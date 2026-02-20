//44717. 刷题统计 (运行超时)
// 小明决定从下周一开始努力刷题准备蓝桥杯竞赛。
// 他计划周一至周五每天做a道题目,周六和周日每天做b道题目.
// 请你帮小明计算, 按照计划他将在 第几天实现做题数大于等于n题?
//运行超时
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ll a,b,n; cin>>a>>b>>n;
    ll ans=0;
    ll cnt=0;
    int day=1;
    while(ans<n){
        if(day==6||day==0)
          ans+=b;
        else ans+=a;
        day++;
        day%=7;
        cnt++;
    }
    cout<<cnt;
    return 0;
}
//优化
//先计算整的周数
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ll a,b,n;
    cin>>a>>b>>n;
    ll t=5*a+2*b;
    ll cnt=(n/t)*7;//天数
    n%=t;//剩余题目
    int day=1;
    while(n>0){
        if(day==6)
         n-=b;
        else n-=a;
        day=(day+1)%7;
        cnt++;
    }
    cout<<cnt;
    return 0;
}