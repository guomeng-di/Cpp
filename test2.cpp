//系统生成随机数 猜大小
#include <iostream>
using namespace std;
int main(){
    int num=rand()%100+1;//0~100
    //cout<<num;
    cout<<"请输入您的猜测:\n";
    int mine;
    cin>>mine;
    while(mine!=num){
        if(mine>num) cout<<"您猜的数偏大，再来一次吧！\n";
        else cout<<"您猜的数偏小，再来一次吧！\n";
        cin>>mine;
    }
    cout<<"您猜对啦！天才！\n";
    system("pause");
    return 0;
}
