//43948. 单词分析
#include <bits/stdc++.h>
using namespace std;
int cnt[29];
int main() {
    string s; cin>>s;
    for(int i=0;i<s.size();i++){
        cnt[s[i]-'a']++;//字符a转换为0
    }
    int max1=0;
    for(int i=1;i<26;i++){
        if(cnt[i]>cnt[max1]){
            max1=i;
        }
    }char tar=max1+'a';
    cout<<tar<<endl<<cnt[max1];
    return 0;
}