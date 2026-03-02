//77886. 别小看小蓝
#include <bits/stdc++.h>
using namespace std;
long long n;
const long long int a=998244353;
long long f(long long x){
    if(x<=10){ 
        return 7*x*(x-1)%a;
    }
    if(x>10) return (x*x%a*f(x-6)%a)%a;
}
int main() {
    cin>>n;
    cout<<f(n)%a;
    return 0;
}
