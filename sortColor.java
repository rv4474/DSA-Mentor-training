class Solution {
    public void sortColors(int[] nums) {
        int n=nums.length;
          for(int i=0;i<n-1;i++){
        int c=0,temp=0;
        for(int j=0;j<n-i-1;j++){
            if(nums[j+1]<nums[j]){
                c++;
                temp=nums[j+1];
                nums[j+1]=nums[j];
                nums[j]=temp;
            }
        }
        if(c==0){
            break;}
    }
}}