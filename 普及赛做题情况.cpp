//普及赛
//1 5/5
//P-1 失败乃成功之母
#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"If people never did silly things, nothing intelligent would ever get done.";
    return 0;
}
//2 5/5
//P-2 长颈鹿的身高
#include <bits/stdc++.h>
using namespace std;
int main(){
    int x,n,y;
    cin>>x>>n>>y;
    cout<<x*n+y;
    return 0;
}
//3 10/10
//P-3 这瓜保熟吗
#include <bits/stdc++.h>
using namespace std;
int main(){
    int H,a,b;
    cin>>H>>a>>b;
cout<<H<<endl;
    if(H<a) cout<<"Bu Kan";
    else if(H<b) cout<<"Zhe Gua Bao Shu Ma";
    else cout<<"Chi Gua";
    return 0;
}
//4 10/10
//P-4 单曲循环
#include <bits/stdc++.h>
using namespace std;
int main(){
    int N; cin>>N;
    int sum=0;
    for(int i=1;i<=N;i++){
        int a; cin>>a;
        if(i%2==0) sum+=a;
    }cout<<sum;
    return 0;
}
//5 12/15
//P-5 骗分
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b; cin>>a>>b;
    int target=a+b;
    long long t=1;
    while(1){
        int curr; cin>>curr;
        if(curr==target){
            int h=t/3600;
            int m=t%3600/60;
            t%=60;
            cout<<target<<" Accepted ";
            printf("%02d:%02d:%02d\n",h,m,t);
            return 0;
        }else{
            t+=2;
            if(t>3*3600) {
                cout<<curr<<" Wrong Answer 02:59:59";
            }
        }
    }
    return 0;
}
//题目保证骗分者输出的数字中，至少有一个数字正好等于

//6 15/15
//P-6 从前有座山
#include <bits/stdc++.h>
using namespace std;
int arr[1003];
int main(){
    int n; cin>>n;
    bool sign=0;
    while(n--){
    int a; cin>>a;
        while(a!=-1){
            if(arr[a]==0)arr[a]=1;
            else if(sign==0&&arr[a]==1){cout<<a<<endl;sign=1;}
            cin>>a;
            if(sign==1) continue;
        }if(sign==0) cout<<"NONE\n";
        for(int i=0;i<1003;i++) arr[i]=0; sign=0;
    }
    return 0;
}
//7 20/20
//P-7 双花与三花
#include <bits/stdc++.h>
//sqrt cbrt
using namespace std;
int n;
int a;
bool sign1;
bool sign2;
int main(){
    cin>>n;
    while(n--){
        cin>>a;
        int q=a;
        if(a%2==0){
            a/=2;
            int b=sqrt(a);
            if(b*b==a) sign1=1;
        }if(sign1==1&&a%3==0){
            a*=2;
            a/=3;
            for(int i=1;;i++){
                if(a==(i*i*i)) {sign2=1;break;}
                if(a<(i*i*i)) break;
            }
        }
        if(sign1==1&&sign2==1)cout<<q<<" is a triple flower\n";
        else if(sign1==1) cout<<q<<" is a double flower\n";
        else if(sign1==0) cout<<q<<" is "<<q<<endl;
        sign1=0;sign2=0;
    }
    return 0;
}
//8 13/25
//P-8 从前有座山 - 大数据版
#include <bits/stdc++.h>
using namespace std;
int st[1332];//状态数组
const int x=1331;
int sign;
int main(){
    int n; cin>>n;
    while(n--){
        vector<int> arr;//存最初数据
        int a; cin>>a;
        while(a!=-1){
            arr.push_back(a);
            cin>>a;
        }
        for(size_t i=0;i<arr.size()-2;i++){
            if(sign==0&&st[arr[i]%x]==0) st[arr[i]%x]=1;
            else if(sign==0&&st[arr[i]%x]==1&&st[arr[i+1]%x]==1&&st[arr[i+2]%x]==1){
                st[arr[i]%x]=2;
                st[arr[i+1]%x]=2;
                st[arr[i+2]%x]=2;
                i+=2;
            }else if(st[arr[i]%x]==2&&st[arr[i+1]%x]==2&&st[arr[i+2]%x]==2){
                cout<<arr[i]<<" "<<arr[i+1]<<" "<<arr[i+2]<<endl;
                sign=1;
            }
            if(sign==1) continue;
        }if(sign==0) cout<<"NONE\n";
        for(int i=0;i<1332;i++) st[i]=0;
        sign=0;
    }
    return 0;
}
//9 0/25 还没学
//P-9 梆梆不梆梆
