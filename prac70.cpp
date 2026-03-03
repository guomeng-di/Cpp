class Solution {
    int nums[1003];
public:
    int xorOperation(int n, int start) {
        for(int i=0;i<n;i++){
            nums[i]=start+2*i;
        }
        int res=nums[0];
        for(int i=1;i<n;i++){
            res^=nums[i];
        }return res;
    }
};
//异或:二进制位 相同为0 不同为1
