//43820	回文日期
#include <bits/stdc++.h>
using namespace std;
int rev(int x){
    int ans=0;
    if(x<10) ans=10*x;
    else{
        while(x){
            ans=ans*10+x%10;
            x/=10;
        }
    }
    return ans;
}
bool is_leapyear(int year){
if((year%4==0&&year%100!=0)||year%400==0) return 1;
    return 0;
}
int main() {
    int y_s,m_s,d_s;
    int cnt=0;
    scanf("%4d%02d%02d",&y_s,&m_s,&d_s);
    int y_e,m_e,d_e;
    scanf("%4d%02d%02d",&y_e,&m_e,&d_e);
    for(int i=y_s;;i++){
        int m=rev(i%100),d=rev(i/100);
        if(m<1||m>12||d<1||d>31) continue;
        if(m==2){
          if(is_leapyear(i)&&d<=29){
            //if(i==y_s&&m==m_s&&d==d_s) continue;
            if((i==y_s&&m<m_s)||(i==y_s&m==m_s&&d<d_s)) break;            
            if(i>y_e||(i==y_e&&m>m_e)||(i==y_e&&m==m_e&&d>d_e)) break;
            cnt++;
            }else if(is_leapyear(i)==0&&d<=28){
            //if(i==y_s&&m==m_s&&d==d_s) continue;
            if((i==y_s&&m<m_s)||(i==y_s&m==m_s&&d<d_s)) break;  
            if(i>y_e||(i==y_e&&m>m_e)||(i==y_e&&m==m_e&&d>d_e)) break;
            cnt++; 
            }
        }
    else if(d<=30&&(m==4||m==6||m==9||m==11)){
            //if(i==y_s&&m==m_s&&d==d_s) continue;
            if((i==y_s&&m<m_s)||(i==y_s&m==m_s&&d<d_s)) break;  
            if(i>y_e||(i==y_e&&m>m_e)||(i==y_e&&m==m_e&&d>d_e)) break;
            cnt++;
    }
else if(d<=31&&(m==1||m==3||m==5||m==7||m==8||m==10||m==12)){
            //if(i==y_s&&m==m_s&&d==d_s) continue;
            if((i==y_s&&m<m_s)||(i==y_s&m==m_s&&d<d_s)) break;              if(i>y_e||(i==y_e&&m>m_e)||(i==y_e&&m==m_e&&d>d_e)) break;
            cnt++;    
}else continue;
    }
cout<<cnt;
    return 0;
}
// abcddcba
// ab->ba date
// cd->dc month

//43942. 回文日期
#include <bits/stdc++.h>
using namespace std;
int rev(int x){
    int ans=0;
    if(x<10) ans=x*10;//01 ->10
    else{
    while(x){
        ans=ans*10+x%10;
        x/=10;
    }
    }
    return ans;
}
bool is_leapyear(int y){
    if((y%4==0&&y%100!=0)||y%400==0) return 1;
    return 0;
}
int main() {
 int year,month,day;
 scanf("%4d%2d%2d",&year,&month,&day);
 for(int i=year;;i++){
     int d=rev(i/100),m=rev(i%100);
     if(m==2){
         if(is_leapyear(i)&&d<=29){
             if(i==year&&m==month&&day==d) continue;
            printf("%4d%02d%02d\n",i,m,d);
            break;
         }else if(is_leapyear(i)==0&&d<=28){
             if(i==year&&m==month&&day==d) continue;
            printf("%4d%02d%02d\n",i,m,d);
            break;
             }else continue;
     }
    if(d<=31&&(m==1||m==3||m==5||m==7||m==8||m==10||m==12)){
        if(i==year&&m==month&&day==d) continue;
            printf("%4d%02d%02d\n",i,m,d);
            break;        
    }
    if(d<=30&&(m==4||m==6||m==9||m==11)){
        if(i==year&&m==month&&day==d) continue;
            printf("%4d%02d%02d\n",i,m,d);
            break;    
    }
 }
 for(int i=year;;i++){
     int d=rev(i/100),m=rev(i%100);
     if(m!=d) continue;
     if(m==2){
         if(is_leapyear(i)&&d<=29){
             if(i==year&&m==month&&day==d) continue;
            printf("%4d%02d%02d",i,m,d);
            break;
         }else if(is_leapyear(i)==0&&d<=28){
             if(i==year&&m==month&&day==d) continue;
            printf("%4d%02d%02d",i,m,d);
            break;
             }else continue;
     }
    if(d<=31&&(m==1||m==3||m==5||m==7||m==8||m==10||m==12)){
        if(i==year&&m==month&&day==d) continue;
            printf("%4d%02d%02d",i,m,d);
            break;        
    }
    if(d<=30&&(m==4||m==6||m==9||m==11)){
        if(i==year&&m==month&&day==d) continue;
            printf("%4d%02d%02d",i,m,d);
            break;    
    }
 }
    return 0;
}
// abcddcba
// ba<=31(不定)
// dc<=12