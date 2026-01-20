//阶梯电价
#include <iostream>
using namespace std;
int main(){
    double cost;
    cin>>cost;
    if(cost<0) printf("Invalid Value!");
    else if(cost<=50) printf("cost = %.2lf",0.53*cost);
    else printf("cost = %.2lf",0.53*50+(0.53+0.05)*(cost-50));
    return 0;
}