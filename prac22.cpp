//B3614 【模板】栈 （手动实现一个栈）
//https://www.luogu.com.cn/problem/B3614#ide
#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
const int N = 1e6 + 1;
class MyStack{
    int i = 0;
    ll nums[N];
public:
    void push(ll x){
        if (i < N) nums[i++] = x;
    }
    void pop(){
        if (i > 0) i--;
        else  cout<<"Empty\n";
    }
    void query(){
        if (i > 0) cout<<nums[i - 1]<<"\n";
        else cout<<"Anguei!\n";
    }
    void size(){
        cout<<i<<endl;
    }
};
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin>>n;
        MyStack stack;
        while (n--){
            string ord; cin >> ord;
            if (ord == "push"){
                ll x; cin>>x;
                stack.push(x);
            }else if (ord == "pop")  stack.pop();
            
            else if (ord == "query") stack.query();
            else if (ord == "size") stack.size();
        }
    }
    return 0;
}
