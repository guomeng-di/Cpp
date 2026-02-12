//51836. 鸡哥的奇特密码
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin>>s;
    vector<char>f;
    int cnt=0;
    for(int i=0;i<s.size();i++){
        if(!cnt&&s[i]=='L'){
            cnt=1;
            f.push_back('L');
            }else if(s[i]=='Q'){
            cnt=0;
            f.push_back('Q');                
            }
    }
for(int i=0;i<f.size();i++) cout<<f[i];
    return 0;
}