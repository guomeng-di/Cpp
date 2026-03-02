//48537. 符合条件的数 
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n;
bool f(ll x){
    if(x==0) return 0;
    while(x){
    int a=x%10;
    x/=10;
    if(a==1||a==2) continue;
    else return 0;
    }return 1;
}
int main() {
    cin>>n;
    for(int i=1;i<n;i++){
        ll sum=i*n;
        if(f(sum)){
            cout<<i;
            return 0;
        }
    }cout<<"No Solution";
    return 0;
}