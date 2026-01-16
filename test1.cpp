//有三只小猪ABC，分别输入三只小猪的体重，并判断最重的小猪
#include <iostream>
using namespace std;
int main(){
    float A,B,C;
    cout<<"请分别输入小猪的体重：";
    cin>>A>>B>>C;
    if(A>B){
        if(A>C) cout<<"最重的小猪是A";
        else cout<<"最重的小猪是C";
    }
    else { 
        if(B>C) cout<<"最重的小猪是B";
        else cout<<"最重的小猪是C";

    }
    cout<<"\n";
    system("pause");
    return 0;
}
