//45691. 龟兔赛跑预测
#include <bits/stdc++.h>
using namespace std;
//需要逐秒模拟休息过程
int main() {
    int v1,v2,t,s,l; 
    cin>>v1>>v2>>t>>s>>l;
    int s1=0,s2=0;
    int miao=0;
    while(s1<l&&s2<l){
        if(s1-s2>=t){
            for(int i=0;i<s;i++){
                s2+=v2;
                miao++;
                if(s2>=l) break;
            }
            if(s2>=l) break;
        }
             s1+=v1;
             s2+=v2;
             miao++;
    }
    if(s1>=l&&s2>=l) cout<<"D";
    else if(s1>=l) cout<<"R";
    else cout<<"T"; 
    cout<<"\n"<<miao;
    return 0;
}