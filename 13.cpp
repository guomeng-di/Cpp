//求组合数
#include <iostream>
using namespace std;
double fact(int n);
int main(){
    int m,n;
    cin>>m>>n;
    printf("result = %.0lf",fact(n)/fact(m)/fact(n-m));
    return 0;
}
double fact(int n){
    double sum=1;
    for(int i=1;i<=n;i++){
        sum*=i;
    }
    return sum;
}