//P2249 【深基13.例1】查找(二分查找)
#include <iostream>
using namespace std;
int research_(long long int tar,long long int* arr,int n){
    long int left=1,right=n;
    while(left<right){
            int mid=(left+right)/2;
            if(arr[mid]>=tar)
                right=mid;
            else left=mid+1;
        }
    if(arr[right]==tar)return right;
    else return -1;
}
int main(){
    long int n,m; cin>>n>>m;//n数字个数 m询问次数
    long long arr[n+2];
    for(int i=1;i<=n;i++) cin>>arr[i];//待查询的数字
    while(m--){
        int tar; cin>>tar;
        cout<<research_(tar,arr,n)<<" ";
    }
    return 0;
}