//657. 机器人能否返回原点
class Solution {
public:
    bool judgeCircle(string moves) {
        int up=0,left=0;
        int len=moves.size();
        for(int i=0;i<len;i++){
            if(moves[i]=='U') up++;
            else if(moves[i]=='D') up--;
            else if(moves[i]=='L') left++;
            else if(moves[i]=='R') left--;
        }
        if(up==0&&left==0) return 1;
        return 0;
    }
};
