//44788. 特殊的数
#include <bits/stdc++.h>
using namespace std;
long long get_math(int x){
    long long int cnt=0,sum=0,y=0;
    while(x){
        y=x%10;
        sum+=(long long)pow(16,cnt)*y;
        cnt++;
        x/=10;
    }
    return sum;
}
int main() {
    for(int i=11;;i++){
        long long m=get_math(i);
        if(m%i==0){
            cout<<i;
            break;
        }
    }

    return 0;
}