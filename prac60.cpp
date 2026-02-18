//46029. 奇怪的电梯 (BFS)!!
// //题目:有一天桐桐做了一个梦,梦见一种很奇怪的电梯。大楼的每一层楼都可以停电梯，
// 而且第I层楼（1<=i<=n）有一个数字Ki(0<=Ki<=N)。电梯只有四个按钮：开，关，上，下。
// 上下的层数等于当前楼层上的那个数字。当然如果不能满足要求，相应的按钮就会失灵。
// 例如：3 3 1 2 5代表了Ki(K1=3,k2=3……），从一楼开始。
//     在一楼按“上”可以到4楼，按“下”是不起作用的，因为没有-2楼。 
//     那么从A楼到B楼至少要按几次按钮呢？
// [输入格式]
// 第1行为三个正整数表示N，A，B（1<=N<=200,1<=A,B<=N)

// 通过率80%:贪心算法
#include <bits/stdc++.h>
using namespace std;
int main() {
    int N,A,B; cin>>N>>A>>B;
    vector<int>arr(N+1);
    vector<int>a(N+1);
    for(int i=1;i<=N;i++) cin>>arr[i];
    int cnt=0;
    while(A!=B){
        int A_up=(A+arr[A]>N)?0:A+arr[A];
        int A_down=(A-arr[A]<0)?0:A-arr[A];
        if(A_down==0&&A_up==0){
            cout<<-1;
            return 0;
        }else if(A_down==0&&A_up!=0){//只能上
            A+=arr[A];
            a[A]++;
            cnt++;
            if(A==B) break;
        }else if(A_down!=0&&A_up==0){
            A-=arr[A];
            a[A]++;
            cnt++;
            if(A==B) break;
        }else{
            if(A+arr[A]==B){
                cnt++;
                break;
            }
            else if(A+arr[A]>B)  A-=arr[A];
            else A+=arr[A];
            cnt++;
            a[A]++;
        }
        if(a[A]==3){
            cout<<-1;
            return 0;
        }
    }
    cout<<cnt;
    return 0;
}


//正确方法:BFS(用于最短,最小问题)
//原理见https://www.bilibili.com/video/BV1uCH1eoEYP/?spm_id_from=333.337.search-card.all.click&vd_source=153c42689e77af3af92ffd0cb5a230da
#include <bits/stdc++.h>
using namespace std;
int main(){
    int N,A,B; cin>>N>>A>>B;
    if(A==B){
        cout<<0;
        return 0;
    }
    vector<int>K(N+1);//K[i]表示第i层电梯对应的数字
    for(int i=1;i<=N;i++) cin>>K[i];
    vector<int>dist(N+1,-1);
    //dist[i] 1表示到达第i层的(最小)按键次数 2值更改表明已搜索
    queue<int>q;//队列实现搜索
    q.push(A);
    dist[A]=0;
    while(!q.empty()){
        int curr=q.front();//当前楼层
        q.pop();//踢出去
        int up=curr+K[curr];
        if(up<=N&&dist[up]==-1){
            dist[up]=dist[curr]+1;
            q.push(up);
            if(up==B){
                cout<<dist[up];
                return 0;
            }
        }
        int down=curr-K[curr];
        if(down>=0&&dist[down]==-1){
            dist[down]=dist[curr]+1;
            q.push(down);
            if(down==B){
                cout<<dist[down];
                return 0;
            }
        }
    }
    cout<<-1;
    return 0;
}
