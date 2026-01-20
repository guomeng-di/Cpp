//求N分之一序列前N项和
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    double sum=1;
    for(int i=2;i<=n;i++){
        sum+=1.0/i;
    }
    printf("sum = %.6lf",sum);
    return 0;
}