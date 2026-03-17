//1
//L1-033 出生年
//1 memset函数实现初始化  2 看不懂题目意思
#include <bits/stdc++.h>
using namespace std;
int y,n;
int arr[10];
bool zhaoxiangtong(int x){
    memset(arr,0,sizeof(arr));//!重置
    int cnt=0;
    for(int i=0;i<4;i++){
        arr[x%10]++;
        x/=10;
    }//对四位数字都进行统计
    for(int i=0;i<10;i++){
        if(arr[i]>0) cnt++;//不同的数字有几个
    }if(cnt==n) return 1;
    else return 0;
}
int main(){
    cin>>y>>n;
    for(int i=y;;i++){
        if(zhaoxiangtong(i)){//均不同
            printf("%d %04d",i-y,i);
            return 0;
        }
    }
    return 0;
}
//题目含义:
//n个数字都不相同->找恰好有n个不同数字的年
//自动补齐四位->0 - 0001

//2
//L1-039 古风排版
//1 string不能在读后再加字符 2append可以帮助添加 3string读取时注意换行
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; //cin>>n;//后换行符被getline()读取
    scanf("%d\n",&n);
    string s; getline(cin,s);
    int len=s.size();//len=19
    // while(len%n!=0){
    //     s[len++]=' ';
    // }
    //string 的下标访问不能超出当前长度
    int add=(n-len%n)%n;
    s. append(add,' ');
    len=s.size();
    for(int i=0;i<n;i++){//n行
        for(int j=len-1;j>=0;j--){//遍历 找符合要求的
            if((j-i)%n==0) cout<<s[j];
        }cout<<endl;
    }
    return 0;
}
  // 8  4 0
  // 9  5 1
  // 10 6 2
  // 11 7 3

//3
//L1-050 倒数第N个字符串
//字符串问题,转化为进制问题  KMP算法
//找规律
// 1 aaa  000 +1
// 2 aab  001 +1
// 3 aac  003 +1
//进制问题!a=0 26进制
#include <bits/stdc++.h>
using namespace std;
vector<char> s;
vector<char> q;
int main(){
    int L,N; cin>>L>>N;
    //const long long int sum=pow(26,L);
        long long sum = 1;
    for (int i = 0; i < L; i++) {
        sum *= 26;
    }
    long long int tar=sum-N;
    while(tar){
        int a=tar%26;
        char c=a+'a';
        s.push_back(c);
        tar/=26;
    }
    int len=s.size();
    for(int i=0;i<len;i++)
        q.push_back(s[i]);
    for(int i=1;i<=L-len;i++)
        q.push_back('a');
    while(!q.empty()){
        cout<<q.back();
        q.pop_back();
    }
    return 0;
}

//4
//L1-055 谁是赢家
//easy
//分析:
//1 全部评委认可 赢
//2 票数高
#include <bits/stdc++.h>
using namespace std;
int a_pingwei;
int main(){
    int pa,pb;
    cin>>pa>>pb;
    for(int i=0;i<3;i++){
        int x; cin>>x;
        if(x==0) a_pingwei++;
    }
    if(a_pingwei==0)
        printf("The winner is b: %d + %d",pb,3);
    else if(a_pingwei==3)
        printf("The winner is a: %d + %d",pa,3);
    else {
        if(pa>pb){
            printf("The winner is a: %d + %d",pa,a_pingwei);
        }else{
            printf("The winner is b: %d + %d",pb,3-a_pingwei);
        }
    }
    return 0;
}

//5
//L1-060 心理阴影面积
//easy
#include <bits/stdc++.h>
using namespace std;
int main(){
    int x,y; cin>>x>>y;
    int ans=100*100*0.5-x*y*0.5-(100-y)*(100-x)*0.5-(100-x)*y;
    cout<<ans;
    return 0;
}

//6
//L1-070 吃火锅
////find函数可以找子字符串 找不到返回string::npos
#include <bits/stdc++.h>
using namespace std;
int cnt;//记录总共几句话
int first;//第一次出现
int total;//符合目标的有几句
int main(){
    string s;
    while(getline(cin,s)){
        if(s==".") break;
        cnt++;
        if(first==0&&s.find("chi1 huo3 guo1")!=string::npos){
            first=cnt;total++;
        }else if(first&&s.find("chi1 huo3 guo1")!=string::npos){
            total++;
        }
    }
    cout<<cnt<<endl;
    if(first==0) cout<<"-_-#";
    else cout<<first<<" "<<total;
    return 0;
}

//7
//L1-075 强迫症
//easy
#include <bits/stdc++.h>
using namespace std;
int main(){
    int year,month;
    int init;
    cin>>init;
        year=init/100;
    if(year<22) year+=2000;
    else if(year<100) year+=1900;
        month=init%100;
    printf("%d-%02d",year,month);
    return 0;
}
