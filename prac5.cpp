//49189. 无尽的石头
#include <bits/stdc++.h>
using namespace std;
long long int f(int n){
    long long x=0;
    while(n){
        x+=n%10;
        n/=10;
    }
    return x;
}
int main() {
    int t; cin>>t;
    while(t--){
        int target; cin>>target;
        int cnt=0;
        long long n=1;
        while(n<target){
                n+=f(n);
                cnt++;
                if(n==target) cout<<cnt<<endl;
               else if(n>target) cout<<"-1"<<endl;
        }
    }
    return 0;
}