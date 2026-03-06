//1
#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Hello World!"<<endl;
    return 0;
}
//2 !
#include <bits/stdc++.h>
using namespace std;
int N;
char character;
int chu=0;
int sheng=0;
int sum=1;
int curr=3;
int pan1(){
    sum=1;
    curr=3;
    while(sum<=N){
        sum+=curr*2;//sum=1+6 sum=17 sum=17+7*2
        curr+=2;//curr=5 curr=7 curr=9;
    } return (curr-4);
}
int pan2(){
    if(sum==N)
    return 0;
    else return(N-(sum-(curr-2)*2));
}
int main(){
    cin>>N>>character;
    if(N<1) {
        cout<<N;
        return 0;
    }
     chu=pan1();
     sheng=pan2();
    int kong=0;
    for(int i=chu;i>0;i-=2){
        for(int j=0;j<kong;j++) cout<<' ';
        kong++;
        for(int k=1;k<=i;k++) cout<<character;
        cout<<endl;
    }
    kong-=2;
    for(int i=3;i<=chu;i+=2){
        for(int j=0;j<kong;j++) cout<<' ';
        kong--;
        for(int k=1;k<=i;k++) cout<<character;
        cout<<endl;
    }
 cout<<sheng;
    return 0;
}
//3
#include <bits/stdc++.h>
using namespace std;
int arr[10];
bool st[10];
string s;
int main(){
    cin>>s;
    for(int i=0;i<s.size();i++){
        arr[s[i]-'0']++;
        st[s[i]-'0']=1;
    }
    for(int i=0;i<10;i++){
        if(st[i]==1)
        {cout<<i<<':'<<arr[i]<<endl;}
    }
    return 0;
}
//4
#include <bits/stdc++.h>
using namespace std;
int C;
int F;
int main(){
    cin>>F;
    C=5*(F-32)/9;
    cout<<"Celsius = "<<C;
    return 0;
}
//5 !!!!!
#include <bits/stdc++.h>
using namespace std;
int N;
vector<string>s(1002);
vector<int> arr(1002);
vector<int> b(1002);
int main(){
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>s[i]>>arr[i]>>b[i];
    }
    int M; cin>>M;
    for(int i=0;i<M;i++){
        int t; cin>>t;
        auto j=find(arr.begin(),arr.end(),t);//find!
        //指针相减,得下标
        int a=j-arr.begin();
        cout<<s[a]<<' '<<b[a]<<endl;
    }
    return 0;
}