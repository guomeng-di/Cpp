//48931. 特殊日期 (枚举+模拟)
#include <bits/stdc++.h>
using namespace std;
bool is_leapyear(int year){
    if(year%400==0||(year%4==0&&year%100!=0)) return 1;
    return 0;
}
int main() {
    int cnt=0;
    int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    for(int y=2000;y<2000000;y++){
       for(int m=1;m<=12;m++){
           if(y%m) continue;
           int month_day=month[m];
           if(m==2&&is_leapyear(y)) month_day=29;
           for(int d=1;d<=month_day;d++){
               if(y%d) continue;
               else cnt++;
           }
       } 
    }
    cnt++;
    cout<<cnt;
    return 0;
}