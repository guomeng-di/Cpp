//303. 区域和检索 - 数组不可变(前缀和)
class NumArray {
    vector<int>p;
public:
    NumArray(vector<int>& nums) {
        p.resize(nums.size()+1);
        p[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            p[i]=p[i-1]+nums[i];
        }
    }
  //-2 -2 1 -4 -2 -3  
    int sumRange(int left, int right) {
        if(left>=1)return p[right]-p[left-1];
        else return p[right];
    }
};