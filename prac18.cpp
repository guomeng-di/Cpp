//4. 寻找两个正序数组的中位数(二分查找)
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int l1=nums1.size(),l2=nums2.size();
        //1合并数组
        vector<int>nums(l1+l2);
        for(int i=0;i<l1;i++) nums[i]=nums1[i];
        for(int i=l1,cnt=0;i<l1+l2;i++,cnt++) nums[i]=nums2[cnt];
        //2sort
        sort(nums.begin(),nums.end());
        //3计算中位数
        if((l1+l2)%2) return (double)nums[(l1+l2)/2];
        else return (double)(((double)nums[(l1+l2)/2]+nums[(l1+l2)/2-1])/2);
    }
};