
//L1-099 帮助色盲
#include <bits/stdc++.h>
using namespace std;
int st,x;
int main(){
    cin>>st>>x;
    if(st==2){
        cout<<'-'<<endl<<"stop";
    }else if(st==0){
        if(x==1){
            cout<<'-'<<endl<<"stop";
        }else{
            cout<<"biii"<<endl<<"stop";
        }
    }else{
        if(x==1){
            cout<<'-'<<endl<<"move";
        }else{
            cout<<"dudu"<<endl<<"move";
        }
    }
    return 0;
}
//L1-100 四项全能
#include <bits/stdc++.h>
using namespace std;
long long n,m;//全班人数和技能总数
int main(){
    cin>>n>>m;
    long long sum=n*(m-1);
    while(m--){
        long long x; cin>>x;
        sum-=x;
    }
    if(sum>=0){ cout<<0; return 0;}
    sum=abs(sum);
    cout<<sum;
    return 0;
}
//L1-098 再进去几个人
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b; cin>>a>>b;
    cout<<(b-a);
    return 0;
}
//L1-097 编程解决一切
#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Problem? The Solution: Programming.";
    return 0;
}
//L1-096 谁管谁叫爹
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll N;//游戏的次数
ll a,b;//整数Na Nb
bool s_a,s_b;
ll ssum(ll x){
    if(x==0) return 0;
    ll ans=0;
    while(x){
        ans+=x%10;
        x/=10;
    }return ans;
}

int main(){
    cin>>N;
    while(N--){
        s_a=0;
        s_b=0;
        cin>>a>>b;
        ll Sa=ssum(a);
        ll Sb=ssum(b);
        if(a%Sb==0) s_a=1;
        if(b%Sa==0) s_b=1;

        if((s_a&&s_b)||((!s_a)&&(!s_b))){
            char q=(a>b)?'A':'B';
            cout<<q<<endl;
        }else if(s_a==1){
            cout<<'A'<<endl;
        }else {
            cout<<'B'<<endl;
        }
    }
    return 0;
}
//L1-095 分寝室
#include <bits/stdc++.h>
using namespace std;
int n0,n1,n;//女生人数、男生人数、寝室数
int ans=INT_MAX;
vector<int> aaa;
int main(){
    cin>>n0>>n1>>n;
    for(int i=1;i<n;i++){
        if(n0%i==0&&n0/i>=2){//女生分i间
            if(n1%(n-i)==0&&n1/(n-i)>=2){
                int signal_a=n0/i;
                int signal_b=n1/(n-i);
                int curr=abs(signal_a-signal_b);
                ans=min(ans,curr);
                if(curr==ans){
                    aaa.push_back(n-i);
                    aaa.push_back(i);
                }
            }
        }
    }
    if(ans==INT_MAX){
        cout<<"No Solution";
    }else{
        cout<<aaa.back();
        aaa.pop_back();
        cout<<" ";
        cout<<aaa.back();
    }
    return 0;
}
//至少两人一间
//同一性别,分配人数一样
//两种性别每间寝室入住的人数差最小
