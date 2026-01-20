//生成3的乘方表
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){
        printf("pow(3,%d) = %d\n",i,(long long)pow(3,i));
    }
    return 0;
}