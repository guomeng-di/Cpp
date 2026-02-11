//44071. 数位和
#include <bits/stdc++.h>
using namespace std;
int check(int x){
    int sum=0;
    while(x){
        sum+=x%10;
        x/=10;
    }
    return sum;
}
int main() {
    int sum=901;
    for(int i=101;i<=1000;i++){
        sum+=check(i);
    }
cout<<sum;
    return 0;
}