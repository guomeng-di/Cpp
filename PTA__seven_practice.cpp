//1
//L1-085 试试手气
//考察枚举
#include <bits/stdc++.h>
using namespace std;
int st[7];//1-6号摇出来过吗 0无 1有
int start[7];//起始状态
int n;//处理几次
int ans;//存答案
int main(){
    for(int i=1;i<=6;i++) cin>>start[i];
    cin>>n;
    for(int i=1;i<=6;i++){//逐个处理
        st[start[i]]=1;
        int a=n;
        while(a--){//摇n次
            for(int j=6;j>=1;j--){
                if(st[j]==0){
                    st[j]=1;
                    ans=j;
                    break;
                }else continue;
            }
        }//找到答案
        if(i==6) cout<<ans<<endl;
        else cout<<ans<<" ";
        //初始化
        for(int i=1;i<=6;i++) st[i]=0;
    }
    return 0;
}
//2
//L1-087 机工士姆斯塔迪奥
//考察数学
#include <bits/stdc++.h>
using namespace std;
int n,m,q;
int t,c;
int st[100002];//行
int st2[100002];
int main(){
    cin>>n>>m>>q;
    while(q--){
        cin>>t>>c;
        if(t==0&&st[c]==0) {n--;st[c]=1;}
        else if(t==1&&st2[c]==0) {m--;st2[c]=1;}
    }
    cout<<n*m;
    return 0;
}
//3
//L1-086 斯德哥尔摩火车上的题
//考察:1 cin读到空格停止,空格留在缓冲区;getline读到空格停止,空格不会留在缓冲区,也不会存入字符串
//    2 比较字符串是否相等 s1==s2
#include <bits/stdc++.h>
using namespace std;
string s1,s2;
string a1,a2;
int main(){
    getline(cin,s1);
    getline(cin,s2);
    for(int i=1;i<s1.size();i++){
        if(s1[i]%2==s1[i-1]%2) a1+=max(s1[i],s1[i-1]);
    }    
    for(int i=1;i<s2.size();i++){
        if(s2[i]%2==s2[i-1]%2) a2+=max(s2[i],s2[i-1]);
    }
    if(a1==a2) cout<<a1;
    else cout<<a1<<endl<<a2<<endl;
    return 0;
}
//4
//L1-006 连续因子
//枚举所有可能的连续因子起始点和长度
#include <bits/stdc++.h>
using namespace std;
int ans;
int start;               
int main(){
    int N; cin>>N;
    for(int i=2;i<N;i++){
        long long product=1;//乘积
        int j=i;//start
        while(1){
            product*=j;
            if(product>=N||N%product!=0) break;
            if(N%product==0){
               if(j-i+1>ans){
                   ans=j-i+1;
                start=i;}
            }j++;
        }if(i>N/2) break;
    }
    cout<<ans<<endl;
    for(int i=start;i<start+ans;i++){
        if(i==start+ans-1) cout<<i;
        else cout<<i<<"*";
    }
    return 0;
}
//5
//L1-009 N个数求和
//优化: 20
#include <bits/stdc++.h>
using namespace std;
bool sign=0;
long long gcd(long long a,long long b){
    a=abs(a);
    b=abs(b);
    while(b!=0){   
        long long  temp=a%b;
         a=b;
         b=temp;}
    return a;
}
int main(){
    int n;cin>>n;
    long long fenzi=0;
    long long fenmu=1;
    for(int i=1;i<=n;i++){
        int a,b;scanf("%d/%d",&a,&b);
        //通分相加
        long long curr_fenzi=fenzi*b+a*fenmu;
        long long curr_fenmu=fenmu*b;
        //最大公约数
        long long g=gcd(curr_fenzi,curr_fenmu);
        fenzi=curr_fenzi/g;
        fenmu=curr_fenmu/g;
    }
    if(fenzi<0){
        sign=1;
        fenzi=-fenzi;
    }
    if(fenzi%fenmu==0){
        if(sign==0)cout<<fenzi/fenmu;
        else cout<<-fenzi/fenmu;        
    }
    else if(fenzi>fenmu){
        if(sign==0)cout<<fenzi/fenmu<<' ';
        else cout<<-fenzi/fenmu<<' ';
        fenzi%=fenmu;
        cout<<fenzi<<'/'<<fenmu;
    }else{
        if(sign==0)
        cout<<fenzi<<'/'<<fenmu;
        else cout<<-fenzi<<'/'<<fenmu;
    }
    return 0;
}
//暴力:有数据溢出的风险,且未考虑分子<0   8
#include <bits/stdc++.h>
using namespace std;
int N;
int a[103];
int b[103];
bool sign=0;
void huajian(long long fenzi,long long fenmu){
    if(fenzi<0){bool sign=1; fenzi=-fenzi;}
    for(int i=2;i<=fenzi;i++){
        while(fenzi%i==0&&fenmu%i==0){
            fenzi/=i; fenmu/=i;
        }
    }if(sign==0)cout<<fenzi<<'/'<<fenmu;
    else cout<<-fenzi<<'/'<<fenmu;
    return ;
}
int main(){
    cin>>N;
    long long fenmu=1;
    for(int i=1;i<=N;i++){
        scanf("%d/%d",&a[i],&b[i]);
        fenmu*=b[i];
    }
    long long fenzi=0;
    for(int i=1;i<=N;i++){
        fenzi+=a[i]*fenmu/b[i];
    }
    if(fenzi%fenmu==0){
        cout<<fenzi/fenmu<<' ';
    }else if(fenzi>fenmu){
        cout<<fenzi/fenmu<<' ';
        fenzi%=fenmu;
        huajian(fenzi,fenmu);
    }else{
        huajian(fenzi,fenmu);
    }
    return 0;
}
//6
//L1-020 帅到没朋友
//考察分析题目的能力
#include <bits/stdc++.h>
using namespace std;
map<int,int>mp;
vector<int>q;
int f[100002];
int main(){
    int N; cin>>N;
    for(int i=1;i<=N;i++){
        int k; cin>>k;
        if(k==1){//只有自己一个人在朋友圈->没有朋友
            int l; cin>>l;
            continue;
        }
        while(k--){
            int m; cin>>m;
            mp[m]=1;//有朋友,标记
        } 
    }int M; cin>>M;
    while(M--){
        int l; cin>>l;
        if(mp.find(l)==mp.end()&&f[l]==0){
            q.push_back(l);
            f[l]=1;
        }
    }
    if(q.empty()){
        cout<<"No one is handsome";
    }else{
        for(int i=0;i<q.size();i++){
            if(i==q.size()-1) printf("%05d",q[i]);
            else printf("%05d ",q[i]);
        }
    }
    return 0;
}
//7
//L1-025 正整数A+B
//注意:string s;cin>>s;(到空格停止) getline(cin,s);(到换行停止)
#include <bits/stdc++.h>
using namespace std;
char a='-';
char b='-';//maybe ?
int main(){
    string s; getline(cin,s);
    long long sum1=0;//A
    long long sum2=0;//B
    int i;
    for(i=0;i<s.size();i++){
        if(s[i]==' ') break;//遇到空格
        if(!(s[i]<='9'&&s[i]>='0')) {a='?';continue;}
        if(s[i]<='9'&&s[i]>='0') sum1=sum1*10+(s[i]-'0');
    }
    if(a!='?'){
        if(sum1>1000||sum1<1) a='?';
    }

    for(int j=i+1;j<s.size();j++){
        if(!(s[j]<='9'&&s[j]>='0')) {b='?';break;}
        if(s[j]<='9'&&s[j]>='0') sum2=sum2*10+(s[j]-'0');
    }
    if(b!='?'){
        if(sum2>1000||sum2<1) b='?';
    }

    if(a=='?'&&b=='?') cout<<"? + ? = ?";
    else if(a=='?') cout<<"? + "<<sum2<<" = ?";
    else if(b=='?') cout<<sum1<<" + ? = ?";
    else cout<<sum1<<" + "<<sum2<<" = "<<(sum1+sum2);
    return 0;
}
