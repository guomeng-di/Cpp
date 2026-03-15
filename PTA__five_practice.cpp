//1
//L1-027 出租
//考察知识点较全面,涉及sort,reverse,find;建议复习以掌握格式
#include <bits/stdc++.h>
using namespace std;
int arr[11];
int st[11];//状态数组,确保在arr中只出现一次
int main(){
    string s; cin>>s;
    int cnt=0;
    for(int i=0;i<11;i++){
        if(st[s[i]-'0']==0){
            arr[cnt++]=s[i]-'0';
            st[s[i]-'0']=1;
        }
     }
    sort(arr,arr+cnt);
    reverse(arr,arr+cnt);
    cout<<"int[] arr = new int[]{";
    for(int i=0;i<cnt;i++){
        if(i==cnt-1) cout<<arr[i]<<"};\n";
        else cout<<arr[i]<<",";
    }
    cout<<"int[] index = new int[]{";
    for(int i=0;i<11;i++){
        //auto it=find(arr,s[i]);
        auto it=find(arr,arr+cnt,s[i]-'0');
        if(i==10) cout<<it-arr<<"};";
        else cout<<it-arr<<",";
    }
    return 0;
}
//arr数组是电话号码中所有会出现的数字
//index数组是该号码在arr的下标

//2
//L1-031 到底是不是太胖了
#include <bits/stdc++.h>
using namespace std;
int main(){
     int N; cin>>N;
    while(N--){
        double h,w; cin>>h>>w;
        double biao_w=(h-100)*0.9*2;
        if(abs(w-biao_w)<0.1*biao_w) cout<<"You are wan mei!\n";
        else if(w>biao_w) cout<<"You are tai pang le!\n";
        else cout<<"You are tai shou le!\n";
    }
    return 0;
}

//3
//L1-032 Left-pad
//优化:提取某字符串的一段子字符串,用substr
//string substr(起始下标,子串长度) eg:string result = s.substr(len - n); 
#include <bits/stdc++.h>
using namespace std;
int n;
char c;
string s;
int main(){
    scanf("%d %c\n",&n,&c);
    getline(cin,s);
    int len=s.size();
    if(len==n){
            cout<<s;
    }else if(len<n){
        int cha=n-len;
        for(int i=1;i<=cha;i++)
            cout<<c;
        cout<<s;
    }else{
        int start=len-n;
        for(int i=start;i<len;i++)
            cout<<s[i];
    }
    return 0;
}

//4
//L1-081 今天我要赢
#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"I'm gonna win! Today!\n";
    cout<<"2022-04-23";
    return 0;
}

//5
//L1-071 前世档案
//思路:把回答看成是二进制,y是0,n是1;二进制转十进制的结果加1是ans
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m; cin>>n>>m;
    while(m--){
        string s; cin>>s;
        //getline(cin,s);
        int ans=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='n') ans+=pow(2,n-i-1);
        }cout<<ans+1<<endl;
    }
    return 0;
}
