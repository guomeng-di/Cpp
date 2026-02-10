//48677. 找到最多的数
#include <bits/stdc++.h>
using namespace std;
//摩尔投票法
int main() {
    int n,m; cin>>n>>m;
    int candidate=0;//候选
    int cnt=0;//计票
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int curr; cin>>curr;
            if(cnt==0){
                candidate=curr;
                cnt++;
            }else if(curr==candidate)
            cnt++;
            else cnt--;
        }
    }
    cout<<candidate;
    return 0;
}