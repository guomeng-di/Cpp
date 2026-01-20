//计算分段函数[1]
#include <iostream>
using namespace std;
int main(){
    float x;
    cin>>x;
    if(x) printf("f(%.1f) = %.1f",x,1.0/x);
    else cout<<"f(0.0) = 0.0"<<endl;
    return 0;
}