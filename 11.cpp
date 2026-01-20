//求简单交错序列前N项和
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    double sum=0;
    int cnt=1;
    double c=1.0;
    for(int i=1;i<=n;i++){
         sum+=c*1/cnt;
        cnt+=3;
        c=-c;
    }
    printf("sum = %.3lf",sum);
    return 0;
}