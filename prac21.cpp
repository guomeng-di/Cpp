//48374. 小蓝的括号串1 栈/(前缀和+字符串)
//法一：栈 1入栈arr.push(arr[i]) 2检查空arr.empty() 3栈顶出栈arr.pop()
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,sum=0; cin>>n;//n表示长度
    string s; cin>>s;//s为括号串
    stack<char>arr;//栈
    for(int i=0;i<n;i++){
        if(s[i]=='(') arr.push(s[i]);//左括号：入栈
        else{//说明为右括号
            if(arr.empty()){//栈空：说明无对应的左括号
                cout<<"No";
                return 0;
            }
            else arr.pop();//栈顶元素(左括号)出栈
        }
    }
    if(arr.empty()) cout<<"Yes";
    else cout<<"No";
    return 0;
}
// //法二：前缀和
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n,sum=0; cin>>n;//n表示长度
//     string s; cin>>s;//s为括号串
//     for(int i=0;i<n;i++){
//         sum+=((s[i]=='(')?1:-1);//1='(' -1=')'
//         if(sum<0){//因为有顺序要求,先有,所以sum>=0
//             cout<<"No";
//             return 0;
//         }
//     }
//     if(sum) cout<<"No";
//     else cout<<"Yes";
//     return 0;
// }