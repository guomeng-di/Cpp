//计算分段函数[2]
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float x;
    cin>>x;
    float y=(x+1)*(x+1)+2*x+1/x;
    if(x>=0) printf("f(%.2f) = %.2f",x,sqrt(x));
    else printf("f(%.2f) = %.2f",x,y);
    return 0;
}