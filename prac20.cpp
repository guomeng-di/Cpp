//48869. 小郑的蓝桥平衡串 (前缀和+字符串)
#include <bits/stdc++.h>
using namespace std;
int sum[1001];
//ASCII码值相减 等于0时作标记 不断更新
int main() {
    string arr; cin>>arr;
    int l1=arr.size(),cnt1=0,cnt2=0;
    sum[0]=(arr[0]=='L')?1:-1;
    for(int i=1;i<l1;i++){
        sum[i]=sum[i-1]+((arr[i]=='L')?1:-1);
        if(sum[i]==0) cnt1=i+1;
    }//abbaab
    for(int i=1;i<l1;i++){
        for(int j=0;j<i;j++){
            if(sum[i]-sum[j]==0&&(i-j)>cnt2) cnt2=i-j;
        }
    }
    int cnt=cnt1>cnt2?cnt1:cnt2;
    cout<<cnt;
    return 0;
}