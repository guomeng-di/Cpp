//水仙花数
#include <iostream>
using namespace std;
int main(){
    for(int i=100;i<=999;i++){
        int num1=i/100;
        int num2=i/10-num1*10;
        int num3=i%10;
        if(num1*num1*num1+num2*num2*num2+num3*num3*num3==i)
          cout<<i<<endl;
    }
    system("pause");
    return 0;
}
