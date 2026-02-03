//43831. 珠心算测验(模拟+枚举+双指针)
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin>>n;
    int cnt=0;
    vector<int>f(n+1,0); for(int i=1;i<=n;i++) cin>>f[i];
    sort(f.begin(),f.end());
vector<bool>is_ok(n+1,0);//避免重复计数
    for(int i=n;i>=3;i--){
        int left=1;
        int right=i-1;
        while(left<right){
            if(f[i]==f[left]+f[right]){                
            if(!is_ok[i]){ //该数还未被统计才标记+计数
                    is_ok[i] = true;
                    cnt++;
                }
                right--;
            }
            else if(f[i]>f[left]+f[right]) left++;
            else right--;
        }
    }
    cout<<cnt;
    return 0;
}