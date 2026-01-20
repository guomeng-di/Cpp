//求整数均值
#include <iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<"Sum = "<<(a+b+c+d)<<"; ";
    printf("Average = %.1lf",(double)(a+b+c+d)/4.0);
    return 0;
}
// Sum = 10; Average = 2.5