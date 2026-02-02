//48932. 2023(暴力+枚举)
//优化:
#include <bits/stdc++.h>
using namespace std;
bool ck(int u)
{
    vector<int>a;
    while(u)
    {
        a.push_back(u%10);//给容器的最后面塞一个新东西，塞完后容器的长度会自动加1
        u/=10;
    }
    reverse(a.begin(),a.end());//倒转
    int n=a.size();
    int cnt1=0,cnt2=0,cnt3=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==2)    cnt1++;
        if(a[i]==0&&cnt1>0)    cnt2++;
        if(a[i]==2&&cnt2>0)    cnt3++;
        if(a[i]==3&&cnt3>0)        return true;
    }
    return false;
}

int main()
{
    int ans=0;
    for(int i=12345678;i<=98765432;i++)
    {
        ans+=ck(i);
    }
    cout<<(98765432-12345678+1)-ans<<'\n';//输出的是不含有2023的
    return 0;
}
//暴力:
#include <bits/stdc++.h>
using namespace std;
vector<int> zhuan(int x){
    vector<int>f(8);
    int i=7;
    while(x){
        f[i]=x%10;
        x/=10;
        i--;
    }
    return f;
}
int main() {
    int arr[4]={2,0,2,3};int cnt=0;
  for(int i=12345678;i<=98765432;i++){
      vector<int>f=zhuan(i);
      int a=0;
      for(int j=0;j<8;j++){
          if(a==4) break;
          if(arr[a]==f[j]) a++;
  }if(a!=4) cnt++;
  }
  cout<<cnt;
    return 0;
}