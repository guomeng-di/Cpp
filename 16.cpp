//求平方与倒数序列的部分和
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    double sum=0;
    for(int i=m;i<=n;i++){
        sum+=pow(i,2)+1.0/i;
    }
    printf("sum = %.6lf",sum);
    return 0;
}
// #include <stdio.h>
// #include <math.h>
// int main(int argc, char** argv) {
//     int m,n;
//     scanf("%d %d",&m,&n);
//     double sum=0;
//     for(int i=m;i<=n;i++){
//         sum+=pow(i,2);
//     }
//     for(int i=m;i<=n;i++){
//         sum+=1.0/i;
//     }
//     printf("sum = %.6lf",sum);
//     return 0;
// }