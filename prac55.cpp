//99236. 动态密码【算法赛】
#include <bits/stdc++.h>
using namespace std;

int main() {
    long a=20241111;
    vector<int>s;
    while(a){
        s.push_back(a%2);
        a/=2;
    }
    while(!s.empty()){
        cout<<s.back();
        s.pop_back();
    }
    return 0;
}