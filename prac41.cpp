//43796. 寻找 3 个数的最大乘积
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N; cin>>N;
    vector<int>a(N);
    for(int i=0;i<N;i++) cin>>a[i];
    if(N==3){
        cout<<a[0]*a[1]*a[2];
        return 0;
    }else{
        sort(a.begin(),a.end());
        int a1=a[0]*a[1];
        int b=a[N-2]*a[N-3];
        if(a1>b) cout<<a1*a[N-1];
        else cout<<b*a[N-1];
    }

    return 0;
}