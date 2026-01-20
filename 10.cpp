//求奇数分之一序列前N项和
#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;
double sum=1;
int count=3;
for(int i=1;i<n;i++){
    sum+=1.0/count;
    count+=2;
}
printf("sum = %.6lf",sum);
}