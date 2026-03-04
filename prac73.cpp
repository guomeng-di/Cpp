//1422. 分割字符串的最大得分
class Solution {
public:
    int maxScore(string s) {
        int len=s.size();
        vector<int> sum(len,0);
        int ans=0;
        for(int i=0;i<len;i++){
            if(!i){
                sum[0]=(s[i]=='0')?1:-1;
            }else{
            if(s[i]=='0') sum[i]=sum[i-1]+1;
            else sum[i]=sum[i-1]-1;
            }
            }int max_a=*max_element(sum.begin(),sum.end());
            int biaoji=0;
            int i;
            for( i=0;i<len;i++){
                if(max_a==sum[i]){ biaoji=i;break;}
            }
            //000100
            if(i==len-1){
                for(int j=0;j<i;j++){
                    if(s[j]=='0') ans++;
                }return ans;
            }else{
            for( i=0;i<=biaoji;i++){
                if(s[i]=='0') ans++;
            }for( i=biaoji+1;i<len;i++){
                if(s[i]=='1') ans++;
            }
        return ans;}
    }
};
//因为只有0和1 尝试使用"摩尔投票法"
//特殊情况:max_a=sum.end