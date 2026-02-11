//43711. 饮料换购
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a; cin>>a;
    int sum=a;
    while(a>=3){
        int b=a/3;
        sum+=b;
        a=b+a%3;
    }
cout<<sum;
    return 0;
}
// 100
// 第一次 100/3=33  100%3=1 有34
// 第二次 34/3=11 34%3=1 有12
// 第三次 12/3=4 12%3=0  有4
//   4/3=1 4%3=1  2<3退出
//   100+33+11+4+1=149