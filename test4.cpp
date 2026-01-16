//敲桌子：从1开始数到数字100,如果数字个位或十位为7,或者该数字为7的倍数，打印“敲桌子“，否则打印该数字
#include <iostream>
using namespace std;
int main(){
    for(int i=1;i<=100;i++){
        if((i%10==7)||(i/10==7)||(i%7==0)) cout<<"敲桌子\n"<<endl;
        else cout<<i<<endl;
    }
    system("pause");
    return 0;
}