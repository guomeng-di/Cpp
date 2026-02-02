//45099. 数的幂次 (快速幂)
#include <bits/stdc++.h>
using namespace std;
long long qiuyu(long long N,long long M,long long P);
int main() {
    int T; cin>>T;
    while(T--){
        long long N,M,P; cin>>N>>M>>P;
        cout<<qiuyu(N,M,P)<<endl;
    }
    return 0;
}
long long qiuyu(long long N,long long M,long long P){
    if(M==0) return 1;
    if(M%2) return N*(qiuyu(N,M-1,P)%P)%P;
    else{
        long long m=(qiuyu(N,M/2,P)%P);
        return  m*m%P;
    }
}