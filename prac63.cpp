//1184. 公交站间的距离
class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        if(start==destination) return 0;
        if(start>destination) swap(start,destination);
        int sum=0;
        for(int i=0;i<distance.size();i++) sum+=distance[i];
        int curr=0;
        for(int i=start;i<destination;i++) curr+=distance[i];
        int ans=min(curr,sum-curr);
        return ans;
    }
};