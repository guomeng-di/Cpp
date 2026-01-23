//45399. 一年中的第几天
#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int year,month,day;
    while(cin>>year>>month>>day){
        int sum=0;
        if(!year&&!month&&!day) return 0;
        else if(month==2) cout<<31+day<<endl;
        else if(month==1) cout<<day<<endl;
        else{ 
            for(int i=0;i<month-1;i++){
                sum+=arr[i];
            }sum+=day;
            if((year%4==0&&year%100!=0)||year%400==0)
            sum+=1;
            cout<<sum<<endl;
        }
    }

    return 0;
}