//43714. 音节判断
#include <bits/stdc++.h>
using namespace std;
bool check (char c){
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
    return 1;
    return 0;
}
int main() {
    string s; cin>>s;
    int start=0,last=s.size()-1;
    if(last<3) {
        cout<<"no";
        return 0;
    }
        if(check(s[start])){
            cout<<"no";
            return 0;
        }
        if(!check(s[last])){
            cout<<"no";
            return 0;           
        }
        start++;
        last--;
        int a=0,b=0;
    while(start<last){
        if(check(s[start])&&(!check(s[start+1])))   {a=1;break;}
        else start++;
    }
        while(start<last){
        if(!check(s[last]))   {b=1;break;}
        else last--;
    }
    if(start>last){
        cout<<"no";
        return 0;
    }
    for(int i=start+1;i<=last;i++){
        if(check(s[i])) {
            cout<<"no";
            return 0;
        }
    }
    if(a&&b)cout<<"yes";
    return 0;
}
//1 如果开头元音 out   确保了以辅音开头
//2 如果结尾辅音 out    确保了以yuan音结尾
//start读到第一个元音辅音连接 标记 a=1
//last读到第一个辅音 标记 b=1
//a=1&&b=1, 不得有元音