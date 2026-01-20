//求平方根序列前N项和
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    double sum=0;
    for(int i=1;i<=n;i++){
        sum+=sqrt(i);
    }
    printf("sum = %.2lf",sum);
    return 0;
}