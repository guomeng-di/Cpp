//45238. 时间显示
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t; cin>>t;//输入毫秒
    t/=1000;//转换为秒   毫秒也不用显示，直接舍去即可
    //中间过去了n天，但是无所谓，因为不变的是1天24小时，即24*60*60 = 86400
    t%=86400;
    //现在我们得到了当前一天的度过的秒数
    int h=t/3600;
    int m=(t-h*3600)/60;
    t%=60;
printf("%02d:%02d:%02d",h,m,t);
    return 0;
}