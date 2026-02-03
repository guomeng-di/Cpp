//48927. 幸运数(好题!多做!)(模拟+枚举)
//优化:
//1.需要获取数字位数,连续除10影响效率,可以将数字转化为字符,再利用size()获取长度
#include<bits/stdc++.h>
using namespace std;
int main(){
    int ans = 0;
    for (int i = 1; i <= 100000000; ++i) {
        string s = to_string(i);//数字转字符函数
        int n = (int)s.size();//获取长度
        if (n % 2) continue;
        int l = 0, r = 0;
        for (int j = 0; j < n; ++j) {
            if (j < n / 2) l += s[j] - '0';//转数字
            else r += s[j] - '0';
        }
        if (l == r) ans++;
    }
    cout << ans << '\n';//4430091
    return 0;
}
// 暴力:
// #include <bits/stdc++.h>
// using namespace std;
// int shuwei(long x){
//     int cnt=0;
//     while(x){
//         cnt++;
//         x/=10;
//     }
//     return cnt;
// }
// int jisuan(long x){
//     int sum=0;
//     while(x){
//         sum+=x%10;
//         x/=10;
//     }
//     return sum;
// }
// long pow10(int n){
//     long res=1;
//     for (int i=0;i<n;i++){
//         res*=10;
//     }
//     return res;
// }
// int main() {
//     int g=0;
//     for(long i=1;i<=100000000;i++){
//         int cnt=shuwei(i);
//         if(cnt%2) continue;
//         long base = pow10((cnt/2));
//         long q=i/base;
//         long h=i%base;
//         if(jisuan(q)==jisuan(h)) g++;
//     }
//     cout<<g;
//     return 0;
// }