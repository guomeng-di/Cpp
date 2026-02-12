//45262. 分解质因数(唯一分解定理)
#include <bits/stdc++.h>
using namespace std;
void check(int x){
    vector<int>f;
    cout<<x<<"=";
    while(x%2==0){//先处理偶数
        f.push_back(2);
        x/=2;
    }
    for(int i=3;i*i<=x;i+=2){//再处理奇数
        while(x%i==0){
            f.push_back(i);
            x/=i;
        }
    }
    if(x>2) f.push_back(x);//该数为质数,无法继续分解
    int i=0;
    while(i<f.size()-1){
        cout<<f[i]<<"*";
        i++;
    }
    cout<<f[i]<<endl;
}
int main() {
    int a,b; cin>>a>>b;
    for(int i=a;i<=b;i++){
        check(i);
    }
    return 0;
}