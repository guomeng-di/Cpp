//62174. 小蓝的字符串
//字符串的模拟
//优化:
//1 substr函数:提取某一段子串
//2 islower函数:判断该字符是否是小写 是则1 不是则0
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    if(s.size() < 7) {
        cout << "WA";
        return 0;
    }

    if(s.substr(0,3) != "LAN" || s.substr(s.size()-4) != "QIAO") {
        cout << "WA";
        return 0;
    }

    for(int i=3;i<s.size()-4;i++) {
        if(!islower(s[i])) { // 判断小写字母
            cout << "WA";
            return 0;
        }
    }

    cout << "AC";
}
//暴力:
#include <bits/stdc++.h>
using namespace std;
string s;
int len;
string s1="LANQIAO";
int main() {
    cin>>s;
    len=s.size();
    int len1=s1.size()-1;
    if(len<7){
        cout<<"WA";
        return 0;
    }if(len==7){
        for(int i=0;i<7;i++){
            if(s[i]!=s1[i]){
                cout<<"WA";
                return 0;
            }
        }cout<<"AC";
        return 0;
    }
    for(int i=0;i<3;i++){
        if(s[i]!=s1[i]){
            cout<<"WA";
            return 0;
            }
    }
    for(int i=len-1;i>len-4;i--){
        if(s[i]!=s1[len1--]){
            cout<<"WA";
            return 0;
            }        
    }
    for(int i=3;i<len-4;i++){
        if(s[i]>'z'||s[i]<'a'){
            cout<<"WA";
            return 0;
        }
    }
    cout<<"AC";
    return 0;
}