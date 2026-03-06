
//7
#include <bits/stdc++.h>
using namespace std;
//行末没有最后的空格
int n;
int cnt=0;
void weishu(){
    int x=n;
    while(x){
        x/=10;
        cnt++;
    }
}
void shu(int a){
    switch(a){
        case 0:cout<<"ling";break;
        case 1:cout<<"yi";break;
        case 2:cout<<"er";break;
        case 3:cout<<"san";break;
        case 4:cout<<"si";break;
        case 5:cout<<"wu";break;
        case 6:cout<<"liu";break;
        case 7:cout<<"qi";break;
        case 8:cout<<"ba";break;
        case 9:cout<<"jiu";break;
    }
}
void fenjie(){
    for(int i=cnt-1;i>=1;i--){//2 1
        int ans=n/pow(10,i);//1 2
        shu(ans);
        cout<<' ';
        n%= (int)pow(10,i);
    }shu(n);
    return ;
}
int main(){
    cin>>n;
    if(n==0){
        cout<<"ling";
        return 0;
    }if(n<0){
        cout<<"fu ";
        n=-n;
    }
    weishu();
    fenjie();
    return 0;
}
//11
#include <bits/stdc++.h>
using namespace std;
int main(){
    char arr[10005];
    char b[10005];
    char c;
    int cnt=0;
    while((c=getchar())!='\n'&&cnt<10003){
        arr[cnt++]=c;
    }
    char e;
    int a=0;
    int biaoji=0;
    while((e=getchar())!='\n'&&a<10003){
        b[a++]=e;
    }
    for(int i=0;i<cnt;i++){
        for(int j=0;j<a;j++){
            if(arr[i]==b[j]){
                biaoji=1;
                break;
            }
        }if(!biaoji)cout<<arr[i];
        biaoji=0;
    }
    return 0;
}
//12
#include <bits/stdc++.h>
using namespace std;
int n;
int main(){
    cin>>n;
    printf("2^%d = %d",n,(int)pow(2,n));
    return 0;
}
//38
#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Hello World\nHello New World\n";
    return 0;
}
//63
#include <bits/stdc++.h>
using namespace std;
int main(){
    int N; cin>>N;
    for(int i=0;i<N;i++){
        bool sex;
        int tall;
        int weight;
        cin>>sex>>tall>>weight;
        if(sex){
            //1 tall
            if(tall>130)
                cout<<"ni li hai! ";
            else if(tall==130)
                cout<<"wan mei! ";
            else cout<<"duo chi yu! ";
            //2 weight
            if(weight>27)
                cout<<"shao chi rou!\n";
            else if(weight==27)
                cout<<"wan mei!\n";
            else cout<<"duo chi rou!\n";
        }else{
                        //1 tall
            if(tall>129)
                cout<<"ni li hai! ";
            else if(tall==129)
                cout<<"wan mei! ";
            else cout<<"duo chi yu! ";
            //2 weight
            if(weight>25)
                cout<<"shao chi rou!\n";
            else if(weight==25)
                cout<<"wan mei!\n";
            else cout<<"duo chi rou!\n";
        }
    }
    return 0;
}
//65
#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Talk is cheap. Show me the code.";
    return 0;
}
//74
#include <bits/stdc++.h>
using namespace std;
int main(){
    long N,K,M;
    cin>>N>>K>>M;
    long ans=N-(K*M);
    cout<<ans;
    return 0;
}