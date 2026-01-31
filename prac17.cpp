//49106. 肖恩的苹果林(二分查找)
#include <bits/stdc++.h>
using namespace std;
#include<vector>
#include<algorithm>
bool check(int max,const vector<int>&v,int M)
{
    int num=1,location=v[0];
    for(int i=1;i<v.size();i++)
    {
        if(v[i]-location>=max)
        {   num++;
            location=v[i];
        }
    }
    return num>=M;
}
int main()
{
    int N,M;
    cin>>N>>M;
    vector<int>v(N);
    for(int i=0;i<N;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int l=1,r=v[N-1]-v[0];//种树可选距离在[l,r]之间 
    while(l<r)
    {
        int mid=(l+r)/2;
        if(check(mid,v,M))l=mid;//[mid,r]
        else r=mid-1;//[l,mid-1]
    }
    
    cout<<r<<endl;

    return 0;
}