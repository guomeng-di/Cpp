//92846. 一维前缀和
#include <bits/stdc++.h>
using namespace std;
//求前缀和，再相减
int main() {
    int n,q;
    cin>>n>>q;
    int* arr=(int*)malloc(sizeof(int)*(n+1));
    int* sum=(int*)malloc(sizeof(int)*(n+1));
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        sum[i]=sum[i-1]+arr[i];
    }
    for(int i=0;i<q;i++){
        int a,b;
        cin>>a>>b;
        printf("%d\n",a?sum[b]-sum[a-1]:sum[b]);
    }
    free(arr);
    free(sum);
    return 0;
}