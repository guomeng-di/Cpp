//求交错序列前N项和
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    double sum=0;
    int cnt=1;
    double cc=1.0;
    for(int i=1;i<=n;i++){
        sum+=cc*i/cnt;
        cnt+=2;
        cc=-cc;
    }
    printf("%.3lf",sum);
    return 0;
}
// #include <stdio.h>
// int main(int argc, char** argv) {
//     int N;
//     scanf("%d",&N);
//     int cnt=-1;
//     double sum=1;
//    for(int i=2;i<=N;i++){
//        sum+=cnt*i/(2*i-1.0);
//        cnt=-cnt;
//    }
//     printf("%.3lf",sum);
//     return 0;
// }