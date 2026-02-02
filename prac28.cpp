//167. 两数之和 II - 输入有序数组 (双指针)
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        long left=0,right=numbers.size()-1;
        vector<int>arr(2);
        while(1){
            if(numbers[left]+numbers[right]==target){
                arr[0]=left+1,arr[1]=right+1;
                break;
            }else if(numbers[left]+numbers[right]>target) right--;
            else left++;
        }
        return arr;
    }
};