//45668. Fibonacci数列
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a=1,b=1;
    int c;
    for(int i=3;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    if(n==1||n==2)cout<<"1"<<endl;
    else cout<<c<<endl;

    return 0;
}