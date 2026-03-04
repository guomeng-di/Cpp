//1534. 统计好三元组
class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int n=arr.size();
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    int a1=abs(arr[i]-arr[j]);
                    int b1=abs(arr[j]-arr[k]);
                    int c1=abs(arr[i]-arr[k]);
                    if(a1<=a&&b1<=b&&c1<=c) cnt++;
                }
            }
        }return cnt;
    }
};
//2586. 统计范围内的元音字符串数
class Solution {
public:
bool panduan(char t){
    if(t=='a'||t=='e'||t=='i'||t=='o'||t=='u') return 1;
    return 0;
}
bool split(string& s){
    int len=s.size();
    i//法一:暴力枚举f(panduan(s[0])&&panduan(s[len-1])) return 1;
    return 0;
}
    int vowelStrings(vector<string>& words, int left, int right) {
        int ans=0;
        if(left>right) return 0;
        for(int i=left;i<=right;i++){
            if(split(words[i])) ans++;
        }return ans;
    }
};
