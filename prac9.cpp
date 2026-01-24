//45178. 计数排序
#include <stdio.h>
#include <stdlib.h>
int compare(const void* a,const void* b){
    int* x=(int*)a;
    int* y=(int*)b;
    return *x-*y;
}
int main() {
    long n;
    scanf("%ld",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    qsort(arr,n,sizeof(arr[0]),compare);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}