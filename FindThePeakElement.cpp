class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int a;
        if(nums.size()==1) return 0;
        if(nums.size()==2) {
            if(nums[0]>nums[1]) return 0;
            else return 1;
        }
        if(nums[0]>nums[1]) return 0;
        if(nums[nums.size()-1]>nums[nums.size()-2]) return nums.size()-1;
        for(int i=1;i<nums.size()-2;i++){
            if(nums[i]>nums[i-1]&&nums[i]>nums[i+1]) {
                a=i;
                break;
            }
        }
        return a;  
    }
};