//45956. 进制转换II
#include <bits/stdc++.h>
using namespace std;
int zhuan(char a,char b,char c){
    int c1=(c>='0'&&c<='9')?(c-'0'):(c-'A'+10);
    int b1=(b>='0'&&b<='9')?(b-'0'):(b-'A'+10);
    int a1=(a>='0'&&a<='9')?(a-'0'):(a-'A'+10);
    return c1+b1*15+a1*15*15;
}
int main() {
    //1.转10进制
    char a,b,c; cin>>a>>b>>c;
    int sum=zhuan(a,b,c);
    //2.转7进制
    int arr[4]={0,0,0,0};
    for(int i=3;i>=0;i--){
        if(sum==0) break;
        arr[i]=sum%7;
        sum/=7;
    }
    for(int i=0;i<4;i++) cout<<arr[i];
    return 0;
}