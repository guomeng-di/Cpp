//递归 DFS
//821. 跳台阶
#include <bits/stdc++.h>
using namespace std;
int n;

int dfs(int x){
    if(x==2) return 2;
    if(x==1) return 1;
    return dfs(x-1)+dfs(x-2);
}
int main(){
    cin>>n;
    cout<<dfs(n);
    return 0;
}
//92. 递归实现指数型枚举
#include <bits/stdc++.h>
using namespace std;
int n;
int st[18];//存状态,输结果
void dfs(int x){
    //出口
    if(x>n){
        for(int i=1;i<x;i++){
            if(st[i]==1){
                printf("%d ",i);
            }
        }cout<<endl;
        return ;
    }
    st[x]=1;//选
    dfs(x+1);//考虑下一个数
    st[x]=0;//恢复
    
    st[x]=2;
    dfs(x+1);
    st[x]=0;
}
int main(){
    cin>>n;
    dfs(1);
    return 0;
}
//P1706 全排列问题
#include <bits/stdc++.h>
using namespace std;
//枚举每个位置放哪个数
int n;
int st[12];//状态 0未选 1选
int arr[12];//记录答案
void dfs(int x){
    if(x>n){
        for(int i=1;i<x;i++){
            printf("%5d",arr[i]);
        }cout<<endl;
        return ;
    }
//选时,从1~n的顺序
    for(int i=1;i<=n;i++){
        if(st[i]==0){
        st[i]=1;//i是数字
        arr[x]=i;//x是位置
        dfs(x+1);
        st[i]=0;
        arr[x]=0;}
    }
}
int main(){
    cin>>n;
    dfs(1);//1表示第一个位置
    return 0;
}
//P1157 组合的输出
#include <bits/stdc++.h>
using namespace std;
int n,r;
int st[23];//状态
int arr[23];//答案
void dfs(int x,int cnt){//cnt是位置
    if(cnt>r){
        for(int i=1;i<=r;i++){
            printf("%3d",arr[i]);
        }cout<<endl;
        return ;
    }
    for(int i=x;i<=n;i++){//x是起点
        if(!st[i]){
            st[i]=1;
            arr[cnt]=i;
            dfs(i+1,cnt+1);//下次从i+1开始
            st[i]=0;
        }
    }
}
int main(){
    cin>>n>>r;
    dfs(1,1);
    return 0;
}