//77882. 数字怪坛
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n;
const ll a=998244353;
ll f(ll x){
    if(x<=10) return (x%a*(x-1)%a)%a;
    if(x>10) return 2*x%a*f(x-2)%a;
}
int main() {
    cin>>n;
    cout<<f(n)%a;
    return 0;
}
