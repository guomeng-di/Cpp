//49383. 最大花之能量
#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin>>N;
    int arr[N],f[N];//arr存能量值 f存能量和
    for(int i=1;i<=N;i++){
        cin>>arr[i];
        f[i]=arr[i];
    }
    for(int i=2;i<=N;i++){
        for(int j=1;j<i;j++){
            if(arr[i]>arr[j])
            f[i]=max(f[i],f[j]+arr[i]);
        }
    }
    cout<<*max_element(f+1,f+N+1)<<endl;
    return 0;
}