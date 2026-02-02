//48384. 学习日 (枚举+模拟)
#include <bits/stdc++.h>
using namespace std;
bool is_leapyear(int year){
    if(year%400==0||(year%4==0&&year%100!=0)) return 1;
    else return 0;
}
int main() {
    long sum=0,zhou=6;
const int days[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    for(int y=2000;y<=2022;y++){
       for(int m=1;m<=12;m++){
           int month_day=days[m];
           if(m==2&&is_leapyear(y)) month_day=29;
           for(int d=1;d<=month_day;d++){
               zhou%=7;
               if(!zhou) zhou=7;
               if(zhou==m||zhou==m%10||zhou==m/10){
                   zhou+=1;continue;}
               else{
                   zhou+=1;
                   sum++;
               }
           }
       } 
    }
    for(int m=1;m<=3;m++){
           int month_day=days[m];
           for(int d=1;d<=month_day;d++){
               zhou%=7;
               if(zhou==m){
                   zhou+=1;continue;}
               else{
                   zhou+=1;
                   sum++;
               }
           }
       } sum+=1;
       cout<<sum;
    return 0;
}