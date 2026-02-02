//48388. 日期相加 (枚举+模拟)
#include <bits/stdc++.h>
using namespace std; 
int result(int number){
    int sum=0;
    while(number){
        sum+=number%10;
        number/=10;
    }
    if(sum>9) return result(sum);
    return sum;
}
bool is_leapyear(int year){
    if(year%400==0||(year%100!=0&&year%4==0)) return 1;
    else return 0;
}
int main() {
    int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int N; cin>>N;
    int cnt=0;
    for(int y=2000;y<=2022;y++){
        int Y=result(y);
        for(int m=1;m<=12;m++){
            int M=result(m);
            int month_day=month[m];
            if(m==2&&is_leapyear(y)) month_day=29;
            for(int d=1;d<=month_day;d++){
                int D=result(d);
                int sum=result(Y+M+D);
                if(sum==N) cnt++;
            }
        }
    }
    for(int m=1;m<=3;m++){
            int M=result(m);
            int month_day=month[m];
            for(int d=1;d<=month_day;d++){
                int D=result(d);
                int sum=result(7+M+D);
                if(sum==N) cnt++;
            }
        }
                    for(int d=1;d<=20;d++){
                int D=result(d);
                int sum=result(7+4+D);
                if(sum==N) cnt++;
            }
        cout<<cnt;
    return 0;
}