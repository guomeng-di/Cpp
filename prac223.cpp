//45082. 百亿富翁 (单调栈)
//https://saas.lanqiao.cn/saas/xiyou2/student/problems/45082?bank_id=104
#include <bits/stdc++.h>
using namespace std;
int main() {
    long long N; cin>>N;
    std::vector<long long>h(N + 1), s(N + 1, -1), ss(N + 1, -1);
    for(long long i=1;i<=N;i++) cin>>h[i];
    stack<int>p; p.push(1);
    for(int i=2;i<=N;i++){
        while(!p.empty()&&h[i]>=h[p.top()]) p.pop();
        s[i]=(p.empty()?-1:p.top());
        p.push(i);
    }
    while(!p.empty()) p.pop();//清空
    p.push(N);
    for(int i=N-1;i>=1;i--){
        while(!p.empty()&&h[i]>=h[p.top()]) p.pop();
        ss[i]=(p.empty()?-1:p.top());
        p.push(i);
    }
    for(int i=1;i<=N;i++)cout<<s[i]<<" ";
    cout<<endl;
    for(int i=1;i<=N;i++)cout<<ss[i]<<" ";
    return 0;
}
//已知：楼房1～N，高度hi
//想知道对于每栋楼，左边第一个比他高的，右边第一个比他高的
//思路:先判断左边
//利用栈的思想
// 2 5 3 4
// null null 5 5
// 栈：max 2<5 当前元素大于栈顶元素时，剔除栈顶，移入当前
//         5  3<5当前元素小于栈顶元素时，栈顶元素即为max